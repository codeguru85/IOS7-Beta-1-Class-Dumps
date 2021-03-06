/* DOMAccessoryArbitrator.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "DeviceOMatic-Structs.h"

@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface DOMAccessoryArbitrator : XXUnknownSuperclass {
	NSMutableArray* badDevices;
	CFUserNotificationRef notificationRef;
	NSObject<OS_dispatch_queue>* mainQ;
	NSMutableArray* _personalities;
	IONotificationPortRef _ioNotificationPort;
	long long _iOSDeviceThreshold;
}
@property(readonly, assign) long long iOSDeviceThreshold;
@property(assign) IONotificationPortRef ioNotificationPort;
@property(retain, nonatomic) NSMutableArray* personalities;
+(id)sharedDomAccessoryArbitrator;
-(void).cxx_destruct;
-(void)deviceArrived:(unsigned)arrived;
-(void)matchDevice:(id)device;
-(void)probePersonalitiesForService:(unsigned)service ofDevice:(id)device inGroup:(id)group;
-(void)loadLaunchdJobsAtPath:(id)path;
-(id)jobType:(id)type jobType:(int*)type2;
-(void)scanPlistsAtPath:(id)path execBlock:(id)block;
-(void)addMatchJobServiceNamed:(id)named info:(id)info jobType:(int)type;
-(void)addMatchingThings:(id)things matchJob:(id)job;
-(void)addNotification:(id)notification matchJob:(id)job;
-(void)addPersonality:(id)personality matchJob:(id)job;
-(void)scheduleDialog;
-(void)displayDialog;
-(void)userDismissedNotification:(CFUserNotificationRef)notification;
-(id)createUserNotificationDict;
-(void)addBadDevicesToDialogDictBody:(id)dialogDictBody;
-(void)unregisterOffendingDomDevice:(id)device;
-(void)registerOffendingDomDevice:(id)device;
-(void)dealloc;
-(id)init;
@end
