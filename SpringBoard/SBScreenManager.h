/* SBScreenManager.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMapTable, NSHashTable;

__attribute__((visibility("hidden")))
@interface SBScreenManager : XXUnknownSuperclass {
	NSHashTable* _handlers;
	NSMapTable* _screenIDToHandlerMap;
	NSMapTable* _screenIDToObserversMap;
	NSMapTable* _screenIDToSuppressionReasonsMap;
	NSMapTable* _screenIDToMainWindowMap;
	NSMapTable* _screenIDToScreenMap;
	NSHashTable* _connectedScreenIDs;
}
+(id)sharedInstance;
-(void)setMainWindow:(id)window forScreen:(id)screen;
-(void)addConnectionHandler:(id)handler;
-(BOOL)isScreenSuppressed:(id)suppressed;
-(BOOL)isScreenConnected:(id)connected;
-(id)mainWindowForScreen:(id)screen;
-(id)screenWithID:(unsigned)anId;
-(void)removeSuppressionReason:(id)reason forScreen:(id)screen;
-(void)addSuppressionReason:(id)reason forScreen:(id)screen;
-(void)removeScreenObserver:(id)observer forScreen:(id)screen;
-(void)addScreenObserver:(id)observer forScreen:(id)screen;
-(void)_screenDidDisconnect:(id)_screen;
-(void)_screenDidConnect:(id)_screen;
-(void)_updateHandlerForConnectionToScreen:(id)screen;
-(void)dealloc;
-(id)init;
@end
