/* CPCopilotViewController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class CPClockViewController, UINavigationController, CPNowPlayingViewController;

__attribute__((visibility("hidden")))
@interface CPCopilotViewController : XXUnknownSuperclass {
	UINavigationController* _navController;
	CPClockViewController* _clockViewController;
	CPNowPlayingViewController* _nowPlayingViewController;
}
-(void).cxx_destruct;
-(void)switchToClock:(BOOL)clock;
-(void)switchToNowPlaying:(BOOL)nowPlaying;
-(void)switchToState:(id)state withAnimationName:(id)animationName;
-(void)loadView;
@end