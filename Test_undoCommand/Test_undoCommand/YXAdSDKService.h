//
//  YXAdSDKService.h
//  YXAdSDK
//
//  Created by 罗富中 on 2017/11/5.
//  Copyright © 2017年 yixia. All rights reserved.
//

#import <Foundation/Foundation.h>
@class YXAdSDKResponse;
@interface YXAdSDKService : NSObject

- (YXAdSDKResponse *)getAd:(NSString *)cid;
- (BOOL)cacheData;
- (void)undo;
@end
