/* VideosAVController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSTimer;

__attribute__((visibility("hidden")))
@interface VideosAVController : XXUnknownSuperclass {
	BOOL _scheduledTrackExpirationCallback;
	NSTimer* _rentalExpiryTimer;
}
-(void).cxx_destruct;
-(void)_setRentalIsPlaying:(BOOL)playing forItem:(id)item;
-(void)_scheduleExpirationTimerIfNecessary;
-(void)_movieExpirationCheckCallback;
-(void)_endPlaybackIfNeededForCurrentNetwork;
-(void)_networkTypeDidChange:(id)_networkType;
-(void)_isCellularDataRestrictedDidChange:(id)_isCellularDataRestricted;
-(void)_downloadCancelledNotification:(id)notification;
-(void)_availableMediaLibrariesDidChange:(id)_availableMediaLibraries;
-(BOOL)showPlaybackStateOverlaysOnTVOut;
-(void)_itemWillChange:(id)_item;
-(void)_itemReadyToPlay:(id)play;
-(BOOL)currentItemIsRental;
-(void)airPlayVideoEnded;
-(void)dealloc;
-(id)init;
@end
