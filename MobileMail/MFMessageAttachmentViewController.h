/* MFMessageAttachmentViewController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MessageViewController.h"

@protocol MFAttachmentDataProvider;

__attribute__((visibility("hidden")))
@interface MFMessageAttachmentViewController : MessageViewController {
	id<MFAttachmentDataProvider> _provider;
}
@property(retain, nonatomic) id<MFAttachmentDataProvider> provider;
-(void)viewDidDisappear:(BOOL)view;
@end
