/* ASTRecorderButton.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "AccessibilitySettings-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ASTRecorderButton : XXUnknownSuperclass {
@private
	int _color;
}
+(void)preloadImagesForColor:(int)color;
+(float)defaultHeightForColor:(int)color;
+(float)defaultHeight;
-(void)setIconVerticalOffset:(float)offset;
-(void)setTitleVerticalOffset:(float)offset;
-(void)dealloc;
-(CGRect)titleRectForContentRect:(CGRect)contentRect;
-(CGRect)imageRectForContentRect:(CGRect)contentRect;
-(void)setFrame:(CGRect)frame;
-(void)setTitleImagePadding:(float)padding;
-(int)buttonColor;
-(void)setDisabledButtonColor:(int)color;
-(void)setButtonColor:(int)color;
-(void)setEnabled:(BOOL)enabled;
-(void)setHighlighted:(BOOL)highlighted;
-(void)_adjustIconColor;
-(id)initWithTitle:(id)title icon:(id)icon color:(int)color frame:(CGRect)frame;
-(void)_setDisabledButtonColor:(int)color;
-(void)_setButtonColor:(int)color;
@end
