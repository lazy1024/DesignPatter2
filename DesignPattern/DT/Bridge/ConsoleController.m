//
//  ConsoleController.m
//  DesignPattern
//
//  Created by magnimage on 16/7/14.
//  Copyright © 2016年 Lazy. All rights reserved.
//

#import "ConsoleController.h"

@implementation ConsoleController

@synthesize emulator = _emulator;

-(void) setCommand:(ConsoleCommand)command
{
    [_emulator loadInstructionForCommand:command];
    [_emulator executeInstruction];
}

@end
