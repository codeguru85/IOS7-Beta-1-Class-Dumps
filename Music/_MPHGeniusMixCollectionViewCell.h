/* _MPHGeniusMixCollectionViewCell.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "Music-Structs.h"

@class NSString, UILabel, NSMutableArray, UIImage, UIButton;

__attribute__((visibility("hidden")))
@interface _MPHGeniusMixCollectionViewCell : XXUnknownSuperclass {
	UILabel* _artistsLabel;
	UILabel* _basedOnLabel;
	NSMutableArray* _imageViews;
	UILabel* _titleLabel;
	BOOL _offline;
	BOOL _playing;
	UIImage* _combinedArtworkImage;
	UIButton* _playButton;
}
@property(copy, nonatomic) NSString* title;
@property(assign, nonatomic, getter=isPlaying) BOOL playing;
@property(assign, nonatomic, getter=isOffline) BOOL offline;
@property(readonly, assign, nonatomic) UIButton* playButton;
@property(copy, nonatomic) NSString* artistsText;
@property(retain, nonatomic) UIImage* combinedArtworkImage;
-(void).cxx_destruct;
-(id)_pressedPlayButtonImage;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)frame;
@end