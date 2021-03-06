/* WorldClockTableViewCell.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "WorldClockCellViewDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class WorldClockCity, UIView, WorldClockCellView, CAGradientLayer;

__attribute__((visibility("hidden")))
@interface WorldClockTableViewCell : XXUnknownSuperclass <WorldClockCellViewDelegate> {
	WorldClockCity* _city;
	WorldClockCellView* _clockCellView;
	int _style;
	CAGradientLayer* _digitalClockNightBackgroundGradient;
	UIView* _digitalClockNightBackground;
	BOOL _nightStyle;
}
@property(retain, nonatomic) WorldClockCity* city;
+(float)defaultHeight;
-(void)timeDidChangeForClockCell:(id)time;
-(void)setEditing:(BOOL)editing animated:(BOOL)animated;
-(void)setStyle:(int)style animated:(BOOL)animated;
-(void)stop;
-(void)start;
-(void)setNighttime:(BOOL)nighttime animated:(BOOL)animated;
-(void)layoutSubviews;
-(void)dealloc;
-(void)setBackgroundColor:(id)color;
-(void)internalSetBackgroundColor:(id)color;
-(id)init;
@end
