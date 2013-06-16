/* PSAppCellularUsageGroupController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "UsageFeedDelegate.h"

@class NSObject, PSSpecifier, NSDictionary, NSArray, NSNumber, PSExpandableAppListGroupController;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface PSAppCellularUsageGroupController : XXUnknownSuperclass <UsageFeedDelegate> {
	NSArray* _cellularDataSwitches;
	PSSpecifier* _cellDataDocsAndData;
	PSSpecifier* _cellDataFacetime;
	PSSpecifier* _cellDataPassbook;
	PSSpecifier* _cellDataReadingList;
	BOOL _showInternalDetails;
	BOOL _cancelled;
	BOOL _enabled;
	NSNumber* _totalBytesUsed;
	NSNumber* _totalRoamingBytesUsed;
	PSExpandableAppListGroupController* _appGroupController;
	NSObject<OS_dispatch_queue>* _processingQueue;
	NSDictionary* _systemServiceCategoryNames;
}
@property(retain, nonatomic) NSDictionary* systemServiceCategoryNames;
@property(assign, nonatomic, getter=isEnabled) BOOL enabled;
@property(assign, getter=isCancelled) BOOL cancelled;
@property(assign, nonatomic) BOOL showInternalDetails;
@property(retain, nonatomic) NSObject<OS_dispatch_queue>* processingQueue;
@property(retain, nonatomic) PSExpandableAppListGroupController* appGroupController;
@property(retain, nonatomic) NSNumber* totalRoamingBytesUsed;
@property(retain, nonatomic) NSNumber* totalBytesUsed;
-(void)_createAppSpecifiersForVisibleApps:(id)visibleApps hiddenApps:(id)apps unknownApps:(id)apps3 internalProcesses:(id)processes;
-(void)_categorizeApps:(id)apps completion:(id)completion;
-(void)_calculateUsageForSubscriberIdentifier:(id)subscriberIdentifier inWorkspace:(id)workspace;
-(void)_updateTotalBytesUsed:(double)used roamingBytesUsed:(double)used2;
-(id)specifierForSpecialCategory:(id)specialCategory bytesUsed:(id)used;
-(id)nameForSpecialCategory:(id)specialCategory;
-(id)specifierForApp:(id)app enabled:(BOOL)enabled;
-(id)dataUsageForApplicationSpecifier:(id)applicationSpecifier;
-(id)appCellularDataEnabledForSpecifier:(id)specifier;
-(void)setAppCellularDataEnabled:(id)enabled forSpecifier:(id)specifier;
-(void)setSwitchesEnabled:(BOOL)enabled;
-(void)setWorkspaceInformation:(id)information;
-(void)cancel;
-(id)specifiers;
-(void)dealloc;
-(id)initWithListController:(id)listController groupSpecifier:(id)specifier;
@end