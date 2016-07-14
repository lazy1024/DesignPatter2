//
//  ConsoleController.h
//  DesignPattern
//
//  Created by magnimage on 16/7/14.
//  Copyright © 2016年 Lazy. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ConsoleCommand.h"
#import "ConsoleEmulator.h"

@interface ConsoleController : NSObject
{
    @private
    ConsoleEmulator *_emulator;
}

@property ConsoleEmulator *emulator;

-(void) setCommand:(ConsoleCommand)command;

@end
