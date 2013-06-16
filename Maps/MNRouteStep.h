/* MNRouteStep.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MKAnnotation.h"
#import "Maps-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, GEOStep, MKDate, MKPolygon, NSString;

__attribute__((visibility("hidden")))
@interface MNRouteStep : XXUnknownSuperclass <MKAnnotation> {
	int _mode;
	int _type;
	XXStruct_gLbvpC _coordinate;
	unsigned _startPointIndex;
	unsigned _endPointIndex;
	NSString* _instructions;
	NSString* _direction;
	NSString* _departureAddress;
	NSString* _arrivalAddress;
	unsigned _distanceMeters;
	BOOL _displaysDistanceInMetric;
	BOOL _displaysYardsForShortDistances;
	int _departureIntervalSeconds;
	int _durationSeconds;
	MKDate* _departureDate;
	MKDate* _arrivalDate;
	NSArray* _notices;
	XXStruct_Yvvv9D _boundingMapRect;
	unsigned _stepIndex;
	MKPolygon* _boundingPolygon;
	GEOStep* _GEOStep;
}
@property(readonly, assign, nonatomic) NSString* subtitle;
@property(readonly, assign, nonatomic) NSString* title;
@property(readonly, assign, nonatomic) BOOL shouldSkipInListView;
@property(readonly, assign, nonatomic) GEOStep* GEOStep;
@property(retain, nonatomic) MKPolygon* boundingPolygon;
@property(assign, nonatomic) unsigned stepIndex;
@property(assign, nonatomic) XXStruct_Yvvv9D boundingMapRect;
@property(retain, nonatomic) NSArray* notices;
@property(retain, nonatomic) MKDate* arrivalDate;
@property(retain, nonatomic) MKDate* departureDate;
@property(assign, nonatomic) BOOL displaysYardsForShortDistances;
@property(assign, nonatomic) BOOL displaysDistanceInMetric;
@property(readonly, assign, nonatomic) int durationSeconds;
@property(readonly, assign, nonatomic) int departureIntervalSeconds;
@property(readonly, assign, nonatomic) NSString* distance;
@property(readonly, assign, nonatomic) NSString* accessibilityDistance;
@property(readonly, assign, nonatomic) unsigned distanceMeters;
@property(readonly, assign, nonatomic) NSString* tripDescription;
@property(retain, nonatomic) NSString* arrivalAddress;
@property(retain, nonatomic) NSString* departureAddress;
@property(retain, nonatomic) NSString* direction;
@property(readonly, assign, nonatomic) NSString* shortInstructions;
@property(readonly, assign, nonatomic) NSString* instructions;
@property(readonly, assign, nonatomic) unsigned numberOfPoints;
@property(readonly, assign, nonatomic) unsigned endPointIndex;
@property(readonly, assign, nonatomic) unsigned startPointIndex;
@property(readonly, assign, nonatomic) XXStruct_gLbvpC coordinate;
@property(readonly, assign, nonatomic) int mode;
@property(readonly, assign, nonatomic) int type;
-(id)_transitDistance;
-(id)_transitDuration;
-(id)_transitDepartureInterval;
-(id)description;
-(void)dealloc;
-(id)_initWithStep:(id)step route:(id)route distanceMeters:(unsigned)meters displaysMetric:(BOOL)metric displaysYardsForShortDistances:(BOOL)shortDistances type:(int)type coordinate:(XXStruct_gLbvpC)coordinate startPointIndex:(unsigned)index endPointIndex:(unsigned)index9;
-(id)_initWithType:(int)type mode:(int)mode coordinate:(XXStruct_gLbvpC)coordinate startPointIndex:(unsigned)index endPointIndex:(unsigned)index5 instructions:(id)instructions distanceMeters:(unsigned)meters displaysMetric:(BOOL)metric displaysYardsForShortDistances:(BOOL)shortDistances;
@end