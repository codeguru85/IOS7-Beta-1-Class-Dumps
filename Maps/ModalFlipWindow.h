/* ModalFlipWindow.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "FlipViewControllerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ModalFlipWindow : XXUnknownSuperclass <FlipViewControllerDelegate> {
	id _dismissal;
}
@property(copy, nonatomic) id dismissal;
-(void)flipViewControllerDidDismiss:(id)flipViewController;
-(void)dismiss;
-(void)presentViewController:(id)controller flippingView:(id)view dismissal:(id)dismissal;
-(void)dealloc;
-(id)init;
@end
