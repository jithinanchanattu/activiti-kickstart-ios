//
//  Created by Joram Barrez
//  Copyright (c) 2012 Alfresco. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Workflow.h"

@class FormEntry;


@interface WorkflowTask : NSObject

@property(nonatomic, strong) NSString *name;
@property(nonatomic, strong) NSString *description;
@property BOOL isConcurrent;
@property ConcurrencyType concurrencyType;
@property NSMutableArray *formEntries;

- (void)addFormEntry:(FormEntry *)formEntry;

- (FormEntry *)formEntryAt:(NSInteger)index;

@end