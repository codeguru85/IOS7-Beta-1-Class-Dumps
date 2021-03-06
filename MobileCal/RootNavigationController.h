/* RootNavigationController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "UIPopoverControllerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "UINavigationControllerDelegate.h"

@class _UINavigationControllerPalette, UIBarButtonItem, PaletteView, CalendarModel;

__attribute__((visibility("hidden")))
@interface RootNavigationController : XXUnknownSuperclass <UINavigationControllerDelegate, UIPopoverControllerDelegate> {
	_UINavigationControllerPalette* _palette;
	BOOL _showingOverriddenToolbarItems;
	UIBarButtonItem* _searchBarButtonItem;
	UIBarButtonItem* _todayBarButtonItem;
	UIBarButtonItem* _inboxBarButtonItem;
	UIBarButtonItem* _calendarsBarButtonItem;
	UIBarButtonItem* _addEventBarButtonItem;
	PaletteView* _paletteView;
	UIBarButtonItem* _searchButton;
	UIBarButtonItem* _todayButton;
	UIBarButtonItem* _inboxButton;
@private
	UIBarButtonItem* _calendarsButton;
@protected
	UIBarButtonItem* _addEventButton;
	CalendarModel* _model;
	unsigned _numberOfNotifications;
}
@property(assign, nonatomic) unsigned numberOfNotifications;
@property(assign, nonatomic) BOOL showingOverriddenToolbarItems;
@property(retain, nonatomic) CalendarModel* model;
@property(retain, nonatomic) UIBarButtonItem* addEventButton;
@property(retain, nonatomic) UIBarButtonItem* calendarsButton;
@property(retain, nonatomic) UIBarButtonItem* inboxButton;
@property(retain, nonatomic) UIBarButtonItem* todayButton;
@property(retain, nonatomic) UIBarButtonItem* searchButton;
@property(retain, nonatomic) PaletteView* paletteView;
@property(retain, nonatomic) UIBarButtonItem* addEventBarButtonItem;
@property(retain, nonatomic) UIBarButtonItem* calendarsBarButtonItem;
@property(retain, nonatomic) UIBarButtonItem* inboxBarButtonItem;
@property(retain, nonatomic) UIBarButtonItem* todayBarButtonItem;
@property(retain, nonatomic) UIBarButtonItem* searchBarButtonItem;
+(id)_inboxTitleForNotificationCount:(unsigned)notificationCount;
-(void).cxx_destruct;
-(id)showSearchAnimated:(BOOL)animated;
-(id)showInboxAnimated:(BOOL)animated;
-(id)bestDateForNewEvent;
-(void)inboxPressed;
-(void)calendarsPressed;
-(void)todayPressed;
-(void)addEventPressed;
-(void)searchPressed;
-(unsigned)supportedInterfaceOrientations;
-(void)navigationController:(id)controller didShowViewController:(id)controller2 animated:(BOOL)animated;
-(void)navigationController:(id)controller willShowViewController:(id)controller2 animated:(BOOL)animated;
-(void)addToolbarButtonItemsWithViewController:(id)viewController;
-(void)addNavigationBarButtonItemsWithViewController:(id)viewController;
-(void)_notificationCountChanged;
-(id)navigationController:(id)controller animatorForOperation:(int)operation fromViewController:(id)viewController toViewController:(id)viewController4;
-(void)dealloc;
-(id)initWithRootViewController:(id)rootViewController model:(id)model;
@end
