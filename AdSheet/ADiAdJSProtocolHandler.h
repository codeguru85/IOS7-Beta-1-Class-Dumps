/* ADiAdJSProtocolHandler.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ADiAdJSProtocolHandler : XXUnknownSuperclass {
	BOOL _shouldStopLoading;
}
+(id)canonicalRequestForRequest:(id)request;
+(BOOL)canInitWithRequest:(id)request;
+(id)fileURLForRequestURL:(id)requestURL;
-(void)stopLoading;
-(void)startLoading;
@end