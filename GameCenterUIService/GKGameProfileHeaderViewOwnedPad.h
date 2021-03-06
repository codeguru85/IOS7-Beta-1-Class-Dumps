/* GKGameProfileHeaderViewOwnedPad.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "GameCenterUIService-Structs.h"
#import "GKGameProfileHeaderView.h"

@class GKFacebookLikeButton, GKRatingControl;

__attribute__((visibility("hidden")))
@interface GKGameProfileHeaderViewOwnedPad : GKGameProfileHeaderView {
	BOOL _playerIsUnderage;
	GKFacebookLikeButton* _likeButton;
	GKRatingControl* _ratingControl;
}
@property(assign, nonatomic) BOOL playerIsUnderage;
@property(retain, nonatomic) GKRatingControl* ratingControl;
@property(retain, nonatomic) GKFacebookLikeButton* likeButton;
-(void)rateGame;
-(void)didUpdateModel;
-(void)updateRating;
-(void)applyConstraints;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end
