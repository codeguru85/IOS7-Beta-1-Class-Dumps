/* SBLiveIconImageView.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBIconImageView.h"
#import "SpringBoard-Structs.h"


__attribute__((visibility("hidden")))
@interface SBLiveIconImageView : SBIconImageView {
	unsigned _pauseCauses;
}
-(void)_displayDidLaunch:(id)_display;
-(void)_displayWillActivate:(id)_display;
-(void)didMoveToWindow;
-(id)snapshot;
-(void)prepareForReuse;
-(void)updateImage;
-(void)updateAnimatingState;
-(BOOL)isAnimationAllowed;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end