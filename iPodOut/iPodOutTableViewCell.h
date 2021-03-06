/* iPodOutTableViewCell.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, iPodOutLabel;

__attribute__((visibility("hidden")))
@interface iPodOutTableViewCell : XXUnknownSuperclass {
	BOOL imageShouldFillHeight;
	float leftPadding;
	float rightPadding;
	int accessoryViewStyle;
	iPodOutLabel* iconLabel;
	float iconWidth;
	iPodOutLabel* textLabel2;
	iPodOutLabel* detailTextLabel2;
	long long identifier;
}
@property(retain, nonatomic) iPodOutLabel* detailTextLabel2;
@property(retain, nonatomic) iPodOutLabel* textLabel2;
@property(retain, nonatomic) iPodOutLabel* iconLabel;
@property(assign, nonatomic) long long identifier;
@property(retain, nonatomic) NSString* icon;
@property(assign, nonatomic) BOOL imageShouldFillHeight;
@property(assign, nonatomic) int accessoryViewStyle;
@property(assign, nonatomic) float iconWidth;
@property(assign, nonatomic) float rightPadding;
@property(assign, nonatomic) float leftPadding;
-(void).cxx_destruct;
-(void)setImageViewHighlightedImage:(id)image;
-(void)setImageViewImage:(id)image;
-(void)setTextLabelText:(id)text;
-(id)detailTextLabel;
-(id)textLabel;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end
