/* PopoverRevealViewController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIViewController;

__attribute__((visibility("hidden")))
@interface PopoverRevealViewController : XXUnknownSuperclass {
	UIViewController* _rootViewController;
	UIViewController* _revealedViewController;
	BOOL _animating;
}
@property(retain, nonatomic) UIViewController* revealedViewController;
@property(retain, nonatomic) UIViewController* rootViewController;
-(id)navigationItem;
-(void)dismissRevealedViewControllerAnimated:(BOOL)animated completion:(id)completion;
-(void)revealViewController:(id)controller animated:(BOOL)animated completion:(id)completion;
-(void)viewDidLoad;
-(void)dealloc;
-(id)initWithRootViewController:(id)rootViewController;
@end
