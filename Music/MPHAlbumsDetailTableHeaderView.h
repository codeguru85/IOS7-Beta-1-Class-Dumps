/* MPHAlbumsDetailTableHeaderView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "Music-Structs.h"

@class NSString, UILabel, UIImageView, SKUIItemOfferButton, UIView, UIImage, _UIBackdropView, UIButton;

__attribute__((visibility("hidden")))
@interface MPHAlbumsDetailTableHeaderView : XXUnknownSuperclass {
	UIImageView* _artworkImageView;
	_UIBackdropView* _backdropView;
	UILabel* _copyrightLabel;
	UILabel* _detailTextLabel;
	UIView* _hairlineView;
	SKUIItemOfferButton* _itemOfferButton;
	UIButton* _shuffleButton;
	UILabel* _titleLabel;
	UIView* _topCellSeparatorView;
	UILabel* _yearLabel;
	float _cloudRightInset;
	id _downloadActionBlock;
	id _shuffleActionBlock;
	int _songCount;
	double _totalDuration;
}
@property(copy, nonatomic) NSString* yearText;
@property(readonly, assign, nonatomic) double totalDuration;
@property(copy, nonatomic) NSString* title;
@property(readonly, assign, nonatomic) int songCount;
@property(copy, nonatomic) id shuffleActionBlock;
@property(copy, nonatomic) id downloadActionBlock;
@property(assign, nonatomic, getter=isDownloadable) BOOL downloadable;
@property(copy, nonatomic) NSString* copyrightText;
@property(assign, nonatomic) float cloudRightInset;
@property(assign, nonatomic) float backgroundTransitionProgress;
@property(retain, nonatomic) UIImage* artworkImage;
+(float)defaultHeight;
+(CGSize)artworkSize;
-(void).cxx_destruct;
-(void)_shuffleButtonAction:(id)action;
-(void)_itemOfferButtonAction:(id)action;
-(void)setSongCount:(int)count totalDuration:(double)duration;
-(void)layoutSubviews;
-(void)dealloc;
-(id)initWithReuseIdentifier:(id)reuseIdentifier;
@end
