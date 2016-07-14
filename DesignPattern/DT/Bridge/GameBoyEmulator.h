//
//  GameBoyEmulator.h
//  DesignPattern
//
//  Created by magnimage on 16/7/14.
//  Copyright © 2016年 Lazy. All rights reserved.
//

#import "ConsoleEmulator.h"

@interface GameBoyEmulator : ConsoleEmulator

-(void) loadInstructionForCommand:(ConsoleCommand)command;
-(void) executeInstruction;

@end
