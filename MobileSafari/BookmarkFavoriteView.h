/* BookmarkFavoriteView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "MobileSafari-Structs.h"

@class UIView, UILabel, WebBookmark, UIImageView;

__attribute__((visibility("hidden")))
@interface BookmarkFavoriteView : XXUnknownSuperclass {
	UIImageView* _iconView;
	UIView* _iconTouchHighlightView;
	UILabel* _titleLabel;
	BOOL _highlighted;
	BOOL _grabbed;
	WebBookmark* _bookmark;
}
@property(assign, nonatomic, getter=isGrabbed) BOOL grabbed;
@property(assign, nonatomic, getter=isHighlighted) BOOL highlighted;
@property(retain, nonatomic) WebBookmark* bookmark;
+(CGSize)defaultSize;
+(void)_getTitleLabelHeight:(float*)height firstBaselineOffset:(float*)offset lastBaselineOffset:(float*)offset3;
+(id)_adjustedLabelFontForPreferredContentSize;
-(CGPoint)iconCenter;
-(BOOL)pointInside:(CGPoint)inside withEvent:(id)event;
-(id)_tintedBookmarkImage;
-(id)_tintedFolderImage;
-(CGSize)sizeThatFits:(CGSize)fits;
-(void)layoutSubviews;
-(void)dealloc;
-(id)init;
@end
