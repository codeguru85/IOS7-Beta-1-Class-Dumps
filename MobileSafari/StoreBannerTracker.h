/* StoreBannerTracker.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSObject, NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface StoreBannerTracker : XXUnknownSuperclass {
	NSMutableDictionary* _blockedProducts;
	NSObject<OS_dispatch_queue>* _queue;
}
+(id)sharedTracker;
-(void)blockProductBanner:(id)banner;
-(void)isProductBannerBlocked:(id)blocked completion:(id)completion;
-(void)clear;
-(void)save;
-(void)load;
-(id)filePath;
-(void)dealloc;
-(id)init;
@end
