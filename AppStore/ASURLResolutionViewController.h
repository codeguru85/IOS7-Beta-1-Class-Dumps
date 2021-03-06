/* ASURLResolutionViewController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SKUIProductPageOverlayDelegate.h"

@class NSURL, NSString, SKUIProductPageOverlayController, SSURLBag;

__attribute__((visibility("hidden")))
@interface ASURLResolutionViewController : XXUnknownSuperclass <SKUIProductPageOverlayDelegate> {
	NSString* _bagKey;
	BOOL _hasAppeared;
	NSString* _itemKind;
	SKUIProductPageOverlayController* _overlayController;
	int _tabBarIndex;
	SSURLBag* _urlBag;
	NSURL* _url;
}
-(void).cxx_destruct;
-(id)_urlBag;
-(void)_showProductPageURL:(id)url;
-(void)_showGenericURL:(id)url;
-(void)_dismissTransientViewController;
-(void)_attemptResolutionWithURL:(id)url;
-(void)_attemptResolutionWithBagDictionary:(id)bagDictionary;
-(void)productPageOverlayDidDismiss:(id)productPageOverlay;
-(void)viewWillAppear:(BOOL)view;
-(void)loadView;
-(void)dealloc;
-(id)initWithURLBagKey:(id)urlbagKey;
-(id)initWithURL:(id)url;
-(id)initWithItemKind:(id)itemKind tabBarIndex:(int)index;
-(id)_initASURLResolutionViewController;
@end
