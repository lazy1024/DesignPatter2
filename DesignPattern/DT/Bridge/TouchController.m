//
//  TouchController.m
//  DesignPattern
//
//  Created by magnimage on 16/7/14.
//  Copyright © 2016年 Lazy. All rights reserved.
//

#import "TouchController.h"

@implementation TouchController

-(void) up
{
    [super setCommand:kConsoleCommandUp];
}

-(void) down
{
    [super setCommand:kConsoleCommandDown];
}

-(void) left
{
    [super setCommand:kConsoleCommandLeft];
}

-(void) right
{
    [super setCommand:kConsoleCommandRight];
}

-(void) select
{
    [super setCommand:kConsoleCommandSelect];
}

-(void) start
{
    [super setCommand:kConsoleCommandStart];
}

-(void) action1
{
    [super setCommand:kConsoleCommandAction1];
}

-(void) action2
{
    [super setCommand:kConsoleCommandAction2];
}

@end
