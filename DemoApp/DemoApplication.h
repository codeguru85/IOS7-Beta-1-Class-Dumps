/* DemoApplication.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "DemoApp-Structs.h"
#import "UIApplicationDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIView, UIMoviePlayerController, UIWindow, UIImageView;

__attribute__((visibility("hidden")))
@interface DemoApplication : XXUnknownSuperclass <UIApplicationDelegate> {
	UIWindow* _window;
	UIView* _backgroundView;
	UIMoviePlayerController* _moviePlayer;
	UIImageView* _imageView;
}
@property(retain, nonatomic) UIWindow* window;
-(void)playMovie;
-(void)_serverDeathNotification:(id)notification;
-(void)_playbackStateChangedNotification:(id)notification;
-(void)moviePlayerPlaybackDidEnd:(id)moviePlayerPlayback;
-(void)_restartPlaybackAfterDelay;
-(void)sendEvent:(id)event;
-(void)applicationWillResignActive:(id)application;
-(void)applicationDidBecomeActive:(id)application;
-(void)applicationDidEnterBackground:(id)application;
-(void)applicationDidFinishLaunching:(id)application;
-(id)init;
@end
