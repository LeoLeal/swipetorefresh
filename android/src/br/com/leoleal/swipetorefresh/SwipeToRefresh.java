package br.com.leoleal.swipetorefresh;

import org.appcelerator.kroll.KrollDict;
import org.appcelerator.titanium.TiApplication;
import org.appcelerator.titanium.proxy.TiViewProxy;
import org.appcelerator.titanium.util.TiRHelper;
import org.appcelerator.titanium.util.TiRHelper.ResourceNotFoundException;
import org.appcelerator.titanium.view.TiUIView;

import android.util.Log;
import android.view.LayoutInflater;

import br.com.leoleal.swipetorefresh.SwipeRefreshLayout.OnRefreshListener;

public class SwipeToRefresh extends TiUIView {
	
	private MySwipeToRefresh layout;
	private TiViewProxy view;
	
	public static final String PROPERTY_VIEW = "view";
	public static final String PROPERTY_COLOR_SCHEME = "colorScheme";
	private static final String TAG = "SwipeRefresh";
	
	int color1 = 0;
	int color2 = 0;
	int color3 = 0;
	int color4 = 0;
	int layout_swipe_refresh = 0;
	
	// Constructor for SwipeRefresh
	public SwipeToRefresh(final SwipeToRefreshProxy proxy) {
		super(proxy);
		
		try {
			layout_swipe_refresh = TiRHelper.getResource("layout.swipe_refresh");
			color1 = TiRHelper.getResource("color.color1");
			color2 = TiRHelper.getResource("color.color2");
			color3 = TiRHelper.getResource("color.color3");
			color4 = TiRHelper.getResource("color.color4");
		}
		catch (ResourceNotFoundException e) {
			Log.e(TAG, "Resources not found!");
		}
		
		LayoutInflater inflater = LayoutInflater.from(TiApplication.getInstance());
		layout = (MySwipeToRefresh) inflater.inflate(layout_swipe_refresh, null, false);
		
		layout.setOnRefreshListener(new OnRefreshListener() {
			@Override
			public void onRefresh() {
				if (proxy.hasListeners("refreshing")) {
					proxy.fireEvent("refreshing", null);
				}
			}
		});
		
		setNativeView(layout);
	}

	@Override
	public void processProperties(KrollDict d) {
		if (d.containsKey(PROPERTY_VIEW)) {
			Object view = d.get(PROPERTY_VIEW);
			if (view != null && view instanceof TiViewProxy) {
					this.view = (TiViewProxy) view;
					this.layout.setNativeView(this.view.getOrCreateView().getNativeView());
					this.layout.addView(this.view.getOrCreateView().getOuterView());
					this.layout.setColorScheme(color1, color2, color3, color4);
				}
		}
		super.processProperties(d);
	}

	public void add(TiViewProxy view) {
		if (view != null && view instanceof TiViewProxy) {
			this.view = (TiViewProxy) view;
			this.layout.setNativeView(this.view.getOrCreateView().getNativeView());
			this.layout.addView(this.view.getOrCreateView().getOuterView());
			this.layout.setColorScheme(color1, color2, color3, color4);
		}
	}

	public boolean isRefreshing() {
		return this.layout.isRefreshing();
	}
	
	public void setRefreshing(final boolean refreshing) {
		view.getActivity().runOnUiThread(new Runnable() {
			@Override
			public void run() {
				layout.setRefreshing(refreshing);
			}
		});
	}
	
}
