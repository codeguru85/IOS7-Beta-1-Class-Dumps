/* RemindersListModel.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "Reminders-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableSet, NSObject, NSMutableIndexSet, EKCalendar, EKCalendarDate, EKEventStore, NSMutableArray;
@protocol OS_dispatch_queue, RemindersListModelDelegate;

__attribute__((visibility("hidden")))
@interface RemindersListModel : XXUnknownSuperclass {
	EKEventStore* _eventStore;
	NSMutableSet* _remindersToSave;
	NSMutableArray* _recentlyCheckedOrUncheckedReminders;
	NSObject<OS_dispatch_queue>* _dataLock;
	NSMutableArray* _reminders;
	BOOL _hasPerformedFirstReload;
	NSMutableIndexSet* _alreadyFaultedIndexes;
	NSMutableIndexSet* _indexesForFaulting;
	NSRange _lastSeenReminderRange;
	unsigned _reloadCount;
	BOOL _isPaused;
	BOOL _needsReloadOnResume;
	BOOL _isPausedByForce;
	NSObject<OS_dispatch_queue>* _reloadCancellationLock;
	BOOL _isReloadInProgress;
	BOOL _isListEmpty;
	BOOL _isListEmptyIsValid;
	EKCalendar* _calendar;
	EKCalendarDate* _dueDate;
	id<RemindersListModelDelegate> _delegate;
}
@property(assign, nonatomic) __weak id<RemindersListModelDelegate> delegate;
@property(retain, nonatomic) EKCalendarDate* dueDate;
@property(retain, nonatomic) EKCalendar* calendar;
-(void).cxx_destruct;
-(id)timeZone;
-(void)moveReminderAtIndex:(int)index toIndex:(int)index2;
-(void)_reorderReminder:(id)reminder betweenEarlier:(id)earlier later:(id)later;
-(void)_adjustOrderOnReminders:(id)reminders reverse:(BOOL)reverse;
-(void)_adjustOrderOnReminders:(id)reminders boundaryOrder:(unsigned)order reverse:(BOOL)reverse;
-(void)resume;
-(void)pause;
-(BOOL)reminderWasSavedAtIndex:(int)index;
-(BOOL)matchesReminder:(id)reminder;
-(BOOL)deleteReminder:(id)reminder;
-(BOOL)protectedCanReminderBeInserted:(id)inserted;
-(void)_protectedInsertReminder:(id)reminder atIndex:(int)index;
-(void)protectedRemoveReminderAtIndex:(int)index;
-(BOOL)saveReminderImmediately:(id)immediately;
-(void)saveUnsavedReminders;
-(void)_scheduleSaveForReminder:(id)reminder;
-(void)setPausedByForce:(BOOL)force;
-(void)_attemptToResumeReloads;
-(void)addReminder:(id)reminder;
-(BOOL)invalidateMaintainedReminders;
-(BOOL)shouldInvalidateReminder:(id)reminder;
-(void)checkOrUncheckReminder:(id)reminder;
-(BOOL)willDisplayRemindersInRange:(NSRange)range;
-(BOOL)_protectedWillDisplayRemindersInRange:(NSRange)_protected;
-(BOOL)_protectedNeedsLoadAheadForRange:(NSRange)range inForwardDirection:(BOOL)forwardDirection;
-(void)_protectedLoadAheadForRange:(NSRange)range reloadNumber:(unsigned)number inForwardDirection:(BOOL)forwardDirection;
-(BOOL)needsReloadForChangedObjectIDs:(id)changedObjectIDs;
-(void)reload;
-(NSRange)_faultStartingChunk:(id)chunk;
-(id)storeProtectedData:(id)data rangeAlreadyFaulted:(NSRange)faulted;
-(id)fetchProtectedData;
-(void)loadRemindersInRange:(NSRange)range reloadNumber:(unsigned)number;
-(void)_fetchPropertiesForReminders:(id)reminders;
-(void)faultReminder:(id)reminder;
-(id)propertiesToFetch;
-(BOOL)hasBeenCanceled:(unsigned)canceled;
-(BOOL)_hasBeenCanceled:(unsigned)canceled;
-(int)indexOfReminder:(id)reminder protected:(BOOL)aProtected;
-(BOOL)canAccessPropertiesOfReminderAtIndex:(int)index;
-(id)reminderAtIndex:(int)index;
-(unsigned)numberOfReminders;
-(id)predicateForCountingReminders;
-(BOOL)isListEmpty;
-(BOOL)hasPerformedFirstReload;
-(BOOL)hasRequestedFirstReload;
-(id)init;
-(id)initWithEventStore:(id)eventStore;
@end