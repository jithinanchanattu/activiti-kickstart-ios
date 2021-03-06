//
//  Created by Joram Barrez
//  Copyright (c) 2012 Alfresco. All rights reserved.
//

#import <Foundation/Foundation.h>


typedef enum {
    CONCURRENCY_TYPE_FIRST,
    CONCURRENCY_TYPE_NORMAL,
    CONCURRENCY_TYPE_LAST
} ConcurrencyType;

@class WorkflowTask;

@interface Workflow : NSObject

@property (nonatomic, strong) NSString *id; // Only filled when it is a
@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSMutableArray *tasks;
@property (nonatomic) BOOL isExistingWorkflow;

- (id)initWithJson:(NSDictionary *)jsonDictionary;

- (void)addTask:(WorkflowTask *)workflowTask;

- (WorkflowTask *)taskAtIndex:(NSUInteger)index;

- (BOOL)isConcurrentTaskAtIndex:(NSUInteger)taskIndex;

- (ConcurrencyType)concurrencyTypeForTaskAtIndex:(NSUInteger)taskIndex;

- (void)verifyAndFixTaskConcurrency;

- (void)moveTaskFromIndex:(NSUInteger)srcIndex afterTaskAtIndex:(NSUInteger)dstIndex;

- (NSMutableDictionary *)toJson;

@end