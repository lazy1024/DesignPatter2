//
//  ConsoleEmulator.h
//  DesignPattern
//
//  Created by magnimage on 16/7/14.
//  Copyright © 2016年 Lazy. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ConsoleCommand.h"

@interface ConsoleEmulator : NSObject

-(void) loadInstructionForCommand:(ConsoleCommand)command;
-(void) executeInstruction;

@end

