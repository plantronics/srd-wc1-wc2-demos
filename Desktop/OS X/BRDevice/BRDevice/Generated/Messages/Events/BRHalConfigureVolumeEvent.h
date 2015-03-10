//
//  BRHalConfigureVolumeEvent.h
//  BRDevice
//
//  Auto-generated from deckard.xml v2.3 on 01/28/15.
//  Copyright (c) 2015 Plantronics. All rights reserved.
//

#import "BREvent.h"


#define BR_HAL_CONFIGURE_VOLUME_EVENT 0x1102



@interface BRHalConfigureVolumeEvent : BREvent

@property(nonatomic,readonly) uint16_t scenario;
@property(nonatomic,readonly) NSData * volumes;


@end
