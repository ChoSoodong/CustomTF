






#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UITextField (PhoneTF)

//首先,给textFeld写一个扩展类,在类中声明一个方法,不用写方法的实现,因为用不到
// 自定义一个方法,每个自定义封装的TF都实现这个方法就可以了
- (BOOL)valueChangeValueString:(NSString *)string shouldChangeCharactersInRange:(NSRange)range;

@end

NS_ASSUME_NONNULL_END
