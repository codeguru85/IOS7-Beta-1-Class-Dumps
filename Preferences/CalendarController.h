/* CalendarController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class EKEventStore;

__attribute__((visibility("hidden")))
@interface CalendarController : XXUnknownSuperclass {
	EKEventStore* _store;
}
@property(retain, nonatomic) EKEventStore* store;
+(id)shareController;
-(void)setNotificationCalendars:(id)calendars;
-(id)notificationCalendars;
@end
