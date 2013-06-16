/* MNSettingsTraceController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "DebugValuesViewController.h"

@class UIActionSheet;
@protocol DebugViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface MNSettingsTraceController : DebugValuesViewController {
	id<DebugViewControllerDelegate> _delegate;
	UIActionSheet* _stopRecordingGPSTraceSheet;
	UIActionSheet* _deleteRecordingSheet;
}
+(id)navigationDestinationTitle;
-(void)setDelegate:(id)delegate;
-(id)delegate;
-(void)prepareContent;
-(void)dealloc;
-(id)initWithStyle:(int)style;
@end