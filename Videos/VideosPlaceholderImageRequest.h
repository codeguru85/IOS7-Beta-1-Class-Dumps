/* VideosPlaceholderImageRequest.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface VideosPlaceholderImageRequest : XXUnknownSuperclass {
	BOOL _season;
}
-(void)composeUniqueKey;
-(id)copyRawImageReturningError:(id*)error;
-(BOOL)canRequestSynchronously;
-(id)initWithMediaItem:(id)mediaItem tvSeason:(BOOL)season;
-(id)initWithMediaItem:(id)mediaItem;
@end
