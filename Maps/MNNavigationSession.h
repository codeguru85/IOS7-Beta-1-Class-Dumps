/* MNNavigationSession.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "Maps-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "MNNavigatorDelegate.h"
#import "MNExternalGuidanceSource.h"

@class MNRouteManager, MNCoreMotionContextProvider, MNLocation, MNMotionContext, MNNavigator, MNThermalLogger, GEOWaypointSearchResultRequest;
@protocol MNNavigationSessionTestingDelegate;

__attribute__((visibility("hidden")))
@interface MNNavigationSession : XXUnknownSuperclass <MNNavigatorDelegate, MNExternalGuidanceSource> {
	MNNavigator* _navigator;
	MNRouteManager* _routeManager;
	MNThermalLogger* _thermalLogger;
	MNMotionContext* _motionContext;
	MNCoreMotionContextProvider* _coreMotionProvider;
	MNLocation* _lastMatchedLocation;
	BOOL _isNavigating;
	double _remainingTime;
	double _remainingDistance;
}
@property(readonly, assign, nonatomic) id<MNNavigationSessionTestingDelegate> testingDelegate;
@property(readonly, assign, nonatomic) double remainingDistance;
@property(readonly, assign, nonatomic) double remainingTime;
@property(readonly, assign, nonatomic) BOOL isNavigating;
@property(readonly, assign, nonatomic) int signsColor;
@property(readonly, assign, nonatomic) int currentTransportType;
@property(readonly, assign, nonatomic) int navigationState;
@property(readonly, assign, nonatomic) MNLocation* lastMatchedLocation;
@property(readonly, assign, nonatomic) GEOWaypointSearchResultRequest* destination;
@property(readonly, assign, nonatomic) MNMotionContext* motionContext;
@property(readonly, assign, nonatomic) MNRouteManager* routeManager;
@property(readonly, assign, nonatomic) MNNavigator* navigator;
-(void)_transportTypeChanged:(int)changed;
-(void)navigatorDetectedNewTransportType:(id)type newTransportType:(int)type2;
-(void)navigatorHasArrived:(id)arrived;
-(void)navigatorHideSecondaryStep:(id)step;
-(void)navigator:(id)navigator displaySecondaryStepManeuverType:(int)type junctionType:(int)type3 junctionElements:(XXStruct_DtYHXC*)elements count:(unsigned long)count instructions:(id)instructions shorterAlternativeInstructions:(id)instructions7 shieldType:(int)type8 shieldText:(id)text drivingSide:(int)side signColor:(int)color;
-(void)navigator:(id)navigator displayManeuverAlertForAnnouncementStage:(int)announcementStage;
-(void)navigator:(id)navigator displayPrimaryStepManeuverType:(int)type junctionType:(int)type3 junctionElements:(XXStruct_DtYHXC*)elements count:(unsigned long)count instructions:(id)instructions shorterAlternativeInstructions:(id)instructions7 shieldType:(int)type8 shieldText:(id)text drivingSide:(int)side signColor:(int)color maneuverStepIndex:(unsigned)index isSynthetic:(BOOL)synthetic;
-(void)navigator:(id)navigator remainingTime:(double)time remainingDistance:(double)distance distanceUntilManeuver:(double)maneuver timeUntilManeuver:(double)maneuver5;
-(void)navigator:(id)navigator proceedToRouteDistance:(double)routeDistance displayString:(id)string remainingTime:(double)time remainingDistance:(double)distance signColor:(int)color closestStepIndex:(unsigned)index;
-(void)navigator:(id)navigator updatePointOfInterest:(XXStruct_gLbvpC)interest focusStyle:(int)style;
-(void)navigatorStartingNextStep:(id)step;
-(void)navigator:(id)navigator failedWithErrorCode:(int)errorCode;
-(void)navigator:(id)navigator didChangeState:(int)state;
-(void)navigator:(id)navigator updatedMatchedLocation:(id)location;
-(void)navigatorWillResumeFromPause:(id)navigator;
-(void)navigatorWillPause:(id)navigator;
-(void)_willEnd;
-(void)_willStartForRoute:(id)route;
-(id)routeRepresentation;
-(BOOL)repeatCurrentGuidance;
-(void)_endActiveNavigationState;
-(id)_newNavigatorForNavigationType:(int)navigationType;
-(void)resumeNavigation;
-(void)switchToNavigationType:(int)navigationType;
-(void)endNavigation;
-(void)startNavigation;
-(void)dealloc;
-(id)initWithRouteManager:(id)routeManager navigationType:(int)type;
@end
