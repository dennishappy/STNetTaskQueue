//
//  STNetTaskChain.h
//  STNetTaskQueue
//
//  Created by Kevin Lin on 29/11/14.
//  Copyright (c) 2014 Sth4Me. All rights reserved.
//

#import <Foundation/Foundation.h>

@class STNetTaskQueue;
@class STNetTask;
@class STNetTaskChain;

DEPRECATED_MSG_ATTRIBUTE("Use STNetTaskGroup instead")
@protocol STNetTaskChainDelegate <NSObject>

- (void)netTaskChainDidEnd:(STNetTaskChain *)netTaskChain;

@end

DEPRECATED_MSG_ATTRIBUTE("Use STNetTaskGroup instead")
@interface STNetTaskChain : NSObject

@property (nonatomic, weak) id<STNetTaskChainDelegate> delegate;
@property (nonatomic, strong) STNetTaskQueue *queue;
@property (nonatomic, strong, readonly) NSError *error;
@property (nonatomic, assign, readonly) BOOL started;

- (void)setTasks:(STNetTask *)task, ...;
// Return NO indicates this task should not be sent.
- (BOOL)onNextRequest:(STNetTask *)task;
- (void)onNextResponse:(STNetTask *)task;
- (void)start;
- (void)cancel;

@end
