/* MNSettingsTracePickerController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "AuxiliaryDebugViewController.h"
#import "MFMailComposeViewControllerDelegate.h"
#import "UIActionSheetDelegate.h"

@class NSArray, UIActionSheet, NSString;
@protocol DebugViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface MNSettingsTracePickerController : AuxiliaryDebugViewController <UIActionSheetDelegate, MFMailComposeViewControllerDelegate> {
	id<DebugViewControllerDelegate> _delegate;
	NSArray* _myFiles;
	NSString* _selectedTracePath;
	NSString* _selectedTraceName;
	UIActionSheet* _myFileSheet;
	UIActionSheet* _deleteFileSheet;
	BOOL _showingPlayButton;
	NSArray* _myFileSheetTrackPickerOptions;
	UIActionSheet* deleteFileSheet;
}
@property(retain, nonatomic) NSString* selectedTraceName;
@property(retain, nonatomic) NSString* selectedTracePath;
@property(retain, nonatomic) NSArray* myFiles;
@property(retain, nonatomic) NSArray* myFileSheetTracePickerOptions;
@property(retain, nonatomic) UIActionSheet* myFileSheet;
@property(retain, nonatomic) UIActionSheet* deleteFileSheet;
@property(assign, nonatomic) id<DebugViewControllerDelegate> delegate;
+(id)navigationDestinationTitle;
-(void)mailComposeController:(id)controller didFinishWithResult:(int)result error:(id)error;
-(void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view willSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(id)tableView:(id)view titleForHeaderInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)_updateTracePickerOptions;
-(void)_reloadTraces;
-(void)viewWillAppear:(BOOL)view;
-(Class)_mfMailComposeViewController;
-(void)dealloc;
@end
