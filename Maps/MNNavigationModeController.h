/* MNNavigationModeController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "UIGestureRecognizerDelegate.h"
#import "MNNavigationDebugViewsControllerDelegate.h"
#import "MNNavigationOverviewBarDelegate.h"
#import "MNGuidanceSignsDisplayDelegate.h"
#import "UIActionSheetDelegate.h"
#import "MNGuidanceCurrentRoadDisplayDelegate.h"
#import "StarkChromeModeController.h"
#import "MNLockScreenLayerSource.h"
#import "DirectionsStepsTableViewControllerDelegate.h"
#import "MNNavigationDisplayDelegate.h"
#import "UIAlertViewDelegate.h"
#import "Maps-Structs.h"
#import "UIPopoverControllerDelegate.h"
#import "MNNavigationSessionUIDelegate.h"
#import "MapsChromeModeController.h"
#import "MainChromeModeController.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class FloatingControlsView, MNNavigationDebugViewsController, DirectionsController, UIPopoverController, UINavigationController, NSDate, NSTimer, MNNavigationOverviewBar, NSArray, DirectionsStepsTableViewController, MNTracePlayer, MNNavigationSession, VKCameraContext, MNGuidanceCurrentRoadDisplay, UIAlertView, UIGestureRecognizer, VKMapView, MNGuidanceSignsDisplay, FloatingControl, ChromeViewController, MNNavigationDisplay;
@protocol MNNavigationModeControllerDelegate, MapsChromeViews;

__attribute__((visibility("hidden")))
@interface MNNavigationModeController : XXUnknownSuperclass <UIActionSheetDelegate, UIAlertViewDelegate, UIGestureRecognizerDelegate, MNNavigationDebugViewsControllerDelegate, MNNavigationOverviewBarDelegate, MNGuidanceSignsDisplayDelegate, MNGuidanceCurrentRoadDisplayDelegate, MapsChromeModeController, MainChromeModeController, StarkChromeModeController, MNLockScreenLayerSource, DirectionsStepsTableViewControllerDelegate, UIPopoverControllerDelegate, MNNavigationSessionUIDelegate, MNNavigationDisplayDelegate> {
	id<MapsChromeViews> _views;
	MNNavigationSession* _navigationSession;
	BOOL _isNavigating;
	BOOL _cameraShouldAnimateToRoute;
	MNNavigationOverviewBar* _overviewBar;
	MNNavigationDisplay* _navigationDisplay;
	VKCameraContext* _cameraContext;
	id<MNNavigationModeControllerDelegate> _delegate;
	ChromeViewController* _chromeViewController;
	MNNavigationDebugViewsController* _debugViewsController;
	MNGuidanceSignsDisplay* _guidanceDisplay;
	MNGuidanceCurrentRoadDisplay* _currentRoadDisplay;
	UIAlertView* _failRequestRouteAlert;
	NSDate* _savedAutoHideDate;
	unsigned _autoHideSuspendCount;
	BOOL _supressNavigationBarHidingTimerOnNextViewAppear;
	BOOL _navigationBarWasLastShownForMessageDisplay;
	BOOL _isNavigationEnding;
	NSArray* _controlBarItems;
	FloatingControlsView* _controlBar;
	BOOL _isHoldingPortraitToReturnFromLockScreen;
	DirectionsStepsTableViewController* _directionsStepsTableViewController;
	UINavigationController* _directionsStepsNavController;
	UIPopoverController* _directionsStepsPopoverController;
	UIGestureRecognizer* _navigationBarDisplayGesture;
	BOOL _hidingBarsSuppressed;
	BOOL _appActiveWithOurViewVisible;
	BOOL _zoomWasEnabled;
	BOOL _scrollWasEnabled;
	BOOL _rotationWasEnabled;
	BOOL _tiltWasEnabled;
	UIAlertView* _etaAlertView;
	NSTimer* _etaAlertTimer;
	int _etaAlertCountdownTimeSecs;
	unsigned _reRouteTimeSavingSecs;
	id _finishedHandler;
	NSTimer* _navigationBarHidingTimer;
	BOOL _shouldStartNavigationBarHidingTimerOnPopoverDismissal;
	NSTimer* _repeatedPeriodicAudioTimer;
	BOOL _playRepeatedPeriodicAudio;
	NSTimer* _arrivalInBackgroundTimer;
	BOOL _isAnimatingSignsDisplay;
	id _dismissHandler;
	FloatingControl* _3DButtonControl;
	id _returnLayerToSelfBlock;
}
@property(readonly, assign, nonatomic) DirectionsController* directionsController;
@property(assign, nonatomic) ChromeViewController* chromeViewController;
@property(readonly, assign, nonatomic) MNTracePlayer* tracePlayer;
@property(retain, nonatomic) NSTimer* _arrivalInBackgroundTimer;
@property(copy, nonatomic) id finishedHandler;
@property(copy, nonatomic) id _returnLayerToSelfBlock;
@property(retain, nonatomic) UIAlertView* failRequestRouteAlert;
@property(retain, nonatomic) MNGuidanceSignsDisplay* guidanceDisplay;
@property(readonly, assign, nonatomic) VKMapView* mapView;
@property(assign, nonatomic) id<MNNavigationModeControllerDelegate> delegate;
@property(retain, nonatomic) id<MapsChromeViews> views;
@property(readonly, assign, nonatomic) MNNavigationSession* navigationSession;
-(UIEdgeInsets)_minimumEdgeInsets;
-(void)_audioNotificationForNewTransportType:(int)newTransportType;
-(id)_newGuidanceSignsDisplayInView:(id)view;
-(void)_navigationUpdatedPointOfInterest:(XXStruct_gLbvpC)interest focusStyle:(int)style;
-(void)_clearAllAnnotations;
-(void)_prepareViewForLockScreen:(id)lockScreen;
-(void)_3DButtonTapped:(id)tapped;
-(BOOL)_is3D;
-(void)_stopNavigationCameraMotion;
-(void)_startNavigationCameraMotionAnimated:(BOOL)animated;
-(void)_updateWithMatchedLocation:(id)matchedLocation;
-(id)currentRouteMatch;
-(void)navigationDisplay:(id)display didChangeUserTrackingMode:(int)mode;
-(void)worldView:(id)view didBecomePitched:(BOOL)pitched;
-(id)worldView:(id)view painterForOverlay:(id)overlay;
-(id)worldView:(id)view viewForAnnotation:(id)annotation;
-(void)navigationDebugViewsTracePlaybackDidSeek:(id)navigationDebugViewsTracePlayback;
-(void)navigationDebugViewsTracePlaybackSpeedDidChange:(id)navigationDebugViewsTracePlaybackSpeed speedMultiplier:(double)multiplier;
-(BOOL)physicalButtonsBegan:(id)began;
-(CGSize)_contentSizeForDirectionsStepsPopover;
-(void)_directionsListViewButtonTapped:(id)tapped;
-(void)_dismissListViewAnimated:(BOOL)animated withCompletion:(id)completion;
-(void)_dismissListView:(id)view;
-(id)_directionsStepsPopoverController;
-(id)directionsStepsNavController;
-(id)directionsStepsTableViewController;
-(id)_3DButtonControl;
-(void)_speakRepeatedPeriodicAudio:(id)audio;
-(void)_stopRepeatedPeriodicAudio;
-(void)_startRepeatedPeriodicAudio;
-(void)_handleDefaultsChange:(id)change;
-(void)_presentDirectionsStepsList;
-(BOOL)presentMenu;
-(void)_setCameraDisplayMode:(int)mode;
-(int)_cameraDisplayMode;
-(BOOL)_supportsCameraDisplayModeChanges;
-(void)guidanceSignsDisplayDidAnimateSign:(id)guidanceSignsDisplay;
-(void)guidanceSignsDisplayWillAnimateSign:(id)guidanceSignsDisplay;
-(void)guidanceSignsDisplayChoseOverview:(id)overview;
-(void)guidanceSignsDisplayChoseEndNavigation:(id)navigation;
-(void)guidanceSignsDisplayUpdateBlur:(id)blur frame:(CGRect)frame;
-(void)guidanceSignsDisplayToggleNavigationBar:(id)bar;
-(void)guidanceSignsDisplayRepeatGuidance:(id)guidance;
-(void)guidanceSignsDisplayDidInvalidateMinimumEdgeInsets:(id)guidanceSignsDisplay;
-(void)guidanceCurrentRoadDisplayDidInvalidateMinimumEdgeInsets:(id)guidanceCurrentRoadDisplay;
-(void)_updateInsets;
-(id)currentExpandedTravelTimeForNavigationOverviewBar:(id)navigationOverviewBar forTimeInterval:(double)timeInterval;
-(void)navigationOverviewBarEndTapped:(id)tapped;
-(void)navigationOverviewBarOverviewTapped:(id)tapped;
-(void)directionsStepsTableViewController:(id)controller didTapRowForSearchResult:(id)searchResult;
-(void)directionsControllerDidChangeRouteStepIndex:(id)directionsController;
-(BOOL)directionsStepsTableViewControllerShouldShowOverview:(id)directionsStepsTableViewController;
-(BOOL)directionsStepsTableViewControllerShouldAllowInfoCardsForEndpoints:(id)directionsStepsTableViewController;
-(void)directionsStepsTableViewController:(id)controller didTapDisclosureForSearchResult:(id)searchResult;
-(void)directionsStepsTableViewController:(id)controller didTapRowForRouteStep:(id)routeStep;
-(void)navigationSession:(id)session updatedMatchedLocation:(id)location;
-(void)navigationSessionWillEnd:(id)navigationSession;
-(void)navigationSessionWillResumeFromPause:(id)navigationSession;
-(void)navigationSessionWillPause:(id)navigationSession;
-(void)navigationSession:(id)session willStartForRoute:(id)route;
-(void)navigationSessionTransportTypeChanged:(id)changed newTransportType:(int)type;
-(void)navigationSessionDetectedNewTransportType:(id)type newTransportType:(int)type2;
-(void)directionsSessionUpdatedETA:(id)eta;
-(void)_appResigningActiveWithOurViewVisible:(id)ourViewVisible;
-(void)_endNavigationAfterArrivalInBackground;
-(void)_discardArrivalInBackgroundTimer;
-(void)_startArrivalInBackgroundTimer;
-(void)navigationSessionHasArrived:(id)arrived;
-(void)navigationSessionHideSecondaryStep:(id)step;
-(void)navigationSession:(id)session displaySecondaryStepManeuverType:(int)type junctionType:(int)type3 junctionElements:(XXStruct_DtYHXC*)elements count:(unsigned long)count instructions:(id)instructions shorterAlternativeInstructions:(id)instructions7 shieldType:(int)type8 shieldText:(id)text drivingSide:(int)side signColor:(int)color;
-(void)navigationSession:(id)session displayManeuverAlertForAnnouncementStage:(int)announcementStage;
-(void)navigationSession:(id)session displayPrimaryStepManeuverType:(int)type junctionType:(int)type3 junctionElements:(XXStruct_DtYHXC*)elements count:(unsigned long)count instructions:(id)instructions shorterAlternativeInstructions:(id)instructions7 shieldType:(int)type8 shieldText:(id)text drivingSide:(int)side signColor:(int)color maneuverStepIndex:(unsigned)index isSynthetic:(BOOL)synthetic;
-(void)navigationSession:(id)session remainingTime:(double)time remainingDistance:(double)distance distanceUntilManeuver:(double)maneuver timeUntilManeuver:(double)maneuver5;
-(void)navigationSession:(id)session proceedToRouteDistance:(double)routeDistance displayString:(id)string remainingTime:(double)time remainingDistance:(double)distance signColor:(int)color closestStepIndex:(unsigned)index;
-(void)navigationSession:(id)session updatePointOfInterest:(XXStruct_gLbvpC)interest focusStyle:(int)style;
-(void)navigationSessionStartingNextStep:(id)step;
-(void)navigationSession:(id)session failedWithErrorCode:(int)errorCode;
-(void)directionsSession:(id)session failedWithErrorCode:(int)errorCode;
-(void)directionsSession:(id)session didChangeRoutePreloadSession:(id)session2;
-(void)_updateRoutePreloadSession;
-(void)directionsSessionDidCancelRoute:(id)directionsSession;
-(void)directionsSession:(id)session didSwitchToNewRoute:(id)newRoute;
-(void)directionsSession:(id)session didRecalculateNewRoute:(id)route;
-(void)directionsSessionWillRecalculateRoute:(id)directionsSession;
-(void)directionsSessionDidFailToReceiveRoute:(id)directionsSession errorCode:(int)code;
-(void)directionsSession:(id)session didReceiveRouteSet:(id)set;
-(void)directionsSessionDidFailToRequestRoute:(id)directionsSession;
-(void)directionsSessionWillRequestRoute:(id)directionsSession traceRecorderFailed:(BOOL)failed;
-(void)navigationSession:(id)session didChangeState:(int)state;
-(void)directionsSessionRecommendsNewRoute:(id)route oldEstimatedTime:(unsigned)time newEstimatedTime:(unsigned)time3 finished:(id)finished;
-(void)_eachGuidanceOutput:(id)output;
-(void)_updateEtaAlertTimer:(id)timer;
-(void)_cancelEtaAlert;
-(void)_cleanupEtaAlert;
-(id)_etaAlertMessage;
-(void)_presentEtaAlert;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)alertView:(id)view didDismissWithButtonIndex:(int)buttonIndex;
-(BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
-(void)_setAttributedRoute:(id)route;
-(void)_alertTraceRecorderFailed;
-(void)endNav;
-(void)endNavModeAnimated:(BOOL)animated isNavigationEnding:(BOOL)ending;
-(void)endNavAnimated:(BOOL)animated;
-(void)_clearNavigationRoute;
-(void)_goToOverview;
-(void)_dismissNavWithDestination:(int)destination animated:(BOOL)animated;
-(void)_displayFailureAlertWithTitle:(id)title;
-(void)_cleanUp;
-(void)prepareToRunNavigationAnimated:(BOOL)runNavigationAnimated;
-(id)topBarForInteractionModel:(int)interactionModel;
-(void)hideAutohidingContentWithAnimation:(id)animation;
-(void)showAutohidingContentWithAnimation:(id)animation;
-(id)starkChromeViewController;
-(id)mainChromeViewController;
-(id)_chromeViewControllerOfClass:(Class)aClass;
-(void)didReleaseViewForLockScreenDisplay;
-(void)_appDidBecomeActiveWithOurViewVisible;
-(void)didEndDisplayingViewInLockScreenDisplay;
-(void)willBeginDisplayingViewInLockScreenDisplay;
-(void)viewNeedsLayoutInLockScreenDisplay;
-(id)viewForLockScreenDisplayWithReleaseRequestBlock:(id)releaseRequestBlock;
-(void)layoutForUnobscuredBoundsChange;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)setCameraShouldAnimateToRoute;
-(void)_updateGuidanceRoadDescription:(id)description locationIsUnreliable:(BOOL)unreliable;
-(void)resetNavigationMode;
-(void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(unsigned)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)_deviceOrientationDidChange:(id)_deviceOrientation;
-(void)_endDisplayingMessageInNavigationBar;
-(void)_beginDisplayingMessageInNavigationBar;
-(BOOL)_canHideTopBarShadow;
-(void)_hideNavigationBarIfAppropriateAnimated:(BOOL)animated;
-(void)_hideNavigationBarIfAppropriate:(id)appropriate;
-(void)_showNavigationBarAnimated:(BOOL)animated;
-(void)_toggleNavigationBar:(id)bar;
-(void)_discardNavigationBarHidingTimer;
-(void)_startNavigationBarHidingTimerWithDuration:(double)duration;
-(void)_stopNavigationBarHidingTimer;
-(void)_resumeNavigationBarHidingTimerWithDuration:(double)duration;
-(void)_suspendNavigationBarHidingTimer;
-(BOOL)_isNavigationBarSupposedToBeHidden;
-(void)popoverControllerDidDismissPopover:(id)popoverController;
-(BOOL)needsAudioControl;
-(void)didRemoveFromChromeViewController;
-(void)willChangeToMapDisplayStyle:(int)mapDisplayStyle forChangeToLightLevel:(int)lightLevel animation:(id)animation;
-(void)willRemoveFromChromeViewController;
-(void)resignCurrentModeAnimated:(BOOL)animated toMode:(id)mode;
-(void)becomeCurrentModeWithViews:(id)views animated:(BOOL)animated state:(id)state fromMode:(id)mode;
-(BOOL)_canBecomeLockScreenLayerSource;
-(void)_refreshCameraPosition;
-(id)_controlBarItems;
-(id)_directionsListViewControl;
-(void)_showTraceControls;
-(void)dealloc;
-(id)initWithNavigationSession:(id)navigationSession dismissHandler:(id)handler;
@end
