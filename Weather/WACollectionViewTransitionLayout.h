/* WACollectionViewTransitionLayout.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "Weather-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSIndexPath;

__attribute__((visibility("hidden")))
@interface WACollectionViewTransitionLayout : XXUnknownSuperclass {
	NSIndexPath* _pivotIndexPath;
	unsigned _transitionMode;
	CGPoint _initialOffsetPoint;
}
@property(assign, nonatomic) unsigned transitionMode;
@property(assign, nonatomic) CGPoint initialOffsetPoint;
@property(retain, nonatomic) NSIndexPath* pivotIndexPath;
-(id)layoutAttributesForElementsInRect:(CGRect)rect;
@end