/* WorldClockPadContentView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MobileTimer-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class WorldClockPageControl, WorldClockMapView, WorldClockCollectionView, UIPageControl;

__attribute__((visibility("hidden")))
@interface WorldClockPadContentView : XXUnknownSuperclass {
	WorldClockCollectionView* _clocksView;
	WorldClockPageControl* _clocksPageIndicator;
	WorldClockMapView* _mapView;
}
@property(readonly, assign, nonatomic) WorldClockMapView* mapView;
@property(readonly, assign, nonatomic) UIPageControl* clocksPageIndicator;
@property(readonly, assign, nonatomic) WorldClockCollectionView* clocksView;
-(void)scrollToCurrentPage;
-(void)layoutSubviews;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end
