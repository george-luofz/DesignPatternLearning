//
//  Waiter.m
//  Test_CommandDesign
//
//  Created by 罗富中 on 2017/11/5.
//  Copyright © 2017年 yixia. All rights reserved.
//

#import "Waiter.h"
#import "BaseCommand.h"
@implementation Waiter

- (void)notify{
    [self.command execute];
}
@end
