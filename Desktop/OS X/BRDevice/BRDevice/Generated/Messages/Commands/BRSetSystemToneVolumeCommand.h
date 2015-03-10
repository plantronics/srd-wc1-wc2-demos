//
//  BRSetSystemToneVolumeCommand.h
//  BRDevice
//
//  Auto-generated from deckard.xml v2.3 on 01/28/15.
//  Copyright (c) 2015 Plantronics. All rights reserved.
//

#import "BRCommand.h"


#define BR_SET_SYSTEM_TONE_VOLUME 0x0F28



@interface BRSetSystemToneVolumeCommand : BRCommand

+ (BRSetSystemToneVolumeCommand *)commandWithVolume:(uint8_t)volume;

@property(nonatomic,assign) uint8_t volume;


@end
