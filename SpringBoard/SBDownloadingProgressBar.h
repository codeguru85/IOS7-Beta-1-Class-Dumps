/* SBDownloadingProgressBar.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"

@class UIImageView, UIView;

__attribute__((visibility("hidden")))
@interface SBDownloadingProgressBar : XXUnknownSuperclass {
	UIView* _clipView;
	UIImageView* _fillView;
	float _progress;
}
+(float)defaultHeight;
-(float)progress;
-(void)setProgress:(float)progress;
-(id)fillImage;
-(id)trackImage;
-(void)layoutSubviews;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end
