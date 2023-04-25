//
//  HYWaveView.h
//  YQWaveButtonDEMO
//
//  Created by oceanMAC on 2023/4/25.
//  Copyright © 2023 FreakyYang. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface HYWaveView : UIView

- (void)showAnimation:(CGPoint)touchePoint;
@property(nonatomic,assign) BOOL isComplete;

- (void)removeAnimation;

- (void)hideWaveView;

- (void)touchUpInsideCompletionHandle:(void(^)(BOOL isUpInside))completed;

@end

NS_ASSUME_NONNULL_END
