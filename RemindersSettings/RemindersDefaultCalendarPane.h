/* RemindersDefaultCalendarPane.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "RemindersSettings-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class EKCalendarChooser, EKEventStore;

@interface RemindersDefaultCalendarPane : XXUnknownSuperclass {
	EKEventStore* _store;
	EKCalendarChooser* _chooser;
	BOOL _dontSetDefaultCalendar;
}
-(void).cxx_destruct;
-(id)preferenceValue;
-(void)setPreferenceSpecifier:(id)specifier;
-(BOOL)drawLabel;
-(void)_updateCheckedCalendar;
-(id)initWithFrame:(CGRect)frame;
@end
