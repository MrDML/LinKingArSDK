//
//  LELoading.h
//  LinKingArSDK
//
//  Created by leon on 2020/11/26.
//  Copyright © 2020 dml1630@163.com. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface LELoading : NSObject
+ (instancetype)shared;
- (void)showMaskView;
- (void)hiddenMaskView;
@end

NS_ASSUME_NONNULL_END
