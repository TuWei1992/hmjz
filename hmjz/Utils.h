//
//  Util.h
//  hmjz
//  工具类
//  Created by yons on 14-10-23.
//  Copyright (c) 2014年 yons. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Utils : NSObject

+ (NSString *)getHostname;

+ (NSString *)getImageHostname;

+ (BOOL) isBlankString:(NSString *)string;
@end
