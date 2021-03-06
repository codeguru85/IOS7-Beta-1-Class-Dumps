/* StarkChromeViewController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "ChromeViewController.h"
#import "Maps-Structs.h"
#import "StarkIndirectPanControllerDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class NSHashTable, UIView, StarkMapBrowsingToolbarView, StarkToolbarView, StarkIndirectPanController, StarkAlertViewController, NSTimer, UITapGestureRecognizer;
@protocol StarkTopBarView, StarkChromeViewVisibilityDelegate;

__attribute__((visibility("hidden")))
@interface StarkChromeViewController : ChromeViewController <StarkIndirectPanControllerDelegate, UIGestureRecognizerDelegate> {
	BOOL _panMode;
	StarkIndirectPanController* _panController;
	StarkMapBrowsingToolbarView* _panAccessoryToolbar;
	StarkToolbarView* _panModeTopBar;
	BOOL _didLoadSimulatedInteractionModelFromDefaults;
	NSTimer* _autohideIdleTimer;
	UITapGestureRecognizer* _autohideTapRecognizer;
	unsigned _autohideInterruptionsCount;
	NSHashTable* _interactionTokens;
	BOOL _starkStatusBarIsHidden;
	BOOL _displayed;
	BOOL _ignoreTopBarUpdates;
	int _interactionModel;
	int _debugSimulatedInteractionModel;
	id<StarkChromeViewVisibilityDelegate> _visibilityDelegate;
	UIView<StarkTopBarView>* _currentTopBar;
	StarkAlertViewController* _currentAlert;
	CGRect _viewBoundsNotObscuredByStatusBar;
}
@property(retain, nonatomic) UIView<StarkTopBarView>* currentTopBar;
@property(retain, nonatomic) StarkAlertViewController* currentAlert;
@property(readonly, assign, nonatomic, getter=isAutohidingContentForCurrentModeHidden) BOOL autohidingContentForCurrentModeHidden;
@property(assign, nonatomic) int debugSimulatedInteractionModel;
@property(assign, nonatomic) int interactionModel;
@property(readonly, assign, nonatomic, getter=isShowingPanMode) BOOL showingPanMode;
@property(assign, nonatomic) CGRect viewBoundsNotObscuredByStatusBar;
@property(assign, nonatomic) id<StarkChromeViewVisibilityDelegate> visibilityDelegate;
+(Class)userLocationViewClass;
+(Class)containingViewClass;
+(Class)chromeViewItemClass;
-(void)reinsertWorldViewInViewHierarchy:(id)viewHierarchy;
-(void)reinsertWorldViewInViewHierarchy;
-(id)presentInterruptionOfKind:(int)kind userInfo:(id)info completionHandler:(id)handler;
-(void)presentAlert:(id)alert;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)endInterruptingAutohideWithToken:(id)token;
-(void)beginInterruptingAutohideWithToken:(id)token;
-(void)_removeAutohideGestureRecognizer;
-(BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)gestureRecognizer;
-(void)_addAutohideGestureRecognizer;
-(void)_stopAutohideIdleTimer;
-(void)_restartAutohideIdleTimer;
-(void)_startAutohideIdleTimerIfStopped;
-(BOOL)isAutohidingContentHiddenForMode:(id)mode;
-(void)_setAutohidingContentForCurrentModeHidden:(BOOL)currentModeHidden;
-(void)interruptAutohideForIncidentalInteraction;
-(void)_endAutohideInterruptingInteractionsWithCount:(unsigned)count;
-(void)_beginAutohideInterruptingInteractionsWithCount:(unsigned)count;
-(void)currentModeDidChangeByMovingToItem:(id)currentMode fromItem:(id)item animated:(BOOL)animated;
-(void)_layoutTopBar;
-(void)moveToMapDisplayStyle:(int)mapDisplayStyle forChangeToLightLevel:(int)lightLevel animation:(id)animation duration:(double)duration timingFunctionName:(id)name;
-(void)_moveToTopBar:(id)topBar animation:(id)animation;
-(void)_moveToTopBarForMode:(id)mode animation:(id)animation;
-(id)displayedTopBarForMode:(id)mode;
-(void)updateTopBarAnimated:(BOOL)animated;
-(void)updateTopBarWithAnimation:(id)animation;
-(void)currentModeWillChangeByMovingToItem:(id)currentMode fromItem:(id)item animated:(BOOL)animated;
-(void)_autohideGestureRecognizerDetectedTap;
-(void)_autohideBecameIdle;
-(void)_updateAutohideBehavior;
-(void)setAutohideBehavior:(int)behavior forMode:(id)mode;
-(void)panControllerWillBeginAnimating:(id)panController;
-(void)panControllerDidEndAnimating:(id)panController;
-(void)_exitPanModeAfterPhysicalInputEnds;
-(void)_wheelChangedWithEvent:(id)event;
-(void)_moveWithEvent:(id)event;
-(BOOL)_handleMoveImpulseInDirection:(int)direction;
-(BOOL)canPerformAction:(SEL)action withSender:(id)sender;
-(void)_physicalButtonsCancelled:(id)cancelled withEvent:(id)event;
-(void)_physicalButtonsEnded:(id)ended withEvent:(id)event;
-(void)_physicalButtonsBegan:(id)began withEvent:(id)event;
-(void)_exitPanModeAnimated:(BOOL)animated;
-(void)endPanMode;
-(BOOL)beginPanMode;
-(void)_zoomOut;
-(void)_zoomIn;
-(void)_togglePanMode;
-(void)setTrackingMode:(int)mode;
-(void)_toggleTrackingMode;
-(CGRect)bottomRightFrameForViewWithSize:(CGSize)size options:(int)options;
-(CGRect)topRightFrameForViewWithSize:(CGSize)size options:(int)options;
-(CGRect)topLeftFrameForViewWithSize:(CGSize)size options:(int)options;
-(CGRect)bottomLeftFrameForViewWithSize:(CGSize)size options:(int)options;
-(BOOL)_modelEndsPanModeOnAnimationEnd;
-(BOOL)_modelAllowsPanWithPhysicalControls;
-(BOOL)_modelAllowsSearchBar;
-(BOOL)_modelAllowsZoomButtonsInPanMode;
-(BOOL)_modelAllowsZoomButtons;
-(BOOL)_modelAllowsPanModeButton;
-(BOOL)_modelAllowsTrackingModeButtonInPanMode;
-(BOOL)_modelAllowsTrackingModeButton;
-(void)_layoutForInteractionModelChange;
-(BOOL)_interactionModelChangedAfterUpdate;
-(void)layoutForUnobscuredBoundsChange;
-(BOOL)isCurrentMode:(id)mode;
-(void)pushMode:(id)mode animated:(BOOL)animated;
-(void)_setStarkStatusBarHidden:(BOOL)hidden style:(int)style animationDuration:(double)duration;
-(int)_currentStarkStatusBarStyle;
-(void)_updateStatusBarWithDuration:(double)duration;
-(void)setStarkStatusBarOpaque:(BOOL)opaque forMode:(id)mode;
-(BOOL)_starkStatusBarIsHidden;
-(void)_setStarkStatusBarHidden:(BOOL)hidden animationDuration:(double)duration;
-(CGRect)unobscuredBoundsInContainingViewWithOptions:(int)options;
-(UIEdgeInsets)mapInsetsIncludingBarsWithNonopaqueParts:(BOOL)nonopaqueParts;
-(BOOL)_starkTopBarModifiesInsets;
-(BOOL)_starkStatusBarModifiesInsets;
-(UIEdgeInsets)_viewportInsets;
-(void)setWorldView:(id)view;
-(id)topItem;
-(id)_topMode;
-(void)dealloc;
-(void)pushRouteGeniusAnimated:(BOOL)animated runningTraceFromPlayer:(id)player;
-(void)pushRouteGeniusAnimated:(BOOL)animated;
@end
