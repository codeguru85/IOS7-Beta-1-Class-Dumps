/* SearchByNameTest.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "UINavigationControllerDelegate.h"
#import "ABMembersControllerSearchCompletionDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, NSMutableDictionary, ABPeoplePickerNavigationController;

__attribute__((visibility("hidden")))
@interface SearchByNameTest : XXUnknownSuperclass <UINavigationControllerDelegate, ABMembersControllerSearchCompletionDelegate> {
	BOOL _animate;
	ABPeoplePickerNavigationController* _peoplePicker;
	NSMutableDictionary* _extraResults;
	NSArray* _allDatabaseDirectories;
	unsigned _currentDirectoryIndex;
	int _testState;
	NSArray* _allSearchQueries;
	unsigned _currentQueryIndex;
	double _lastSearchBeginTime;
}
@property(assign, nonatomic) double lastSearchBeginTime;
@property(assign, nonatomic) unsigned currentQueryIndex;
@property(retain, nonatomic) NSArray* allSearchQueries;
@property(assign, nonatomic) BOOL animate;
@property(assign, nonatomic) int testState;
@property(assign, nonatomic) unsigned currentDirectoryIndex;
@property(retain, nonatomic) NSArray* allDatabaseDirectories;
@property(retain, nonatomic) NSMutableDictionary* extraResults;
@property(retain, nonatomic) ABPeoplePickerNavigationController* peoplePicker;
-(void).cxx_destruct;
-(void)startSearchQuery;
-(void)didShowViewController:(id)controller;
-(void)loadNextDatabase;
-(void)navigationController:(id)controller didShowViewController:(id)controller2 animated:(BOOL)animated;
-(void)membersControllerDidCompleteSearch:(id)membersController;
-(BOOL)startTestWithOptions:(id)options peoplePicker:(id)picker;
@end