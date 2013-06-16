/* MUAppImageManager.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "NSURLConnectionDataDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, NSCache, NSMapTable;

__attribute__((visibility("hidden")))
@interface MUAppImageManager : XXUnknownSuperclass <NSURLConnectionDataDelegate> {
	NSCache* _iconCache;
	NSMapTable* _containers;
	NSMutableDictionary* _urlConnections;
}
+(id)sharedImageManager;
-(void)connectionDidFinishLoading:(id)connection;
-(void)connection:(id)connection didFailWithError:(id)error;
-(void)connection:(id)connection didReceiveData:(id)data;
-(void)cancelLoadAppImageAtURL:(id)url;
-(void)loadAppImageAtURL:(id)url completionHandler:(id)handler;
-(void)clearImageCache;
-(void)dealloc;
-(id)init;
@end