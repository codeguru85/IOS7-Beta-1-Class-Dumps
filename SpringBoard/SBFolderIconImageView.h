/* SBFolderIconImageView.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBIconImageView.h"
#import "SBFolderIconObserver.h"

@class NSMutableArray, UIView, _SBIconGridWrapperView, SBFloatyFolderView, SBFolderIconImageBackgroundView;

__attribute__((visibility("hidden")))
@interface SBFolderIconImageView : SBIconImageView <SBFolderIconObserver> {
	SBFolderIconImageBackgroundView* _backgroundView;
	UIView* _pageGridContainer;
	_SBIconGridWrapperView* _leftWrapperView;
	_SBIconGridWrapperView* _rightWrapperView;
	NSMutableArray* _pageElements;
	unsigned _currentPageIndex;
	SBFloatyFolderView* _crossfadeFolderView;
	UIView* _crossfadeScalingView;
}
-(void)_showRightMinigrid;
-(void)_showLeftMinigrid;
-(void)_setPageElements:(id)elements;
-(void)_setupGridViewsInDefaultConfiguration;
-(id)_currentPageElement;
-(id)_folderIcon;
-(CGSize)_interiorGridSizeClipRect;
-(CGSize)_interPageSpacing;
-(Class)_iconGridImageClass;
-(void)_performScrollingMovingToLeft:(BOOL)left movingToRight:(BOOL)right targetPageIndex:(unsigned)index targetPageScrollRow:(unsigned)row newLeftElement:(id)element newRightElement:(id)element6 animated:(BOOL)animated;
-(void)folderIcon:(id)icon didUpdateGridImage:(id)image forListIndex:(unsigned)listIndex forContainedIconImageUpdate:(id)containedIconImageUpdate;
-(void)cleanupAfterFloatyFolderCrossfade;
-(void)setFloatyFolderCrossfadeFraction:(float)fraction;
-(void)prepareToCrossfadeWithFloatyFolderView:(id)floatyFolderView;
-(void)setBackgroundScale:(float)scale;
-(id)backgroundView;
-(void)setBackgroundAndIconGridImageAlpha:(float)alpha;
-(void)setIconGridImageAlpha:(float)alpha;
-(CGRect)frameForMiniIconAtIndexPath:(id)indexPath;
-(CGRect)visibleImageRelativeFrameForMiniIconAtIndex:(unsigned)index;
-(CGRect)frameForMiniIconAtIndex:(unsigned)index;
-(unsigned)lastVisibleMiniIconIndex;
-(unsigned)centerVisibleMiniIconIndex;
-(unsigned)firstVisibleMiniIconIndex;
-(unsigned)visibleMiniIconListIndex;
-(unsigned)visibleMiniIconCount;
-(void)scrollToGapOrTopIfFullOfPage:(unsigned)page animated:(BOOL)animated;
-(void)scrollToTopOfPage:(unsigned)page animated:(BOOL)animated;
-(void)scrollToFirstGapAnimated:(BOOL)firstGapAnimated;
-(void)scrollToTopOfFirstPageAnimated:(BOOL)firstPageAnimated;
-(void)layoutSubviews;
-(id)snapshot;
-(void)prepareForReuse;
-(void)updateImage;
-(id)squareContentsImage;
-(id)contentsImage;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end
