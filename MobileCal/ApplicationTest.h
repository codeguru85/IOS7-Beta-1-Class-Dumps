/* ApplicationTest.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class CalendarModel, NSDictionary, Application;

__attribute__((visibility("hidden")))
@interface ApplicationTest : XXUnknownSuperclass {
	Application* _application;
	NSDictionary* _options;
	CalendarModel* _model;
}
@property(retain, nonatomic) CalendarModel* model;
@property(retain, nonatomic) NSDictionary* options;
@property(retain, nonatomic) Application* application;
+(id)testName;
-(void).cxx_destruct;
-(id)extractInitialDateOption;
-(void)runTest;
-(id)initWithApplication:(id)application model:(id)model options:(id)options;
@end
