/* GSMLogGenerator.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "LogGenerator.h"


__attribute__((visibility("hidden")))
@interface GSMLogGenerator : LogGenerator {
}
+(id)processObject:(id)object;
+(id)generator;
-(id)canCollapse:(id)collapse;
-(id)getSaveContentsFromState:(id)state;
-(id)getStartCommand;
-(id)generateLogUsingState:(id)state;
-(void)updateState:(id)state withData:(id)data;
@end