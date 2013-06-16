/* VOTExternalAccessoryManager.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "EAAccessoryAccessibilityDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class VOTElementManager;

__attribute__((visibility("hidden")))
@interface VOTExternalAccessoryManager : XXUnknownSuperclass <EAAccessoryAccessibilityDelegate> {
	VOTElementManager* _elementManager;
	int _context;
}
+(id)accessoryManager;
-(id)accessibilityAccessory:(id)accessory currentValueForSystemProperty:(int)systemProperty;
-(void)accessibilityAccessory:(id)accessory setValue:(id)value forSystemProperty:(int)systemProperty;
-(void)updateSpeakingRate;
-(void)updateVolume:(float)volume;
-(void)updateCurrentItemProperties:(id)properties;
-(id)accessories;
-(id)accessibilityAccessory:(id)accessory currentValueForItemProperty:(int)itemProperty;
-(id)accessoryTraitsFromElement:(id)element;
-(void)accessibilityAccessory:(id)accessory setContext:(int)context;
-(void)accessibilityAccessory:(id)accessory performAction:(int)action withObject:(id)object;
-(void)_handleTextOperation:(int)operation;
-(void)_handleSpeakString:(id)string;
-(void)_handleInputText:(id)text;
-(void)stopListening;
-(void)startListening;
-(void)accessoryDidDisconnect:(id)accessory;
-(void)_accessoryConnected:(id)connected;
-(void)setElementManager:(id)manager;
-(void)dealloc;
-(id)init;
@end