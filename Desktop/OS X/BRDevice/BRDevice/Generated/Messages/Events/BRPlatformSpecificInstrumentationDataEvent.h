//
//  BRPlatformSpecificInstrumentationDataEvent.h
//  BRDevice
//
//  Auto-generated from deckard.xml v2.3 on 01/28/15.
//  Copyright (c) 2015 Plantronics. All rights reserved.
//

#import "BREvent.h"


#define BR_PLATFORM_SPECIFIC_INSTRUMENTATION_DATA_EVENT 0x0803



@interface BRPlatformSpecificInstrumentationDataEvent : BREvent

@property(nonatomic,readonly) NSData * data;


@end
