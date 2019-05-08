






/**
 功能:
 格式化金额 :133.99
 只允许输入数字和小数点
 只允许输入到小数点后两位
 使用时注意去除空格
 */
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface SDMoneyTF : UITextField

- (BOOL)valueChangeValueString:(NSString *)string shouldChangeCharactersInRange:(NSRange)range;
@end

NS_ASSUME_NONNULL_END
