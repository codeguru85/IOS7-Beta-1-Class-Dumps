/* SBFolderIconView.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "_UISettingsKeyObserver.h"
#import "SpringBoard-Structs.h"
#import "SBIconView.h"

@class SBFolderSettings;

__attribute__((visibility("hidden")))
@interface SBFolderIconView : SBIconView <_UISettingsKeyObserver> {
	SBFolderSettings* _folderSettings;
}
+(BOOL)_canShowUpdatedMark;
-(id)_folderIconImageView;
-(void)settings:(id)settings changedValueForKey:(id)key;
-(void)_applyEditingStateAnimated:(BOOL)animated;
-(void)cleanupAfterFloatyFolderCrossfade;
-(void)setFloatyFolderCrossfadeFraction:(float)fraction;
-(void)prepareToCrossfadeWithFloatyFolderView:(id)floatyFolderView;
-(void)removeDropGlow;
-(void)showDropGlow:(BOOL)glow;
-(void)prepareDropGlow;
-(void)setBackgroundAndIconGridImageAlpha:(float)alpha;
-(void)setIconGridImageAlpha:(float)alpha;
-(double)grabDurationForEvent:(id)event;
-(BOOL)_delaysUnhighlightWhenTapped;
-(BOOL)allowsTapWhileEditing;
-(id)description;
-(id)folder;
-(void)scrollToGapOrTopIfFullOfPage:(unsigned)page animated:(BOOL)animated;
-(void)scrollToTopOfPage:(unsigned)page animated:(BOOL)animated;
-(void)scrollToFirstGapAnimated:(BOOL)firstGapAnimated;
-(void)scrollToTopOfFirstPageAnimated:(BOOL)firstPageAnimated;
-(CGRect)visibleImageRelativeFrameForMiniIconAtIndex:(unsigned)index;
-(CGRect)frameForMiniIconAtIndex:(unsigned)index;
-(unsigned)lastVisibleMiniIconIndex;
-(unsigned)centerVisibleMiniIconIndex;
-(unsigned)firstVisibleMiniIconIndex;
-(unsigned)visibleMiniIconListIndex;
-(unsigned)visibleMiniIconCount;
-(id)iconBackgroundView;
-(void)setIcon:(id)icon;
-(id)folderIcon;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end
