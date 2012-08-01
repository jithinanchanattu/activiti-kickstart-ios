//
//  Created by Joram Barrez
//  Copyright (c) 2012 Alfresco. All rights reserved.
//

#import <Foundation/Foundation.h>

@class WorkflowTask;


@interface Workflow : NSObject

@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSArray *tasks;

- (void)addTask:(WorkflowTask *)workflowTask;

- (WorkflowTask *)taskAtIndex:(NSUInteger)index;

- (BOOL)isConcurrentTaskAtIndex:(NSUInteger)taskIndex;

- (void)verifyAndFixTaskConcurrency;

- (void)moveTaskFromIndex:(NSUInteger)srcIndex afterTaskAtIndex:(NSUInteger)dstIndex;

@end