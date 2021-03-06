/* SearchBarDelegate.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "NSObject.h"

@class DirectionsSearchViewController;

@protocol SearchBarDelegate <NSObject>
@property(readonly, assign, nonatomic) BOOL isRotating;
@property(readonly, assign, nonatomic) DirectionsSearchViewController* directionsSearchViewController;
-(void)clearSearchResults;
-(id)collectionsViewController;
-(id)worldView;
-(void)searchBarDidPresentPopover:(id)searchBar shouldReselectAnnotation:(BOOL)annotation;
-(void)searchBar:(id)bar choseHistoryItem:(id)item;
-(void)searchBar:(id)bar choseBookmark:(id)bookmark;
-(void)searchBarCancelButtonWasTapped:(id)tapped;
-(void)searchBarBookmarksButtonWasTapped:(id)tapped;
-(void)searchBarDirectionsButtonWasTapped:(id)tapped;
@end
