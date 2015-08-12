
#import "ThemeProtocol.h"

@interface Theme : NSObject <ThemeProtocol>

#pragma mark - EXAMPLE SECTION 2

- (UIColor *)ultra;
- (UIColor *)special;

#pragma mark - EXAMPLE SECTION

- (UIColor *)main;
- (UIColor *)divider;
- (UIColor *)text;
- (UIColor *)navigation_bar_keyline;



@end
