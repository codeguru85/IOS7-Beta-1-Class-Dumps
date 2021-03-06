/* TabDocument.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MobileSafari-Structs.h"
#import "WebUIBrowserLoadingControllerDelegate.h"
#import "StoreBannerDelegate.h"
#import "NavigationBarDelegate.h"
#import "WBSFluidProgressStateSource.h"
#import "WBSFluidProgressControllerWindowDelegate.h"
#import "ReaderControllerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, WBSAutomaticReadingListItem, UIImage, CALayer, UIColor, NSTimer, NSDictionary, SecurityInfo, UIWebPDFViewHandler, WebUIBrowserLoadingController, WebDownload, WebBookmark, NSURLRequest, WBSFluidProgressState, WBSFluidProgressController, TiltedTabItem, NSMutableArray, NSCountedSet, TabBarItem, PageLoadTestStatistics, NavigationBar, FluidProgressView, UIWebBrowserView, QuickLookDocument, ReaderOffscreenPageLoader, QuickLookDocumentController, NSURL, ReaderContext, StoreBanner, NSMutableSet;
@protocol TabDocumentDelegate;

__attribute__((visibility("hidden")))
@interface TabDocument : XXUnknownSuperclass <ReaderControllerDelegate, WebUIBrowserLoadingControllerDelegate, StoreBannerDelegate, NavigationBarDelegate, WBSFluidProgressStateSource, WBSFluidProgressControllerWindowDelegate> {
	int _retainCount;
	id<TabDocumentDelegate> _delegate;
	NSString* _uuid;
	UIWebBrowserView* _browserView;
	QuickLookDocumentController* _quickLookDocumentController;
	BOOL _quickLookDocumentCheckCompleted;
	UIWebPDFViewHandler* _pdfViewHandler;
	float _zoomScale;
	CALayer* _holdingLayer;
	TabBarItem* _tabBarItem;
	WebUIBrowserLoadingController* _loadingController;
	NSURL* _responseURL;
	int _downloadingFileType;
	WebDownload* _fileDownload;
	NSString* _fileDownloadPath;
	QuickLookDocument* _quickLookDocument;
	NSString* _startURLString;
	NSURLRequest* _failedRequest;
	BOOL _reloadAfterResume;
	BOOL _reloadingFailedRequest;
	NSString* _EVOrganizationName;
	NSURL* _originatingURL;
	NSURL* _tabReuseURL;
	CGPoint _scrollPoint;
	BOOL _omittedFromTabExposeButtonCount;
	BOOL _isBlankDocument;
	BOOL _isPopup;
	BOOL _suspended;
	BOOL _hibernated;
	BOOL _allowURLAsTitle;
	BOOL _loadWasUserDriven;
	BOOL _watchingProgressForStall;
	NSTimer* _progressStalledTimer;
	BOOL _progressStalled;
	BOOL _progressCanStall;
	BOOL _waitingForImportantSubresources;
	WBSFluidProgressState* _fluidProgressState;
	WBSFluidProgressController* _fluidProgressController;
	long long _downloadBytesExpected;
	unsigned _downloadBytesLoaded;
	int _resourcesCurrentlyLoadingCount;
	NSCountedSet* _subresourceHostsCurrentlyLoading;
	NSMutableSet* _knownResponsiveSubresourceHosts;
	BOOL _isActive;
	BOOL _isPagePaused;
	BOOL _isClosed;
	BOOL _frozenForNavigationGesture;
	UIColor* _bodyBackgroundColor;
	double _lastViewedTime;
	NSMutableArray* _alerts;
	NSDictionary* _backForwardListDictionary;
	void* _internal;
	BOOL _showingSecurityWarningPage;
	BOOL _loadingSecurityWarningPage;
	SecurityInfo* _provisionalSecurityInfo;
	ReaderContext* _readerContext;
	UIWebBrowserView* _readerView;
	BOOL _hasDoneReaderAvailabilityDetection;
	NSTimer* _readerAvailabilityDetectionTimer;
	BOOL _keepReadingListBookmarkIDForNextCommit;
	BOOL _userHasManipulatedVisibleRegion;
	BOOL _wasOpenedFromLink;
	BOOL _wasOpenedFromHistory;
	unsigned _downloadBackgroundTaskIdentifier;
	unsigned _resourceLoadBackgroundTaskIdentifier;
	double _pageLoadStartTime;
	double _firstVisualLayoutTime;
	double _pageLoadStopTime;
	PageLoadTestStatistics* _pageLoadStatistics;
	double _lastLoadCommittedTime;
	BOOL _loadWasStartedByUserClick;
	BOOL _goingBackAfterQuickStop;
	BOOL _clearVisitedLinkStyleAfterQuickStop;
	BOOL _showingReader;
	BOOL _shouldRestoreReader;
	int _readerViewTopScrollOffset;
	ReaderOffscreenPageLoader* _offscreenLoader;
	int _externalAppRedirectState;
	NSDictionary* _initialArticleScrollDictionaryForCloudTab;
	unsigned _progressAnimationSuppressedCount;
	FluidProgressView* _progressView;
	NavigationBar* _navigationBar;
	BOOL _usesMinimalTiling;
	BOOL siteCustomIconPrecomposed;
	BOOL showingErrorPage;
	BOOL _suppressingProgressAnimationForNavigationGesture;
	BOOL _wantsReaderWhenActivated;
	BOOL _usesPrivateBrowsingStyle;
	StoreBanner* _storeBanner;
	UIImage* siteCustomIcon;
	TiltedTabItem* _tiltedTabItem;
	WebBookmark* _bookmark;
	unsigned _lastRenderTreeSize;
	WBSAutomaticReadingListItem* _automaticReadingListItem;
}
@property(readonly, assign, nonatomic) NavigationBar* navigationBar;
@property(retain, nonatomic) WBSAutomaticReadingListItem* automaticReadingListItem;
@property(readonly, assign, nonatomic) WBSFluidProgressState* progressState;
@property(retain, nonatomic) PageLoadTestStatistics* pageLoadStatistics;
@property(assign, nonatomic) unsigned lastRenderTreeSize;
@property(assign, nonatomic) BOOL usesPrivateBrowsingStyle;
@property(assign, nonatomic) BOOL wantsReaderWhenActivated;
@property(assign, nonatomic) BOOL suppressingProgressAnimationForNavigationGesture;
@property(retain, nonatomic) WebBookmark* bookmark;
@property(readonly, assign, nonatomic) TiltedTabItem* tiltedTabItem;
@property(readonly, assign, nonatomic) ReaderOffscreenPageLoader* offscreenLoader;
@property(assign, nonatomic) BOOL showingErrorPage;
@property(assign, nonatomic) BOOL siteCustomIconPrecomposed;
@property(retain, nonatomic) UIImage* siteCustomIcon;
@property(assign, nonatomic) int externalAppRedirectState;
@property(retain, nonatomic) StoreBanner* storeBanner;
@property(assign, nonatomic) BOOL usesMinimalTiling;
@property(assign, nonatomic) int readerViewTopScrollOffset;
@property(assign, nonatomic) BOOL shouldRestoreReader;
@property(readonly, assign, nonatomic) UIWebBrowserView* readerView;
@property(assign, nonatomic, getter=isShowingReader) BOOL showingReader;
@property(assign, nonatomic, getter=isOmittedFromTabExposeButtonCount) BOOL omittedFromTabExposeButtonCount;
@property(retain, nonatomic) QuickLookDocumentController* quickLookDocumentController;
@property(copy) NSURL* originatingURL;
@property(assign, nonatomic) BOOL wasOpenedFromLink;
@property(readonly, assign, nonatomic) CALayer* holdingLayer;
@property(retain, nonatomic) QuickLookDocument* quickLookDocument;
@property(retain, nonatomic) NSString* fileDownloadPath;
@property(retain, nonatomic) WebDownload* fileDownload;
-(id).cxx_construct;
-(void)navigationBarCloudTabsButtonWasTapped:(id)tapped;
-(void)navigationBarActionButtonWasTapped:(id)tapped;
-(void)navigationBarAddTabWasTapped:(id)tapped;
-(void)navigationBarCancelButtonWasTapped:(id)tapped;
-(void)navigationBarCatalogButtonWasTapped:(id)tapped;
-(void)navigationBarReaderButtonWasTapped:(id)tapped;
-(void)navigationBarBackdropDidApplySettings:(id)navigationBarBackdrop;
-(void)navigationBarURLWasTapped:(id)tapped;
-(void)compressedNavigationBarWasTapped:(id)tapped;
-(void)navigationBarForwardButtonWasLongPressed:(id)pressed;
-(void)navigationBarBackButtonWasLongPressed:(id)pressed;
-(void)navigationBarStop:(id)stop;
-(void)navigationBarReload:(id)reload;
-(void)navigationBarGoForward:(id)forward;
-(void)navigationBarGoBack:(id)back;
-(void)shouldPinStoreBanner:(BOOL)banner;
-(void)dismissStoreBanner;
-(BOOL)supportsFindOnPage;
-(void)setClosed:(BOOL)closed;
-(BOOL)isClosed;
-(void)setUserHasManipulatedVisibleRegion:(BOOL)region;
-(void)setLastViewedTime:(double)time;
-(double)lastViewedTime;
-(void)finishSimulatedClick;
-(void)beginSimulatedClickForURL:(id)url;
-(BOOL)isSimulatingClick;
-(void)download:(id)download didFailWithError:(id)error;
-(void)downloadDidFinish:(id)download;
-(void)_showProfileInstallAlert;
-(void)download:(id)download didReceiveResponse:(id)response;
-(void)download:(id)download didReceiveDataOfLength:(unsigned)length;
-(void)download:(id)download decideDestinationWithSuggestedFilename:(id)suggestedFilename;
-(void)downloadDidBegin:(id)download;
-(void)_clearFileDownloadState;
-(BOOL)isImportantDocument;
-(void)endResourceLoadBackgroundTask;
-(void)beginResourceLoadBackgroundTask;
-(void)endDownloadBackgroundTask;
-(void)beginDownloadBackgroundTask:(id)task;
-(void)clearSearchEngineScriptObjects:(id)objects;
-(void)injectDoNotTrackDOMPropertyIntoWindowObject:(id)object forFrame:(id)frame;
-(void)webView:(id)view didClearWindowObject:(id)object forFrame:(id)frame;
-(BOOL)webView:(id)view shouldChangeSelectedDOMRange:(id)range toDOMRange:(id)domrange affinity:(int)affinity stillSelecting:(BOOL)selecting;
-(void)webView:(id)view unableToImplementPolicyWithError:(id)error frame:(id)frame;
-(void)webView:(id)view decidePolicyForMIMEType:(id)mimetype request:(id)request frame:(id)frame decisionListener:(id)listener;
-(void)_showGenericDownloadAlert;
-(void)webView:(id)view decidePolicyForNewWindowAction:(id)newWindowAction request:(id)request newFrameName:(id)name decisionListener:(id)listener;
-(void)webView:(id)view decidePolicyForNavigationAction:(id)navigationAction request:(id)request frame:(id)frame decisionListener:(id)listener;
-(id)resultOfLoadingURL:(id)loadingURL;
-(id)resultOfLoadingRequest:(id)loadingRequest inFrame:(id)frame;
-(void)_decidePolicyForAction:(id)action request:(id)request frame:(id)frame newFrameName:(id)name decisionListener:(id)listener;
-(id)_readingListArchiveNextPageLinkForRequest:(id)request webFrame:(id)frame;
-(void)_redirectToExternalNavigationResult:(id)externalNavigationResult fromOriginalURL:(id)originalURL;
-(BOOL)_shouldPromptUserForExternalNavigationResult:(id)externalNavigationResult;
-(void)_queueAlertForRedirectToExternalNavigationResult:(id)externalNavigationResult fromOriginalURL:(id)originalURL;
-(void)_addInvalidURLAlert;
-(void)_addNoFeedAppSupportAlert;
-(BOOL)_shouldAskAboutInsecureFormSubmissionForAction:(id)action andURL:(id)url;
-(void)_didRedirectToAnotherApp:(id)anotherApp userCancelled:(BOOL)cancelled;
-(void)_ignorePolicyListener:(id)listener;
-(void)webView:(id)view resource:(id)resource didCancelAuthenticationChallenge:(id)challenge fromDataSource:(id)dataSource;
-(void)webView:(id)view resource:(id)resource didReceiveAuthenticationChallenge:(id)challenge fromDataSource:(id)dataSource;
-(BOOL)webView:(id)view resource:(id)resource canAuthenticateAgainstProtectionSpace:(id)space forDataSource:(id)dataSource;
-(id)webThreadWebView:(id)view resource:(id)resource willSendRequest:(id)request redirectResponse:(id)response fromDataSource:(id)dataSource;
-(id)webThreadWebView:(id)view identifierForInitialRequest:(id)initialRequest fromDataSource:(id)dataSource;
-(void)webThreadWebView:(id)view resource:(id)resource didFailLoadingWithError:(id)error fromDataSource:(id)dataSource;
-(void)webThreadWebView:(id)view resource:(id)resource didFinishLoadingFromDataSource:(id)dataSource;
-(void)_decrementCurrentlyLoadingResourceCount;
-(void)_incrementCurrentlyLoadingResourceCount;
-(void)webView:(id)view didLayout:(unsigned)layout;
-(void)webView:(id)view didHandleOnloadEventsForFrame:(id)frame;
-(void)webView:(id)view didChangeLocationWithinPageForFrame:(id)frame;
-(void)webView:(id)view didFailLoadWithError:(id)error forFrame:(id)frame;
-(void)webView:(id)view didFinishLoadForFrame:(id)frame;
-(double)lastPageLoadTime;
-(double)lastPageVisualLayoutTime;
-(void)_notifyPageLoadDidFinishIfNecessary;
-(void)webView:(id)view didFirstVisuallyNonEmptyLayoutInFrame:(id)frame;
-(void)webThreadWebViewDidLayout:(id)webThreadWebView;
-(void)showStoreBannerIfNecessary;
-(void)_watchProgressForStall;
-(void)_progressDidStall;
-(void)_webThreadUpdateProgressCanStall;
-(void)_resetProgressStalled;
-(void)_cancelProgressStalledTimer;
-(BOOL)progressStalled;
-(void)webView:(id)view didCommitLoadForFrame:(id)frame;
-(void)webView:(id)view didFailProvisionalLoadWithError:(id)error forFrame:(id)frame;
-(id)_webClip;
-(void)restoreStateFromHistoryItem:(id)historyItem forWebView:(id)webView;
-(void)saveStateToHistoryItem:(id)historyItem forWebView:(id)webView;
-(void)updateViewHierarchyForDocumentViewNewLoad:(id)documentViewNewLoad;
-(void)updateViewHierarchyForDocumentViewLoadComplete:(id)documentViewLoadComplete;
-(void)updateViewHierarchyForFirstNonEmptyLayoutInFrame:(id)frame;
-(void)webViewDidDrawDocument;
-(void)webView:(id)view didReceiveServerRedirectForProvisionalLoadForFrame:(id)frame;
-(void)webView:(id)view didStartProvisionalLoadForFrame:(id)frame;
-(id)EVOrganizationName;
-(void)browserLoadingControllerDidUpdateSecurity:(id)browserLoadingController;
-(BOOL)isSecure;
-(id)forwardListControllerWithLimit:(int)limit;
-(id)backListControllerWithLimit:(int)limit;
-(void)browserLoadingControllerDidUpdateBackForward:(id)browserLoadingController;
-(BOOL)canGoForward;
-(BOOL)canGoBack;
-(unsigned)readingListBookmarkID;
-(BOOL)shouldActivateReaderWhenAvailable;
-(BOOL)currentPageLoadedFromReadingList;
-(BOOL)loadWasUserDriven;
-(BOOL)clearNavigationSnapshots;
-(BOOL)clearLowPriorityNavigationSnapshots;
-(BOOL)_clearNavigationSnapshotAtHistoryItem:(id)historyItem;
-(void)clearBackForwardList;
-(void)clearBackForwardListKeepingCurrentItem;
-(void)clearBackForwardCache;
-(void)destroyAllPlugIns;
-(BOOL)pluginsAreRunning;
-(void)didDrawTiles;
-(void)browserLoadingControllerWillStartUserDrivenLoad:(id)browserLoadingController;
-(void)reload;
-(void)goForward;
-(void)goBack;
-(void)stopLoading;
-(void)loadCloudTab:(id)tab;
-(void)loadAutomaticReadingListItem:(id)item;
-(void)loadUserTypedAddress:(id)address;
-(void)loadURL:(id)url fromBookmark:(id)bookmark;
-(void)clearPageLoadStatistics;
-(void)loadTestURL:(id)url forPageLoad:(id)pageLoad withCallback:(id)callback;
-(void)loadURL:(id)url userDriven:(BOOL)driven;
-(void)loadWebClip:(id)clip userDriven:(BOOL)driven;
-(void)loadRequest:(id)request userDriven:(BOOL)driven;
-(BOOL)browserLoadingControllerShouldEvaluateUserEnteredJavaScript:(id)browserLoadingController;
-(void)browserLoadingController:(id)controller failedToStartLoadingRequest:(id)startLoadingRequest error:(id)error;
-(void)browserLoadingController:(id)controller willLoadRequest:(id)request userDriven:(BOOL)driven;
-(BOOL)browserLoadingControllerShouldShowProvisionalURLs:(id)browserLoadingController;
-(id)titleForNewBookmark;
-(id)title;
-(BOOL)hasQuickLookContent;
-(BOOL)isPDFDocument;
-(BOOL)isLoading;
-(void)setLoading;
-(void)browserLoadingController:(id)controller didFinishLoadingWithError:(id)error dataSource:(id)source;
-(void)browserLoadingControllerDidStartLoading:(id)browserLoadingController;
-(void)browserLoadingControllerDidUpdateLoadingState:(id)browserLoadingController;
-(id)UUID;
-(void)setUUID:(id)uuid;
-(void)browserLoadingControllerDidUpdateURL:(id)browserLoadingController;
-(void)clearTabReuseURL;
-(void)setTabReuseURL:(id)url;
-(id)tabReuseURL;
-(id)URLForSharing;
-(id)URL;
-(void)_setResponseURL:(id)url;
-(id)browserLoadingController:(id)controller userVisibleStringForURL:(id)url;
-(id)_customUserVisibleStringForURL:(id)url;
-(void)browserLoadingControllerDidUpdateURLString:(id)browserLoadingController;
-(id)URLString;
-(void)setScrollPoint:(CGPoint)point;
-(CGPoint)scrollPoint;
-(void)fluidProgressRocketAnimationDidComplete;
-(id)currentFluidProgressStateSource;
-(void)endSuppressingProgressAnimation;
-(void)beginSuppressingProgressAnimation;
-(BOOL)hasFailedURL;
-(id)expectedOrCurrentURL;
-(void)clearFluidProgressState;
-(BOOL)createFluidProgressState;
-(void)didCommitLoadLoadingSingleResource:(BOOL)resource;
-(void)startRocketEffect;
-(void)cancelFluidProgress;
-(void)finishFluidProgress;
-(void)updateFluidProgress;
-(void)startFluidProgress;
-(void)animateProgressForCompletedDocument;
-(void)_progressChanged:(id)changed;
-(void)browserLoadingControllerDidUpdateEstimatedProgress:(id)browserLoadingController;
-(double)estimatedProgress;
-(void)_setBackgroundColor:(CGColorRef)color;
-(void)updateBodyBackgroundColor;
-(id)bodyBackgroundColor;
-(BOOL)isPopup;
-(void)setPopup:(BOOL)popup;
-(void)willClose;
-(void)_closeTabDocumentAnimated:(BOOL)animated;
-(void)setActive:(BOOL)active;
-(void)becameActive;
-(void)setDelegate:(id)delegate;
-(id)tabBarItem;
-(id)frontView;
-(void)setZoomScale:(float)scale;
-(float)zoomScale;
-(id)pdfHandler;
-(id)pdfView;
-(id)browserView;
-(id)browserViewMainDataSource;
-(void)_setNeedsNewTabSnapshot;
-(void)setNeedsNewTabSnapshot;
-(void)resetTilesSynchronously;
-(void)unfreezeAfterNavigationGesture:(BOOL)gesture;
-(void)freezeForNavigationGesture;
-(BOOL)isBlankDocument;
-(void)setBlankDocument:(BOOL)document;
-(void)_updateTilingArea;
-(id)navigationSnapshotForPosition:(int)position;
-(void)_resetSnapshotForHistoryItem:(id)historyItem;
-(BOOL)mustShowBarsForHistoryPosition:(int)historyPosition;
-(void)setNavigationSnapshot:(id)snapshot forPosition:(int)position;
-(id)_historyItemForNavigationSnapshotPosition:(int)navigationSnapshotPosition;
-(void)_saveBackForwardListToDictionary;
-(void)restoreBackForwardListFromDictionary;
-(void)_restoreTransientReadingListDataToWebHistoryItem:(id)webHistoryItem;
-(void)goToHistoryItem:(id)historyItem;
-(void)goToCurrentHistoryItem;
-(id)backForwardListDictionary;
-(void)setBackForwardListDictionary:(id)dictionary;
-(void)removeNonVisibleTiles;
-(void)setPagePaused:(BOOL)paused withEvents:(BOOL)events;
-(void)resume;
-(void)suspendForEventsOnly:(BOOL)eventsOnly;
-(BOOL)isHibernated;
-(void)unhibernate;
-(void)hibernate;
-(id)initWithTitle:(id)title URL:(id)url UUID:(id)uuid hibernated:(BOOL)hibernated bookmark:(id)bookmark;
-(void)browserLoadingControllerDidUpdateTitle:(id)browserLoadingController;
-(void)_updateNavigationBar;
-(void)_updateTabTitle;
-(id)tabBarTitle;
-(id)rawTitle;
-(id)_titleIncludeLoading:(BOOL)loading allowURLStringFallback:(BOOL)fallback;
-(id)_titleIncludeLoading:(BOOL)loading allowURLStringFallback:(BOOL)fallback allowUntitled:(BOOL)untitled;
-(void)dealloc;
-(void)_prepareWebViewRelease;
-(void)_createDocumentView;
-(void)setPrivateBrowsingEnabled:(BOOL)enabled;
-(void)updateInternalPreferences;
-(void)_updateTextSize;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(unsigned)retainCount;
-(oneway void)release;
-(id)retain;
-(id)init;
-(void)reloadAfterError;
-(void)clearFailedRequest;
-(void)handlePolicyError:(id)error forFrame:(id)frame;
-(void)addDisallowedUseOfJavaScriptAlert;
-(void)handleFrameLoadError:(id)error forDataSource:(id)dataSource;
-(id)_titleForError:(id)error;
-(void)_setFailedRequest:(id)request;
-(void)_reachabilityChanged:(id)changed;
-(void)showErrorPageWithTitle:(id)title bodyText:(id)text forError:(id)error;
-(void)addAlertWithTitle:(id)title bodyText:(id)text;
-(void)addFormAlertWithTitle:(id)title listener:(id)listener;
-(id)alert;
-(void)performAction:(int)action forAlert:(id)alert;
-(void)_continueWithoutCredentialsUsingAlertContext:(id)context;
-(void)_continueAfterCertificateAlertWithContext:(id)context;
-(void)_loadRequest:(id)request inFrame:(id)frame;
-(void)addAlert:(id)alert;
-(id)_genericMessageForError:(id)error dataSource:(id)source;
-(id)_specializedMessageForError:(id)error dataSource:(id)source;
-(id)_failingURLFromError:(id)error andDataSource:(id)source;
-(void)_fraudulentWebsiteCheckCompletedForURL:(id)url withAssessment:(int)assessment fromProvider:(int)provider;
-(void)checkForFraudulentWebsitesWithURL:(id)url;
-(void)cancelCheckForFraudulentWebsites;
-(void)_warnAboutUnsafeSiteWithSecurityInfo:(id)securityInfo;
-(void)setUpSecurityWarningPageController;
-(void)securityWarningPageClosePageButtonPressed;
-(void)securityWarningPageBackButtonPressed;
-(void)securityWarningPageIgnoreWarningButtonPressed;
-(void)securityWarningPageLoaded;
-(void)updateSecurityWarningPageWithSecurityInfo:(id)securityInfo;
-(void)hideSecurityWarningPage;
-(void)setLoadingSecurityWarningPage:(BOOL)page;
-(BOOL)loadingSecurityWarningPage;
-(BOOL)showingSecurityWarningPage;
-(void)showSecurityWarningPageWithSecurityInfo:(id)securityInfo;
-(void)commitProvisionalSecurityInfo;
-(void)setProvisionalSecurityInfo:(id)info;
-(id)provisionalSecurityInfo;
-(void)setUpSecurityWarningPage;
-(id)securityWarningPagePath;
-(void)_continueLoadingSite;
-(BOOL)safeBrowsingObserverIsValid;
-(void)invalidateSafeBrowsingObserver;
-(void)initializeSafeBrowsingObserver;
-(void)clearReaderOffscreenPageLoader;
-(void)initReaderOffscreenPageLoaderWithURL:(id)url;
-(void)clearReaderScrollInformation;
-(id)readerPageArchiveURL;
-(void)didClickLinkInReaderWithRequest:(id)request;
-(void)didChangeNextPageLoadingState:(BOOL)state;
-(void)didInitReaderJSController:(ReaderJSController*)controller;
-(void)didDeactivateReaderWithMode:(int)mode;
-(void)didActivateReader;
-(void)willActivateReader;
-(BOOL)networkIsReachable;
-(int)readerOperationMode;
-(BOOL)isShowingReadingListArchive;
-(BOOL)shouldShowReaderOnActivate;
-(id)readerContext;
-(void)detectReaderAvailabilityWithDelay:(double)delay;
-(BOOL)isReaderAvailable;
-(BOOL)hasDoneReaderDetection;
-(void)clearReaderContext;
-(void)createBrowserReaderViewIfNeeded;
-(void)_detectReaderAvailabilityNow;
-(void)_detectReaderAvailabilityOnWebThread;
-(void)_didDetectReaderAvailability:(BOOL)availability;
-(void)_cancelReaderAvailabilityDetectionTimer;
@end
