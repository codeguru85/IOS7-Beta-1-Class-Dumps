/* ScrollContactInEditModeTest.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "UINavigationControllerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "ABContactViewControllerDelegate.h"

@class ABPeoplePickerNavigationController;

__attribute__((visibility("hidden")))
@interface ScrollContactInEditModeTest : XXUnknownSuperclass <UINavigationControllerDelegate, ABContactViewControllerDelegate> {
	ABPeoplePickerNavigationController* _peoplePicker;
	int _scrollIterations;
}
@property(assign, nonatomic) int scrollIterations;
@property(retain, nonatomic) ABPeoplePickerNavigationController* peoplePicker;
-(void).cxx_destruct;
-(void)contactViewController:(id)controller didChangeToEditMode:(BOOL)editMode;
-(void)navigationController:(id)controller didShowViewController:(id)controller2 animated:(BOOL)animated;
-(BOOL)startTestWithOptions:(id)options peoplePicker:(id)picker;
-(void)dealloc;
@end