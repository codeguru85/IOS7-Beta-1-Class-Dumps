/* ATConnectionDelegate.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol ATConnectionDelegate <NSObject>
@optional
-(void)connectionWasInterrupted:(id)interrupted;
-(void)connection:(id)connection updatedAssets:(id)assets;
-(void)connection:(id)connection updatedProgress:(id)progress;
@end