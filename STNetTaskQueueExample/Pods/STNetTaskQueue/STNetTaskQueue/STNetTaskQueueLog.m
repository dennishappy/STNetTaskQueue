//
//  STNetTaskQueueLog.m
//  Sth4Me
//
//  Created by Kevin Lin on 6/9/15.
//  Copyright (c) 2014 Sth4Me. All rights reserved.
//

#import "STNetTaskQueueLog.h"

@implementation STNetTaskQueueLog

+ (void)log:(NSString *)content, ...
{
    va_list args;
    va_start(args, content);
    content = [[NSString alloc] initWithFormat:content arguments:args];
    va_end(args);
    NSLog(@"[STNetTaskQueue] %@", content);
}

@end