//
//  BaseCommand.h
//  Test_CommandDesign
//
//  Created by 罗富中 on 2017/11/5.
//  Copyright © 2017年 yixia. All rights reserved.
//

#import <Foundation/Foundation.h>
@class Baker;
@interface BaseCommand : NSObject
@property(nonatomic,nullable,strong)    Baker       *receiver;
- (void)execute;
@end
