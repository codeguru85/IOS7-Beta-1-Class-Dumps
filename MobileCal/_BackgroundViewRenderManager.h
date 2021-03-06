/* _BackgroundViewRenderManager.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MobileCal-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableSet, NSOperationQueue;

__attribute__((visibility("hidden")))
@interface _BackgroundViewRenderManager : XXUnknownSuperclass {
	NSOperationQueue* _queue;
	NSMutableSet* _viewsInQueue;
	opaque_pthread_mutex_t _lock;
}
+(id)sharedManager;
-(void).cxx_destruct;
-(void)cancelAllRendering;
-(void)removeViewFromQueue:(id)queue;
-(void)addViewToQueue:(id)queue;
-(void)dealloc;
-(id)init;
@end
