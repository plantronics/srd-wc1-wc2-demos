//
//  BRSetOneByteEvent.h
//  BRDevice
//
//  Auto-generated from deckard.xml v2.3 on 01/28/15.
//  Copyright (c) 2015 Plantronics. All rights reserved.
//

#import "BREvent.h"


#define BR_SET_ONE_BYTE_EVENT 0x0051



@interface BRSetOneByteEvent : BREvent

@property(nonatomic,readonly) uint8_t value;


@end
