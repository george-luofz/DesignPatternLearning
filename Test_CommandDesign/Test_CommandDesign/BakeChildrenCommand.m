//
//  BakeChildrenCommand.m
//  Test_CommandDesign
//
//  Created by 罗富中 on 2017/11/5.
//  Copyright © 2017年 yixia. All rights reserved.
//

#import "BakeChildrenCommand.h"
#import "Baker.h"
@implementation BakeChildrenCommand
- (void)execute{
    [self.receiver bakeChildren];
}
@end
