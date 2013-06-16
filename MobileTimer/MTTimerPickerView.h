/* MTTimerPickerView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIDatePicker, UIView, TimerTimeView;

__attribute__((visibility("hidden")))
@interface MTTimerPickerView : XXUnknownSuperclass {
	UIView* _keylineView;
	UIView* _pickerBackgroundView;
	UIDatePicker* _picker;
	TimerTimeView* _timeView;
	int _state;
}
@property(assign, nonatomic) int state;
@property(readonly, assign, nonatomic) TimerTimeView* timeView;
@property(readonly, assign, nonatomic) UIDatePicker* picker;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)color;
-(void)setState:(int)state animated:(BOOL)animated;
-(void)internalSetBackgroundColor:(id)color;
-(void)dealloc;
-(id)initWithPicker:(id)picker timeView:(id)view reuseIdentifier:(id)identifier;
@end