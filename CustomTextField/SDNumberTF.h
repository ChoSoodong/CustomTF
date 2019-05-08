






/**
 功能:
 只允许输入数字
 */
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface SDNumberTF : UITextField

- (BOOL)valueChangeValueString:(NSString *)string shouldChangeCharactersInRange:(NSRange)range;

@end

NS_ASSUME_NONNULL_END
