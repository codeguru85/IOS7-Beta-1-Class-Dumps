/* ADAuthenticationManager.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ADAuthenticationManager : XXUnknownSuperclass {
	NSObject<OS_dispatch_queue>* _pendingChallengesQueue;
}
@property(assign, nonatomic) NSObject<OS_dispatch_queue>* pendingChallengesQueue;
+(id)sharedInstance;
-(void)promptForPasswordWithChallenge:(id)challenge username:(id)username;
-(void)handleAuthenticationWithChallenge:(id)challenge username:(id)username;
-(id)init;
@end
