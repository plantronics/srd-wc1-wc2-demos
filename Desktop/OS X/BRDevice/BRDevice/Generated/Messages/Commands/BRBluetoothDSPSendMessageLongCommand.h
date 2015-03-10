//
//  BRBluetoothDSPSendMessageLongCommand.h
//  BRDevice
//
//  Auto-generated from deckard.xml v2.3 on 01/28/15.
//  Copyright (c) 2015 Plantronics. All rights reserved.
//

#import "BRCommand.h"


#define BR_BLUETOOTH_DSP_SEND_MESSAGE_LONG 0x0F32



@interface BRBluetoothDSPSendMessageLongCommand : BRCommand

+ (BRBluetoothDSPSendMessageLongCommand *)commandWithMessageid:(int16_t)messageid parameter:(NSData *)parameter;

@property(nonatomic,assign) int16_t messageid;
@property(nonatomic,strong) NSData * parameter;


@end
