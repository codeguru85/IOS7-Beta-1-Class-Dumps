/* SBSIMLockPUKEntryAlertView.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBSIMLockEntryAlertView.h"
#import "SpringBoard-Structs.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface SBSIMLockPUKEntryAlertView : SBSIMLockEntryAlertView {
	int _state;
	NSString* _enteredPUKCode;
	NSString* _newPIN;
}
-(void)_attemptPUKUnlock;
-(id)_pukAttemptsRemainingLabel;
-(void)_unlock;
-(void)setupFailureState;
-(void)setupSuccess;
-(id)label;
-(id)titleText;
-(void)dealloc;
@end
