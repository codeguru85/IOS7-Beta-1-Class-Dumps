/* FavoriteItemSelectionTarget.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol FavoriteItemSelectionTarget <NSObject>
-(void)setSelectedSourceType:(unsigned)type;
-(void)showVIPSettingsAnimated:(BOOL)animated;
-(void)selectCombinedInboxWithSourceType:(unsigned)sourceType animated:(BOOL)animated;
-(void)selectCombinedMailboxWithType:(int)type animated:(BOOL)animated;
-(void)selectMailbox:(id)mailbox animated:(BOOL)animated;
-(void)selectAccount:(id)account animated:(BOOL)animated;
@end
