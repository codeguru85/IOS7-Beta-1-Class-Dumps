/* NamedURLEditingController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "URLEditingController.h"


__attribute__((visibility("hidden")))
@interface NamedURLEditingController : URLEditingController {
	BOOL _saved;
}
@property(assign, nonatomic) BOOL saved;
-(id)controlledURL:(id)url;
-(void)setControlledURL:(id)url specifier:(id)specifier;
-(id)controlledURLTitle:(id)title;
-(void)setControlledURLTitle:(id)title specifier:(id)specifier;
-(void)saveURL;
-(void)viewWillDisappear:(BOOL)view;
-(void)willResignActive;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(id)specifiers;
@end
