//
//  YXAdSDKTimeoutService.h
//  YXAdSDK
//
//  Created by 罗富中 on 2017/11/2.
//  Copyright © 2017年 yixia. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface YXAdSDKTimeoutService : NSObject
@property(nonatomic,assign)         BOOL        isTimeOut;
- (void)start;
- (void)stop;
- (void)pause;
- (void)setTimeOutHandler:(void(^)())handler;
@end
