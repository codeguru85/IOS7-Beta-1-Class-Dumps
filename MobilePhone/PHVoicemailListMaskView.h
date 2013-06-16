/* PHVoicemailListMaskView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MobilePhone-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIView, PHVoicemailCell, UITableView, NSArray, UIControl;
@protocol PHVoicemailListMaskViewDelegate;

__attribute__((visibility("hidden")))
@interface PHVoicemailListMaskView : XXUnknownSuperclass {
	UIControl* _topGrayView;
	UIView* _topLineView;
	UIControl* _bottomGrayView;
	UIView* _bottomLineView;
	NSArray* _cellViewConstraints;
	NSArray* _lineConstraints;
	UITableView* _tableView;
	BOOL _showingGrayLayer;
	PHVoicemailCell* _cellToShow;
	id<PHVoicemailListMaskViewDelegate> _listMaskViewDelegate;
}
@property(assign) id<PHVoicemailListMaskViewDelegate> listMaskViewDelegate;
@property(assign, nonatomic) BOOL showingGrayLayer;
@property(retain, nonatomic) PHVoicemailCell* cellToShow;
-(void)_grayViewTouchUpInside:(id)inside withEvent:(id)event;
-(id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;
-(void)layoutSubviews;
-(void)updateConstraints;
-(void)recalculateMaskPosition;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame tableView:(id)view;
-(id)initWithFrame:(CGRect)frame;
@end