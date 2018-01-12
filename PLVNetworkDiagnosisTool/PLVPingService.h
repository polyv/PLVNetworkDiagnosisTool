//
//  PLVPingService.h
//  Demo
//
//  Created by Bq Lin on 2018/1/12.
//  Copyright © 2018年 POLYV. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PLVPingService : NSObject

/// 域名
@property (nonatomic, copy, readonly) NSString *hostName;

/// ip
@property (nonatomic, copy, readonly) NSString *hostIp;

/// ping 次数
@property (nonatomic, assign) NSInteger maxPingCount;

@property (nonatomic, copy) void (^pingCompletion)(PLVPingService *pingService, NSString *result);

- (void)pingWithHost:(NSString *)host;

@end
