/* MessageBodyLoader.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MessageBodyLoader.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class MFActivityMonitor, NSMutableSet, NSCountedSet, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@protocol MessageBodyLoader
-(oneway void)resume;
-(oneway void)pause;
-(oneway void)disableNetworkFetching;
-(oneway void)enableNetworkFetching;
-(oneway void)userStoppedViewingMessages;
-(oneway void)userViewingMessages:(id)messages;
-(oneway void)stopAddingNewMessagesForStore:(id)store;
-(oneway void)beginAddingNewMessagesForStore:(id)store;
-(oneway void)addMessages:(id)messages;
-(oneway void)addMessage:(id)message;
-(oneway void)removeSingleMessageClient:(id)client;
-(oneway void)addSingleMessageClient:(id)client;
@end

__attribute__((visibility("hidden")))
@interface MessageBodyLoader : XXUnknownSuperclass <MessageBodyLoader> {
	NSMutableArray* _clients;
	NSMutableArray* _newMessages;
	NSMutableSet* _newMessageSet;
	NSCountedSet* _newMessageMailboxQuota;
	NSMutableArray* _userViewingMessages;
	MFActivityMonitor* _currentMonitor;
	NSCountedSet* _watchedUids;
	NSObject<OS_dispatch_queue>* _dispatchQueue;
	NSObject<OS_dispatch_semaphore>* _waitReply;
	int _noNetworkFetching;
	int _isPaused;
	unsigned _isRunning : 1;
	unsigned _isWaitingForTask : 1;
	unsigned _shouldProcessQueues : 1;
}
@property(readonly, assign) BOOL isPaused;
+(void)applicationWillResume;
+(void)applicationWillSuspend;
+(id)copySummaryForMessage:(id)message downloadIfNecessary:(BOOL)necessary;
+(void)startup;
+(void)_setSharedLoaderForTesting:(id)testing;
+(id)sharedLoader;
-(void)applicationWillResume;
-(void)applicationWillSuspend;
-(oneway void)disableNetworkFetching;
-(oneway void)enableNetworkFetching;
-(oneway void)resume;
-(oneway void)pause;
-(void)_start;
-(BOOL)_isRunning;
-(void)_setIsRunning:(BOOL)running;
-(void)_blockingMessage;
-(void)_waitUntilNotRunning;
-(oneway void)userStoppedViewingMessages;
-(oneway void)userViewingMessages:(id)messages;
-(oneway void)stopAddingNewMessagesForStore:(id)store;
-(oneway void)beginAddingNewMessagesForStore:(id)store;
-(oneway void)addMessages:(id)messages;
-(oneway void)addMessages_nts:(id)nts;
-(oneway void)addMessage:(id)message;
-(void)_nts_removeClient:(id)client;
-(void)_nts_insertClient:(id)client;
-(oneway void)removeSingleMessageClient:(id)client;
-(oneway void)addSingleMessageClient:(id)client;
-(void)_messageFlagsChanged:(id)changed;
-(void)_messagesWillBeCompacted:(id)_messages;
-(void)_removeViewingMessages:(id)messages;
-(void)_removeNewMessages:(id)messages;
-(void)_removeNewMessages_nts:(id)nts;
-(void)_messagesAdded:(id)added;
-(void)_getNextClientOrMessageFinished:(id)finished;
-(void)_messageLoadFinished:(id)finished;
-(void)_clientLoadFinished:(id)finished;
-(void)_finishedCullingMessageList:(id)list;
-(void)_getNextClientOrMessage;
-(void)_tryProcessingQueues;
-(void)_dumpDiagnosticInformation:(id)information;
-(BOOL)networkFetchingAllowed;
-(void)dealloc;
-(oneway void)startup;
-(id)init;
@end