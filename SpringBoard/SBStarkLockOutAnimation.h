/* SBStarkLockOutAnimation.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIView;

__attribute__((visibility("hidden")))
@interface SBStarkLockOutAnimation : XXUnknownSuperclass {
	int _type;
	UIView* _snapshotView;
	int _statusBarStyle;
	BOOL _statusBarHidden;
}
@property(assign, nonatomic) BOOL statusBarHidden;
@property(assign, nonatomic) int statusBarStyle;
@property(retain, nonatomic) UIView* snapshotView;
@property(assign, nonatomic) int type;
-(id)description;
-(void)dealloc;
@end
