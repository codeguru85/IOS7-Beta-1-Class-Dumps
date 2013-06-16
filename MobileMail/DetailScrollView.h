/* DetailScrollView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MobileMail-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIView;

__attribute__((visibility("hidden")))
@interface DetailScrollView : XXUnknownSuperclass {
	id _delegate;
	BOOL _scrolling;
}
@property(readonly, assign, nonatomic) UIView* contentView;
@property(assign, nonatomic) id delegate;
@property(assign, nonatomic) CGPoint contentOffset;
-(void)touchesCancelled:(id)cancelled withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)_snapBack;
-(void)touchesMoved:(id)moved withEvent:(id)event;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)animationDidStop:(id)animation finished:(id)finished context:(void*)context;
-(void)_didEndScrolling;
-(void)setContentOffset:(CGPoint)offset animated:(BOOL)animated;
-(BOOL)canBecomeFirstResponder;
@end