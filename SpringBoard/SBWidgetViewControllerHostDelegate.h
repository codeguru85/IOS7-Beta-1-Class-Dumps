/* SBWidgetViewControllerHostDelegate.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "NSObject.h"


@protocol SBWidgetViewControllerHostDelegate <NSObject>
@optional
-(void)widget:(id)widget didUpdatePreferredSize:(CGSize)size;
-(void)widget:(id)widget requestsLaunchOfURL:(id)url;
-(void)widget:(id)widget requestsPresentationOfViewController:(id)viewController presentationStyle:(int)style context:(id)context completion:(id)completion;
@end
