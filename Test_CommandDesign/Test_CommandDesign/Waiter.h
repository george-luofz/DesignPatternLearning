//
//  Waiter.h
//  Test_CommandDesign
//
//  Created by 罗富中 on 2017/11/5.
//  Copyright © 2017年 yixia. All rights reserved.
//

#import <Foundation/Foundation.h>
@class BaseCommand;
@interface Waiter : NSObject
@property(nonatomic,nullable,strong)        BaseCommand         *command;

- (void)notify;
@end
