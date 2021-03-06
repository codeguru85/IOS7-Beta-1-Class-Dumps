/* SBLockScreenTimerView.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"

@class NSDate, SBLockScreenTimerDialView, UILabel;

__attribute__((visibility("hidden")))
@interface SBLockScreenTimerView : XXUnknownSuperclass {
	NSDate* _endDate;
	SBLockScreenTimerDialView* _timerDial;
	UILabel* _timerLabel;
}
-(id)_timerFont;
-(CGSize)sizeThatFits:(CGSize)fits;
-(void)layoutSubviews;
-(float)baselineOffsetFromBottom;
-(void)setTimerHidden:(BOOL)hidden;
-(void)stopTimerDial;
-(void)startTimerDial;
-(void)updateTimerLabel;
-(void)setEndDate:(id)date;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end
