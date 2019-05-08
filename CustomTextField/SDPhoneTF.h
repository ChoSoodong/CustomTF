






/**
 
 格式化手机号 :133 1111 2222
 自动添加空格
 只允许输入数字
 使用时注意去除空格
 */
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface SDPhoneTF : UITextField

//注意一下,格式化用了之后传值的时候要把空格去除掉

- (BOOL)valueChangeValueString:(NSString *)string shouldChangeCharactersInRange:(NSRange)range;

@end

NS_ASSUME_NONNULL_END
