/* CompassTriangleView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "Compass-Structs.h"
#import "CompassRotatingView.h"

@class UIView;

__attribute__((visibility("hidden")))
@interface CompassTriangleView : CompassRotatingView {
	UIView* _triangleView;
	float _triangleRadius;
}
@property(assign, nonatomic) float triangleRadius;
-(void)setCompassHeading:(double)heading;
-(void)layoutSubviews;
-(id)triangleView;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end
