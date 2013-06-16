/* ASTGestureRecorderViewController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "ASTGestureRecorderViewDataSource.h"
#import "ASTGestureRecorderFingerPathCollectionDelegate.h"

@class NSMutableArray, ASTGestureRecorderStyleProvider, ASTGestureRecorderView, ASTGestureRecorderFingerPathCollection;
@protocol ASTGestureRecorderViewControllerDelegate;

@interface ASTGestureRecorderViewController : XXUnknownSuperclass <ASTGestureRecorderViewDataSource, ASTGestureRecorderFingerPathCollectionDelegate> {
@private
	BOOL _shouldPreventFurtherRecording;
	BOOL _trackingTouches;
	BOOL _inReplayMode;
	ASTGestureRecorderStyleProvider* _styleProvider;
	id<ASTGestureRecorderViewControllerDelegate> _delegate;
	ASTGestureRecorderFingerPathCollection* _fingerPathCollection;
	ASTGestureRecorderFingerPathCollection* _dynamicFingerPathCollection;
	unsigned _replayTimestampIndex;
	unsigned _replayTimestampsCount;
	NSMutableArray* _replayDynamicFingerPaths;
	double _trackingTouchesDidStartTimeInterval;
}
@property(retain, nonatomic) NSMutableArray* replayDynamicFingerPaths;
@property(assign, nonatomic) unsigned replayTimestampsCount;
@property(assign, nonatomic) unsigned replayTimestampIndex;
@property(assign, nonatomic, getter=isInReplayMode) BOOL inReplayMode;
@property(assign, nonatomic) double trackingTouchesDidStartTimeInterval;
@property(assign, nonatomic, getter=isTrackingTouches) BOOL trackingTouches;
@property(assign, nonatomic) BOOL shouldPreventFurtherRecording;
@property(retain, nonatomic) ASTGestureRecorderFingerPathCollection* dynamicFingerPathCollection;
@property(retain, nonatomic) ASTGestureRecorderFingerPathCollection* fingerPathCollection;
@property(readonly, assign, nonatomic, getter=isEmpty) BOOL empty;
@property(readonly, assign, nonatomic) ASTGestureRecorderView* gestureRecorderView;
@property(assign, nonatomic) id<ASTGestureRecorderViewControllerDelegate> delegate;
@property(retain, nonatomic) ASTGestureRecorderStyleProvider* styleProvider;
-(void)reloadAllFingerPaths;
-(void)gestureRecorderFingerPathCollection:(id)collection didUpdateFingerPathAtIndex:(unsigned)index;
-(void)gestureRecorderFingerPathCollection:(id)collection didInsertFingerPathAtIndex:(unsigned)index;
-(id)gestureRecorderView:(id)view dynamicFingerPathAtIndex:(unsigned)index;
-(unsigned)numberOfDynamicFingerPathsInGestureRecorderView:(id)gestureRecorderView;
-(id)gestureRecorderView:(id)view staticFingerPathAtIndex:(unsigned)index;
-(unsigned)numberOfStaticFingerPathsInGestureRecorderView:(id)gestureRecorderView;
-(void)touchesCancelled:(id)cancelled withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)touchesMoved:(id)moved withEvent:(id)event;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)_freezeAllDynamicFingerPaths;
-(void)_updateDynamicFingerPathsWithTouches:(id)touches;
-(void)_didFinishReplayingRecordedGesture;
-(void)_didStopRecordingAtomicFingerPath;
-(void)_didStartRecordingAtomicFingerPath;
-(double)_maximumDurationOfRecordedGesture;
-(void)_releaseOutlets;
-(void)_clearWeakReferencesWithOutlets;
-(void)_exitReplayMode;
-(void)_advanceReplay;
-(void)replayRecordedGesture;
-(void)preventFurtherRecording;
-(void)deleteAllFingerPaths;
-(id)recordedGesturePropertyListRepresentationWithName:(id)name;
-(void)hideStaticView;
-(void)loadView;
-(void)dealloc;
@end