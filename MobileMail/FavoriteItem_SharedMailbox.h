/* FavoriteItem_SharedMailbox.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "FavoriteItem.h"


__attribute__((visibility("hidden")))
@interface FavoriteItem_SharedMailbox : FavoriteItem {
	unsigned _sourceType;
}
@property(readonly, assign, nonatomic) unsigned sourceType;
-(void)wasSelected:(id)selected accessoryTapped:(BOOL)tapped;
-(void)configureCell:(id)cell;
-(id)defaultIcon;
-(id)displayName;
-(BOOL)isVisible;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)dictionary;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(id)initWithSourceType:(unsigned)sourceType;
@end
