/* AlarmTitleAndRepeatView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MobileTimer-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UILabel;

__attribute__((visibility("hidden")))
@interface AlarmTitleAndRepeatView : XXUnknownSuperclass {
	float _previousWidth;
	UILabel* _titleLabel;
	UILabel* _repeatLabel;
}
@property(readonly, assign, nonatomic) UILabel* repeatLabel;
@property(readonly, assign, nonatomic) UILabel* titleLabel;
-(void)layoutSubviews;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end