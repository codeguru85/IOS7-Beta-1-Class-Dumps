/* NavigationSnapshotControllerDelegate.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */



@protocol NavigationSnapshotControllerDelegate
-(BOOL)navigationSnapshotController:(id)controller shouldReceiveTouch:(id)touch;
-(id)navigationSnapshotControllerDocumentToSnapshot:(id)snapshot;
-(void)navigationSnapshotControllerWillUnhideWebContent:(id)navigationSnapshotController;
-(void)navigationSnapshotController:(id)controller willNavigateAtEndOfGesture:(BOOL)gesture toHistoryPosition:(int)historyPosition;
-(void)navigationSnapshotControllerGestureEnded:(id)ended willNavigate:(BOOL)navigate;
-(void)navigationSnapshotControllerGestureBegan:(id)began;
@end
