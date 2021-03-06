/* StocksBacksideView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "Stocks-Structs.h"

@class UISegmentedControl, UIButton, StocksBacksideTableView;

__attribute__((visibility("hidden")))
@interface StocksBacksideView : XXUnknownSuperclass <UITableViewDelegate, UITableViewDataSource> {
	StocksBacksideTableView* _table;
	UISegmentedControl* _segmentedControl;
	UIButton* _logoView;
	BOOL _didScroll;
	BOOL _suppressNotifications;
}
-(void).cxx_destruct;
-(void)selectedSegmentChanged;
-(void)willHide;
-(void)_stockWasAdded:(id)added;
-(void)_stockListChanged;
-(BOOL)tableView:(id)view shouldIndentWhileEditingRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view commitEditingStyle:(int)style forRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view moveRowAtIndexPath:(id)indexPath toIndexPath:(id)indexPath3;
-(id)tableView:(id)view targetIndexPathForMoveFromRowAtIndexPath:(id)indexPath toProposedIndexPath:(id)proposedIndexPath;
-(BOOL)tableView:(id)view canMoveRowAtIndexPath:(id)indexPath;
-(BOOL)tableView:(id)view canEditRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(unsigned)numberOfPlaceholderCells;
-(void)flashScrollIndicators;
-(void)viewWillAppear;
-(void)layoutSubviews;
-(void)setSelectedRowDataType:(int)type;
-(void)scrollViewDidScroll:(id)scrollView;
-(id)tableView;
-(void)dealloc;
-(void)_logoClicked;
-(id)initWithFrame:(CGRect)frame;
@end
