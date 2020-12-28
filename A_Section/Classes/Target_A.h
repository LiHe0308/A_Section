//
//  Target_A.h
//  A_Section
//
//  Created by 李贺 on 2020/12/28.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Target_A : NSObject

/// 获取该组件的AViewController 的实例化对象
- (UIViewController *)Action_viewController:(NSDictionary *)params;

@end

NS_ASSUME_NONNULL_END
