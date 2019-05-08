






/**
 功能:
 格式化银行卡号 :3333 3333 3333 3333 222
 只允许输入数字
 自动添加空格
 使用时注意去除空格
 */
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface SDBankCardTF : UITextField

- (BOOL)valueChangeValueString:(NSString *)string shouldChangeCharactersInRange:(NSRange)range;

@end

NS_ASSUME_NONNULL_END
