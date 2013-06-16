/* _MCSJunk.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MCSMessageOperation.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface _MCSJunk : MCSMessageOperation {
	NSArray* _operations;
}
-(BOOL)willUnflag;
-(BOOL)willFlag;
-(BOOL)willMarkUnread;
-(BOOL)willMarkRead;
-(BOOL)isRevertibleWithMessages:(id)messages;
-(BOOL)revertOnMessages:(id)messages failures:(id)failures newMessages:(id)messages3;
-(BOOL)commitToMessages:(id)messages failures:(id)failures newMessages:(id)messages3;
-(id)applyPendingChangeToObjects:(id)objects;
-(id)description;
-(void)dealloc;
-(id)initWithSpecialDestination:(int)specialDestination markAsRead:(BOOL)read flagsToSet:(id)set flagsToClear:(id)clear;
@end