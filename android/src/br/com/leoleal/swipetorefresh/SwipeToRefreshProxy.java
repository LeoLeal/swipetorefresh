package br.com.leoleal.swipetorefresh;

import org.appcelerator.kroll.annotations.Kroll;
import org.appcelerator.titanium.proxy.TiViewProxy;
import org.appcelerator.titanium.view.TiUIView;

import android.app.Activity;

@Kroll.proxy(creatableInModule=SwipetorefreshModule.class)
public class SwipeToRefreshProxy extends TiViewProxy {

	private SwipeToRefresh swipeRefresh;
	
	public SwipeToRefreshProxy() {
		super();
		this.swipeRefresh = new SwipeToRefresh(this);
	}

	@Override
	public TiUIView createView(Activity activity) {
		return this.swipeRefresh;
	}
	
	@Kroll.method
	public void setRefreshing(boolean refreshing) {
		if (this.swipeRefresh != null){
			this.swipeRefresh.setRefreshing(refreshing);
		}		
	}
	
	@Kroll.method
	public void add(TiViewProxy view) {
		this.swipeRefresh.add(view);
		return;
	}
	
	@Kroll.method @Kroll.getProperty
	public boolean isRefreshing() {
		if (this.swipeRefresh != null){
			return this.swipeRefresh.isRefreshing();
		}
		return false;
	}
}
