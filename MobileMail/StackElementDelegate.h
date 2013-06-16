/* StackElementDelegate.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MobileMail-Structs.h"


@protocol StackElementDelegate
-(double)stackElement:(id)element delayForAnimation:(int)animation;
-(void)stackElement:(id)element targetStateDidChangeFrom:(int)targetState to:(int)to;
-(void)stackElement:(id)element currentStateDidChangeFrom:(int)currentState to:(int)to;
-(void)stackElement:(id)element willRemoveView:(id)view;
-(Class)stackElementOuterViewClass;
-(id)viewForStackElement:(id)stackElement hasShadow:(BOOL*)shadow;
-(BOOL)stackIsTerminating;
-(CGSize)stackCenterOffset;
-(id)stackContainerView;
@end