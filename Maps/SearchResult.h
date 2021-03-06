/* SearchResult.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "Maps-Structs.h"
#import "MapsSynced.h"
#import "MKAnnotation.h"
#import "NSCopying.h"
#import "MKLocatableObject.h"
#import "SearchResultRepr.h"

@class AddressBookAddress, NSString, NSData, UIImage, NSMapTable, _MKDirections, YelpDeal, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface SearchResult : SearchResultRepr <NSCopying, MKLocatableObject, MKAnnotation, MapsSynced> {
	NSString* _singleLineAddress;
	NSString* _singleLineAddressWithHomeCountry;
	BOOL _hasMergedFormattedAddress;
	NSString* _formattedAddress;
	NSString* _formattedAddressMultiline;
	NSString* _suggestedQuery;
	XXStruct_gLbvpC _coordinate;
	BOOL _originatedFromHistory;
	BOOL _originatedFromTrace;
	AddressBookAddress* _address;
	int _appearance;
	NSString* _businessName;
	unsigned long long _businessID;
	NSMutableDictionary* _infoCardImages;
	UIImage* _parkingImage;
	NSMapTable* _attributionInfoMap;
	double _lastUpdatedETA;
	XXStruct_gLbvpC _lastUpdatedETAOrigin;
	double _lastUpdatedETATime;
	unsigned _lastUpdatedETATransportType;
	_MKDirections* _inProgressETAUpdate;
	BOOL _hasCheckedForDeal;
	BOOL _hasCheckedForPersonalizedReviews;
	YelpDeal* deal;
}
@property(assign, nonatomic) double position;
@property(readonly, assign, nonatomic) NSData* syncData;
@property(copy, nonatomic) NSString* syncIdentifier;
@property(readonly, assign, nonatomic) NSString* subtitle;
@property(readonly, assign, nonatomic) NSString* title;
@property(copy) NSMapTable* attributionInfoMap;
@property(retain, nonatomic) AddressBookAddress* address;
@property(readonly, assign, nonatomic) BOOL needsAttribution;
@property(assign, nonatomic) BOOL hasCheckedForPersonalizedReviews;
@property(retain, nonatomic) YelpDeal* deal;
@property(assign, nonatomic) BOOL hasCheckedForDeal;
@property(readonly, assign, nonatomic) NSString* sharedMapsURL;
@property(readonly, assign, nonatomic) NSString* debugDescription;
@property(readonly, assign, nonatomic) NSString* defaultName;
@property(readonly, assign, nonatomic) NSString* tweetableTitle;
@property(readonly, assign, nonatomic) NSString* disambiguationTitle;
@property(retain, nonatomic) NSString* suggestedQuery;
@property(readonly, assign, nonatomic) NSString* rawLocationTitle;
@property(readonly, assign, nonatomic) NSString* locationTitle;
@property(readonly, assign, nonatomic) NSString* infoCardTitle;
@property(readonly, assign, nonatomic) BOOL isPlaceHolder;
@property(readonly, assign, nonatomic) int localSearchProviderID;
@property(assign, nonatomic) unsigned long long businessID;
@property(retain, nonatomic) NSString* businessName;
@property(assign, nonatomic) int appearance;
@property(readonly, assign, nonatomic) BOOL isDynamicCurrentLocation;
@property(assign, nonatomic) BOOL originatedFromTrace;
@property(assign, nonatomic) BOOL originatedFromHistory;
@property(readonly, assign, nonatomic) BOOL requiresReverseGeocodeForNav;
@property(readonly, assign, nonatomic) BOOL performsReverseGeocodeCheck;
@property(readonly, assign, nonatomic) BOOL needsReverseGeocodeCheck;
@property(assign, nonatomic, getter=isReverseGeocoded) BOOL reverseGeocoded;
@property(assign, nonatomic) XXStruct_gLbvpC coordinate;
+(id)keyPathsForValuesAffectingSingleLineAddressWithHomeCountry;
+(id)keyPathsForValuesAffectingSingleLineAddress;
+(id)keyPathsForValuesAffectingSubtitle;
+(id)keyPathsForValuesAffectingTitle;
+(id)keyPathsForValuesAffectingName;
+(id)keyPathsForValuesAffectingLocationTitle;
+(id)customSearchResultWithCoordinate:(XXStruct_gLbvpC)coordinate;
+(id)currentLocationSearchResult;
-(id)coordinateString;
-(void)purgeParkingImage;
-(void)setParkingImage:(id)image;
-(id)parkingImage;
-(void)purgeImageData;
-(void)addImage:(id)image forRequest:(id)request;
-(id)imageForRequest:(id)request;
-(void)getEstimatedTravelTimeForTransportType:(unsigned)transportType completionHandler:(id)handler;
-(BOOL)isEstimatedTravelTimeValidForOrigin:(XXStruct_gLbvpC)origin transportType:(unsigned)type;
-(BOOL)hasBusinessAttributes;
-(BOOL)looksLikeBusiness;
-(BOOL)isInMapRegion:(id)mapRegion;
-(BOOL)isInMapRect:(XXStruct_Yvvv9D)mapRect;
-(id)singleLineAddressWithHomeCountry;
-(id)singleLineAddress;
-(id)addressDictionary;
-(id)_structuredAddressDictionaryWithHomeCounty:(BOOL)homeCounty;
-(BOOL)_hasStructuredAddress;
-(BOOL)isSubtitleApproximateLocation;
-(id)name;
-(id)_locationTitleNeedsRaw:(BOOL)raw;
-(void)becomeDefaultTypeIfCustomType;
-(BOOL)requiresYelpAttributionForDisplayRequirement:(int)displayRequirement;
-(id)attributionForInfo:(id)info;
-(id)attributionInfoForDisplayRequirement:(int)displayRequirement;
-(void)addAttribution:(id)attribution info:(id)info;
-(void)updateWithRevGeoPlace:(id)revGeoPlace;
-(void)setAddressFromSearchResult:(id)searchResult;
-(void)setCoordinate:(XXStruct_gLbvpC)coordinate preserveLocationInfo:(BOOL)info;
-(void)_syncGEOPlaceWithCoordinate;
-(void)clearLocationInformation;
-(void)dealloc;
-(id)description;
-(id)mapsURL;
-(BOOL)_hasUID;
-(id)_formattedAddressMultiline;
-(id)_formattedAddress;
-(id)_formattedAddressWithSeparator:(id)separator;
-(void)_didUpdateAddress;
-(BOOL)updateFromSyncData:(id)syncData;
-(id)initWithBookmarkRepresentation:(id)bookmarkRepresentation;
-(id)bookmarkRepresentation;
-(BOOL)updateFromBookmarkRepresentation:(id)bookmarkRepresentation needsResync:(BOOL*)resync;
-(id)copyWithZone:(NSZone*)zone;
-(id)copyWithCoordinate:(XXStruct_gLbvpC)coordinate;
-(id)copyWithType:(int)type;
-(id)copyWithType:(int)type name:(id)name zoomLevel:(unsigned)level;
-(void)writeTo:(id)to;
-(BOOL)readFrom:(id)from;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(BOOL)isEqualToSearchResult:(id)searchResult;
-(BOOL)isLocationEqual:(id)equal withinDistance:(double)distance;
-(id)initWithType:(int)type;
-(id)initWithGEOPlaceResult:(id)geoplaceResult withOriginalPlace:(id)originalPlace withSearchType:(int)searchType;
-(id)initWithGEOPlaceResult:(id)geoplaceResult withSearchType:(int)searchType;
-(id)initWithGEOPlace:(id)geoplace;
-(id)initWithMapItem:(id)mapItem;
-(id)initWithSearchResult:(id)searchResult;
-(id)init;
-(void)_commonInit;
-(BOOL)isAddressBookResult;
-(id)initWithSearchResultStrippingName:(id)searchResultStrippingName address:(id)address;
-(id)initWithSearchResult:(id)searchResult address:(id)address;
-(XXStruct_gLbvpC)_offsetCoordinate:(float)coordinate;
-(id)activitySubject;
-(void)applyUserSessionInfoFromSearchRequest:(id)searchRequest;
-(id)siriRepresentation;
-(BOOL)canDropAPin;
-(id)geoMapRegion;
-(id)navAnnouncementName;
-(id)navDisplayName;
-(id)routableAddress;
@end
