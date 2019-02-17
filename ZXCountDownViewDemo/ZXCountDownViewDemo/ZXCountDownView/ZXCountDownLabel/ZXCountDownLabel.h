//
//  ZXCountDownLabel.h
//  ZXCountDownViewDemo
//
//  Created by 李兆祥 on 2019/2/15.
//  Copyright © 2019 李兆祥. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
typedef NSString *(^textFormatBlock) (long remainSec);
@interface ZXCountDownLabel : UILabel
///是否不存储倒计时进度，默认为否
@property(nonatomic,assign)BOOL disableScheduleStore;
///设置倒计时时间，倒计时标志，并回调block，ZXCountDown依据mark来分别存储不同倒计时任务剩余的倒计时时间
-(void)setCountDown:(long)countDownSec mark:(NSString *)mark resTextFormat:(textFormatBlock)textFormat;
///开始倒计时
-(void)startCountDown;
///重新开始倒计时
-(void)reStartCountDown;
///结束倒计时
-(void)stopCountDown;
///关闭倒计时
-(void)invalidateTimer;
@end

NS_ASSUME_NONNULL_END