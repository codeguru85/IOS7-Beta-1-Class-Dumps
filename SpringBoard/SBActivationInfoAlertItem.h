/* SBActivationInfoAlertItem.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBDismissOnlyAlertItem.h"

@class UITextView, UIView, NSString;

__attribute__((visibility("hidden")))
@interface SBActivationInfoAlertItem : SBDismissOnlyAlertItem {
	UIView* _accessoryView;
	UITextView* _textView;
	NSString* _meid;
	NSString* _imei;
	NSString* _iccid;
	float _alertHeight;
}
+(id)activeItem;
-(id)_formattedIMEI;
-(id)_formattedICCID;
-(BOOL)allowInSetup;
-(BOOL)forcesModalAlertAppearance;
-(void)didDeactivateForReason:(int)reason;
-(void)willActivate;
-(void)_simStatusChanged:(id)changed;
-(void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
-(void)_updateTextView;
-(void)dealloc;
-(id)init;
@end