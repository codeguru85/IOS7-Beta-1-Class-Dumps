/* SBIconIndexNode.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol SBIconIndexNode <NSObject>
-(id)nodeDescriptionWithPrefix:(id)prefix;
-(void)removeNodeObserver:(id)observer;
-(void)addNodeObserver:(id)observer;
-(id)nodesAlongIndexPath:(id)path consumedIndexes:(unsigned)indexes;
-(id)indexPathsForContainedNodeIdentifier:(id)containedNodeIdentifier prefixPath:(id)path;
-(id)containedNodeIdentifiers;
-(BOOL)containsNodeIdentifier:(id)identifier;
-(id)nodeIdentifier;
@end
