//
//  BakeMuttonCommand.m
//  Test_CommandDesign
//
//  Created by 罗富中 on 2017/11/5.
//  Copyright © 2017年 yixia. All rights reserved.
//

#import "BakeMuttonCommand.h"
#import "Baker.h"
@implementation BakeMuttonCommand
-(void)execute{
    [self.receiver bakeMutton];
}
@end
