//
//  WJSubject.h
//  美食圈圈
//
//  Created by qianfeng on 15/9/22.
//  Copyright (c) 2015年 qianfeng. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NSObject+Model.h"

@interface WJSubject : NSObject
@property (nonatomic,copy) NSString * title;
@property (nonatomic,copy) NSString * cardNumber;
@property (nonatomic,copy) NSString * note;
@property (nonatomic,copy) NSString * icon;

+(id)subjectWithDict:(NSDictionary *)dict;
@end
