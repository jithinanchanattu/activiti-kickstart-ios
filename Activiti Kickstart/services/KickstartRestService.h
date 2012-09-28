//
//  Created by Joram Barrez
//  Copyright (c) 2012 Alfresco. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HttpUtil.h"

@interface KickstartRestService : NSObject

-(void)deployWorkflow:(NSDictionary *)workflowDictionary
  withCompletionBlock:(HttpCompletionBlock)completionBlock
       withFailureBlock:(HttpFailureBlock)failureBlock;

- (void)retrieveWorkflowsWithCompletionBlock:(HttpCompletionBlock)completionBlock
                                 withFailureBlock:(HttpFailureBlock)failureBlock;

- (void)retrieveWorkflowInfo:(NSString *)workflowId completionBlock:(HttpCompletionBlock)completionBlock
            withFailureBlock:(HttpFailureBlock)failureBlock;

- (void)deleteWorkflow:(NSString *)workflowId completionBlock:(HttpCompletionBlock)completionBlock
            withFailureBlock:(HttpFailureBlock)failureBlock;

- (void)uploadWorkflowImage:(NSString *)workflowId
                      image:(NSData *)imageData
        withCompletionBlock:(HttpCompletionBlock)completionBlock
           withFailureBlock:(HttpFailureBlock)failureBlock;

- (void)retrieveWorkflowImage:(NSString *)workflowId
                   withCompletionBlock:(HttpCompletionBlock)completionBlock
                      withFailureBlock:(HttpFailureBlock)failureBlock;

@end