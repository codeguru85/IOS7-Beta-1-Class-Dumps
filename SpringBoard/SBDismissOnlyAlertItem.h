/* SBDismissOnlyAlertItem.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface SBDismissOnlyAlertItem : XXUnknownSuperclass {
	NSString* _title;
	NSString* _body;
	double _autoDismissInterval;
}
-(void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
-(void)performUnlockAction;
-(id)bodyText;
-(id)title;
-(void)setBodyText:(id)text;
-(void)setTitle:(id)title;
-(void)setAutoDismissInterval:(double)interval;
-(double)autoDismissInterval;
-(void)dealloc;
-(id)initWithTitle:(id)title body:(id)body;
@end
