//
//  Created by Joram Barrez
//  Copyright (c) 2012 Alfresco. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol WorkflowCreationDelegate;
@class Workflow;


@interface WorkflowStepsTableDelegate : NSObject <UITableViewDelegate, UITableViewDataSource>

    @property (nonatomic, weak) id<WorkflowCreationDelegate> workflowCreationDelegate;
    @property (nonatomic, strong) Workflow *workflow;

@end