/* MFSearchTextParsedToken.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "MobileMail-Structs.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface MFSearchTextParsedToken : XXUnknownSuperclass {
	unsigned _alternativeTypes;
	CFDictionaryRef _alternatives;
	NSString* _phrase;
	MFSearchTextParsedToken* _parent;
	NSArray* _children;
	NSRange _range;
}
@property(readonly, assign, nonatomic) NSArray* children;
@property(assign, nonatomic) MFSearchTextParsedToken* parent;
@property(copy, nonatomic) NSString* phrase;
@property(assign, nonatomic) NSRange range;
-(void)addAlternatives:(id)alternatives;
-(id)alternativesForType:(unsigned)type;
-(unsigned)countOfAlternativesForType:(unsigned)type;
-(unsigned)alternativeTypes;
-(id)firstLeafNode;
-(id)description;
-(void)dealloc;
-(id)initWithPhrase:(id)phrase range:(NSRange)range;
-(id)initWithPhrase:(id)phrase range:(NSRange)range children:(id)children;
@end
