/* DNDAllowedListController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSArray;

__attribute__((visibility("hidden")))
@interface DNDAllowedListController : XXUnknownSuperclass {
	NSArray* _presetGroups;
	NSMutableArray* _usersGroups;
}
-(void)setDisruptionGroup:(id)group specifier:(id)specifier;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)specifiers;
-(id)getGroupSelectionFromSpecifiers:(id)specifiers;
-(id)identifierForType:(unsigned)type;
-(void)dealloc;
@end
