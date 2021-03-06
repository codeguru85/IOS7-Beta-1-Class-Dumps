/* DelayedActionsQueue.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSTimer, NSMutableArray;

__attribute__((visibility("hidden")))
@interface DelayedActionsQueue : XXUnknownSuperclass {
	NSMutableArray* _queue;
	int _delayCount;
	NSTimer* _performDelayedActionsTimer;
	double _intervalBeforeExecutingPendingActions;
}
@property(assign, nonatomic) double intervalBeforeExecutingPendingActions;
-(void)executePendingActions;
-(void)cancelPostDelayEndInterval;
-(void)startPostDelayEndInterval;
-(void)cancelAllDelayedActions;
-(void)performActionWithNonretainedObject:(id)nonretainedObject action:(id)action;
-(void)performAction:(id)action;
-(void)endDelayingActions;
-(void)beginDelayingActions;
-(void)dealloc;
@end
