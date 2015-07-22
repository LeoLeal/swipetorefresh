Ti.SwipeRefreshLayout Titanium Module
===========================================

This is a module based on iskugor's fork, because SwipeRefreshLayout on latest appcelerator sdk cant touch main thread views inside a module.

Building the module
-----------
You'll need to modify "build.xml" and ".classpath" according to paths on your machine.
	

To initialize
-----------
The initialization of the module requires a handle to the scrollable view. If the scrollable view is in xml, you can create a new controller for the scrollable view and then pass it in as the view.

	var myListView = Ti.UI.createListView({
		height: Ti.UI.FILL,
		width: Ti.UI.FILL
	})

	var swipeRefreshModule = require('com.rkam.swiperefreshlayout');
	var swipeRefresh = swipeRefreshModule.createSwipeRefresh({
		view: myListView,
		height: Ti.UI.FILL,
		width: Ti.UI.FILL
	});

	$.content.add(swipeRefresh);

Setting color scheme
-----------
If you want to modify the 4 colours used in the progress bars at the top, modify the colors.xml file in (module folder)/platform/android/res/values which looks like this.

	<?xml version="1.0" encoding="utf-8"?>
	<resources>
		<!-- Declare SwipeRefreshLayout color scheme here -->
		<color name="color1">#1996BE</color>
		<color name="color2">#48B6D9</color>
		<color name="color3">#80D3ED</color>
		<color name="color4">#C2F0FF</color>
	</resources>

Adding the event listener for when refresh happens
-----------
A refreshing event is fired when the swipe gesture is completed.

	swipeRefresh.addEventListener('refreshing', function() {

		// Put your refresh code here
	
	});

Set refreshing
-----------
Used to stop the progress bar animation when refreshing is done.

	swipeRefresh.setRefreshing(false);

Check if refreshing
-----------
The state of the SwipeRefreshLayout, whether the animation is showing or not.

	var isRefreshing = swipeRefresh.isRefreshing();

Alloy
-----------
Alloy usage example:

	<Alloy>
		<Window>
			<SwipeRefresh module="com.rkam.swiperefreshlayout">
				<ListView>
					<!-- listview tags -->
				</ListView>
			</SwipeRefresh>
		</Window>
	</Alloy>
