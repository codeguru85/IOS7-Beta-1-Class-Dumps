/* SBNewsstandIcon.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBFolderIcon.h"
#import "SpringBoard-Structs.h"


__attribute__((visibility("hidden")))
@interface SBNewsstandIcon : SBFolderIcon {
}
-(BOOL)hasFolderIconView;
-(BOOL)isNewsstandIcon;
-(id)getUnmaskedIconImage:(int)image;
-(id)generateIconImage:(int)image;
-(id)_generateImageUsingMask:(BOOL)mask;
-(id)_newsstandIconImageName;
-(BOOL)canReceiveGrabbedIcon;
-(id)folder;
-(void)launch:(int)launch;
-(id)leafIdentifier;
-(id)displayName;
@end
