/* StarkSearchBarViewDelegate.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol StarkSearchBarViewDelegate <NSObject>
@optional
-(void)starkSearchBarDictationRecordingDidFail:(id)starkSearchBarDictationRecording;
-(void)starkSearchBarDictationRecordingDidEnd:(id)starkSearchBarDictationRecording;
-(void)starkSearchBarDictationRecordingDidBegin:(id)starkSearchBarDictationRecording;
-(id)nextResponderForStarkSearchBar:(id)starkSearchBar;
-(void)starkSearchBarChosePerformSearch:(id)search;
-(void)starkSearchBar:(id)bar willEditSearchTextToString:(id)string cause:(int)cause;
-(void)starkSearchBar:(id)bar willEndEditingSearch:(id)search;
-(void)starkSearchBar:(id)bar willBeginEditingSearch:(id)search;
@end