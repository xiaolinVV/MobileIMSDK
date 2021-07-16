//  ----------------------------------------------------------------------
//  Copyright (C) 2021  即时通讯网(52im.net) & Jack Jiang.
//  The MobileIMSDK_UDP (MobileIMSDK v6.x UDP版) Project.
//  All rights reserved.
//
//  > Github地址: https://github.com/JackJiang2011/MobileIMSDK
//  > 文档地址:    http://www.52im.net/forum-89-1.html
//  > 技术社区：   http://www.52im.net/
//  > 技术交流群： 215477170 (http://www.52im.net/topic-qqgroup.html)
//  > 作者公众号： “即时通讯技术圈】”，欢迎关注！
//  > 联系作者：   http://www.52im.net/thread-2792-1-1.html
//
//  "即时通讯网(52im.net) - 即时通讯开发者社区!" 推荐开源工程。
//  ----------------------------------------------------------------------

#import <Foundation/Foundation.h>
#import "CompletionDefine.h"

@interface KeepAliveDaemon : NSObject

+ (KeepAliveDaemon *)sharedInstance;
+ (void) setKEEP_ALIVE_INTERVAL:(int)keepAliveTimeWithMils;
+ (int) getKEEP_ALIVE_INTERVAL;
+ (void) setNETWORK_CONNECTION_TIME_OUT:(int)networkConnectionTimeout;
+ (int) getNETWORK_CONNECTION_TIME_OUT;

- (void) stop;
- (void) start:(BOOL)immediately;
- (BOOL) isKeepAliveRunning;
- (void) updateGetKeepAliveResponseFromServerTimstamp;
- (void) setNetworkConnectionLostObserver:(ObserverCompletion)networkConnLostObserver;
- (void) setDebugObserver:(ObserverCompletion)debugObserver;

@end
