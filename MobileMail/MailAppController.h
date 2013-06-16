/* MailAppController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "UINavigationControllerDelegate.h"
#import "MobileMail-Structs.h"
#import "UIApplicationDelegate.h"
#import "UIAlertViewDelegate.h"
#import "MCProfileConnectionObserver.h"
#import "MFUserAgent.h"
#import "AutoFetchControllerDataSource.h"
#import "MFMailComposeViewControllerDelegate.h"
#import "MailComposeDeliveryControllerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "MFAppPerformanceTesting.h"

@class UIWindow, MFAppBadgeController, MailboxPickerController, AccountSetupController, MailDetailViewController, MailMasterDetailViewController, MailNavigationController, UIImageView, NSObject, NSConditionLock, MFComposeScrollView, MFMessage, NSMutableSet, _MFMailCompositionContext, MailErrorHandler, NSString, NSURL, NSArray, NSSet, ComposeNavigationController, MFAttachmentLibraryManager;
@protocol OS_dispatch_source, NSCoding;

__attribute__((visibility("hidden")))
@interface MailAppController : XXUnknownSuperclass <MFAppPerformanceTesting, UINavigationControllerDelegate, UIApplicationDelegate, UIAlertViewDelegate, MCProfileConnectionObserver, MFUserAgent, AutoFetchControllerDataSource, MFMailComposeViewControllerDelegate, MailComposeDeliveryControllerDelegate> {
	UIWindow* _window;
	MFAppBadgeController* _badgeController;
	MailMasterDetailViewController* _masterDetailViewController;
	MailDetailViewController* _detailViewController;
	MailNavigationController* _navigationController;
	AccountSetupController* _accountSetupController;
	MailboxPickerController* _mailboxPickerController;
	ComposeNavigationController* _composeViewController;
	ComposeNavigationController* _nonModalComposeViewController;
	id _waitingObject;
	SEL _waitingSelector;
	NSObject<OS_dispatch_source>* diagnostic_signal_source;
	NSObject<OS_dispatch_source>* multipurpose_signal_source;
	unsigned _shouldRestoreAutosavedMessageOnResume : 1;
	unsigned _shouldSelectDefaultMailboxOnResume : 1;
	unsigned _shouldTerminateInBackground : 1;
	unsigned _is24HourTime : 1;
	unsigned _accountSetupFinished : 1;
	NSConditionLock* _autosavingLock;
	BOOL _isEditingExistingDraft;
	MFComposeScrollView* _composeScrollViewTapped;
	MFMessage* _focusedMessage;
	NSMutableSet* _networkMonitors;
	opaque_pthread_mutex_t _activityLock;
	CFDictionaryRef _emptiedTrashTimestamps;
	MailErrorHandler* _errorHandler;
	_MFMailCompositionContext* _contextForComposeFromURL;
	id _composeCompletionBlock;
	MFAttachmentLibraryManager* _defaultAttachmentManager;
	NSString* _lastSelectedAccountId;
	unsigned _numberOfActiveAccounts;
	unsigned _numberOfInactiveAccounts;
	NSURL* _savedMailtoURL;
	NSURL* _postponedMessageURL;
	UIImageView* _simulatedDefaultPNGOverlayView;
	BOOL _finishedLaunching;
	int _protectedDataAvailability;
	id _blockToPerformWhenProtectedDataIsAvailable;
	BOOL _deferredNetworkDefaultsRegistration;
	int _accountChangeNotificationToken;
	NSArray* _mailAccounts;
	NSArray* _orderedAccounts;
	NSSet* _selectedAccounts;
	NSSet* _displayedAccounts;
}
@property(retain, nonatomic) UIWindow* window;
@property(assign, nonatomic) int protectedDataAvailability;
@property(retain, nonatomic) NSURL* postponedMessageURL;
@property(retain, nonatomic) NSURL* savedMailtoURL;
@property(copy, nonatomic) id<NSCoding> lastAutosaveIdentifier;
@property(retain, nonatomic) NSArray* mailAccounts;
@property(readonly, assign, nonatomic) NSSet* displayedAccounts;
@property(readonly, assign, nonatomic) NSSet* selectedAccounts;
@property(readonly, assign, nonatomic) NSArray* orderedAccounts;
-(void)_messageLibraryDidFinishReconciliation:(id)_messageLibrary;
-(void)_messageLibraryDidBecomeAvailable:(id)_messageLibrary;
-(void)_messageLibraryWillBecomeUnavailable:(id)_messageLibrary;
-(void)cancelPreviousPerformRequestsWhenProtectedDataIsAvailable;
-(void)performWhenProtectedDataIsAvailable:(id)available;
-(void)_setProtectedDataAvailabilityWithNotification:(id)notification;
-(id)toolbarFixedSpaceItem;
-(id)sidebarQuasiSelectTintColor;
-(id)sidebarTintColor;
-(void)updateTextAndShadowColorsOfToolbarLabel:(id)toolbarLabel inView:(id)view;
-(id)toolbarLabelsTextColorInView:(id)view;
-(id)toolbarsTintColor;
-(BOOL)canRegisterForAPSPush;
-(BOOL)isAllowedToAccessProtectedData;
-(void)networkActivityEnded:(id)ended;
-(void)networkActivityStarted:(id)started;
-(BOOL)canPerformNetworkOperationOnAccount:(id)account;
-(void)autofetchAccount:(id)account mailboxUid:(id)uid;
-(id)focusedMessage;
-(void)focusedMessageDidChange:(id)focusedMessage;
-(BOOL)promptUserForPasswordWithTitle:(id)title message:(id)message account:(id)account completionHandler:(id)handler;
-(void)systemDidWake;
-(void)systemWillSleep;
-(void)_handleDeliveryFailure:(id)failure;
-(void)_userEnteredPassword:(id)password;
-(void)displayError:(id)error forAccount:(id)account mode:(int)mode;
-(void)_displayError:(id)error context:(id)context;
-(void)emptyTrashForAccount:(id)account;
-(id)mailboxPickerController;
-(id)persistentIDForInboxesItem:(id)inboxesItem;
-(BOOL)showingMultipleAccounts;
-(void)_accountsOrderDidChange:(id)_accountsOrder;
-(id)_activeNonLocalAccountsWithMailAccounts:(id)mailAccounts inactiveCount:(unsigned*)count;
-(void)setSelectedSourceType:(unsigned)type;
-(void)setSelectedAccounts:(id)accounts;
-(void)_resetAccounts;
-(id)keyCommands;
-(void)_composeViewDidDismiss:(id)_composeView;
-(void)_dismissComposeViewControllerAnimated:(BOOL)animated afterSending:(BOOL)sending;
-(void)_dismissComposeViewControllerAnimated:(BOOL)animated;
-(void)composeButtonLongPressed:(id)pressed;
-(void)composeButtonClicked:(id)clicked;
-(void)pulledToRefresh:(id)refresh;
-(void)composeShortcutInvoked:(id)invoked;
-(void)updateAutoFetchState:(BOOL)state;
-(id)copySourcesCurrentlyVisible;
-(void)willPerformVisibleStoreFetch:(id)fetch;
-(void)_hideStatusBarProgress;
-(void)setStatusBarShowsMailProgress:(id)progress;
-(void)setStatusBarShowsProgress:(BOOL)progress;
-(void)_networkConfigurationChanged:(id)changed;
-(void)_performBackEndOneShotInitialization;
-(void)dealloc;
-(void)applicationWillTerminate:(id)application;
-(void)applicationDidResumeForEventsOnly;
-(void)applicationWillSuspendForEventsOnly;
-(void)applicationWillEnterForeground:(id)application;
-(BOOL)isForeground;
-(BOOL)isMobileMail;
-(void)didReceiveMemoryWarning;
-(void)_snapshotTaken:(id)taken;
-(void)applicationDidEnterBackground:(id)application;
-(void)applicationWillSuspend;
-(void)cleanUpAfterSuspend;
-(id)nameOfDefaultImageToUpdateAtSuspension;
-(BOOL)is24HourTime;
-(void)_updateTimePreferences;
-(void)_hideSimulatedDefaultPNG;
-(void)_showSimulatedDefaultPNG;
-(void)applicationOpenURL:(id)url useSelectedAccount:(BOOL)account;
-(void)applicationOpenURL:(id)url;
-(BOOL)openURL:(id)url;
-(BOOL)canOpenURL:(id)url;
-(BOOL)_isInternallyHandledURL:(id)url;
-(void)_removeDefaultImages;
-(void)_resetLinesOfText;
-(int)linesOfText;
-(int)linesOfText:(BOOL)text;
-(void)_resetToDefaultState;
-(void)_releaseAllForcedConnections;
-(void)_releaseAllAccountConnections;
-(void)userDefaultsDidChange:(id)userDefaults;
-(void)_updateStateForThreadingChange;
-(void)_resetSelectedAccounts;
-(BOOL)accountURLStringIsObsolete:(id)obsolete;
-(void)scheduleObsoleteAccountDataVacuum;
-(void)markAccountURLStringAsObsolete:(id)obsolete;
-(void)_accountURLDidChange:(id)_accountURL;
-(void)mailComposeDeliveryControllerDidAttemptToSaveDraft:(id)mailComposeDeliveryController account:(id)account result:(unsigned)result;
-(void)mailComposeDeliveryControllerDidAttemptToSend:(id)mailComposeDeliveryController outgoingMessageDelivery:(id)delivery;
-(void)mailComposeDeliveryControllerWillAttemptToSend:(id)mailComposeDeliveryController;
-(void)mailComposeControllerCompositionFinished:(id)finished;
-(void)_saveCompositionAsDraft;
-(void)resumeCompositionOfDraft:(id)draft;
-(void)_composeScrollViewTapped:(id)tapped;
-(void)showComposeWithContext:(id)context animated:(BOOL)animated initialTitle:(id)title completionBlock:(id)block;
-(void)setComposeViewController:(id)controller forModalDisplay:(BOOL)modalDisplay;
-(void)setComposeViewController:(id)controller;
-(BOOL)isShowingCompose;
-(void)_fixMainThreadPriorityIfSingleCoreDeviceAfterDelay:(double)delay;
-(id)defaultAttachmentManager;
-(void)navigationController:(id)controller willShowViewController:(id)controller2 animated:(BOOL)animated;
-(void)significantTimeChange;
-(void)_mailWasSent:(id)sent;
-(void)_deliveryQueueProcessingFinished:(id)finished;
-(void)_unsentCountChanged:(id)changed;
-(void)_updateStatus:(id)status;
-(void)_updateStatus:(id)status forMonitor:(id)monitor;
-(BOOL)application:(id)application didFinishLaunchingSuspendedWithOptions:(id)options;
-(BOOL)application:(id)application didFinishLaunchingWithOptions:(id)options;
-(void)delayedStartupTasks;
-(void)startListeningForNotifications;
-(void)_refetchAfterAccountSetup;
-(void)_dismissAccountSetupControllerAnimated:(BOOL)animated;
-(void)accountSetupControllerDidChange:(id)accountSetupController finished:(BOOL)finished;
-(void)alertViewCancel:(id)cancel;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)_initializeWindowRootViewControllerOnce;
-(void)_presentAccountSetupController;
-(void)_presentAccountRestrictionAlertIfNecessary;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)profileConnection userInfo:(id)info;
-(id)_viewControllerForComposition;
-(id)_visibleViewController;
-(id)popoverManager;
-(BOOL)isMasterViewShownOnTop;
-(id)rootViewController;
-(void)_switchToComposeWithAutosavedMessageWithIdentifier:(id)identifier;
-(void)_dismissAnyModalViewControllerOrPopoverAnimated:(BOOL)animated;
-(void)_selectDefaultMailboxDismissingModalAnimated:(BOOL)animated;
-(void)_selectDefaultMailbox;
-(id)composeAccountIsDefault:(BOOL*)aDefault;
-(unsigned)sourceTypeToSelect;
-(id)accountsToSelect;
-(BOOL)displayingAccountSetup;
-(void)registerServices;
-(void)_dumpDiagnosticInformation:(id)information;
-(id)init;
-(void)didChangeOrientation:(id)orientation;
-(void)reportPPTTimings:(id)timings;
-(void)startShowDismissComposeTest:(id)test;
-(void)_performNextShowDismissComposeTransition;
-(void)startMessageIterationTest:(id)test;
-(void)_messageContentLayerFinished;
-(void)startMessageDeleteTest:(id)test;
-(void)_reallyStartMessageDeleteTest:(id)test;
-(void)startMessageTransferTest:(id)test multiSelect:(BOOL)select;
-(void)_reallyStartMessageTransferTest:(id)test mailboxController:(id)controller;
-(void)_didFinishExitEditModeTest:(id)test;
-(void)startExitEditModeTest:(id)test;
-(void)_reallyStartExitEditModeTest:(id)test;
-(void)_didDismissComposeLandscape:(id)landscape;
-(void)_didDismissCompose:(id)compose;
-(void)startDismissComposeTest:(id)test;
-(void)_prepareForDismissComposeTest:(id)dismissComposeTest;
-(void)_reallyStartDismissComposeTest:(id)test;
-(void)_didShowComposeForFirstTime:(id)firstTime;
-(void)_didShowComposeLandscape:(id)landscape;
-(void)_didShowCompose:(id)compose;
-(void)startShowComposeTest:(id)test;
-(void)_prepareForShowComposeTest:(id)showComposeTest;
-(void)_reallyStartShowComposeTest:(id)test;
-(void)startScrollMessageListTest:(id)test withOptions:(id)options;
-(void)reallyStartScrollMessageListTest:(id)test;
-(void)startScrollMessagesInEditModeTest:(id)editModeTest;
-(void)startScrollMessagesInEditModeWithSelectionTest:(id)selectionTest;
-(void)_reallyStartScrollMessagesInEditModeWithSelectionTest:(id)selectionTest;
-(id)_prepareForScrollMailboxesTest:(id)scrollMailboxesTest;
-(void)_performScrollTestOnMessageList:(id)list withController:(id)controller;
-(id)_prepareForScrollMessagesTest:(id)scrollMessagesTest inEditMode:(BOOL)editMode;
-(void)waitForUIToSettleDown;
-(void)switchToDesiredMailbox;
-(void)switchToInbox;
-(id)getMailboxWithName:(id)name;
-(id)getAccount;
-(id)getMailboxPickerController;
-(id)getMailboxListViewControllerMail;
-(id)getMessageViewController;
-(id)getMailboxContentViewController;
-(id)getControllerOfType:(Class)type;
-(void)failedTest:(id)test;
-(void)finishedTest:(id)test extraResults:(id)results;
-(BOOL)runTest:(id)test options:(id)options;
-(void)runAllTests;
-(BOOL)isTesting;
@end