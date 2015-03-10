//
//  BRBluetoothConnectDisconnectCommand.h
//  BRDevice
//
//  Auto-generated from deckard.xml v2.3 on 01/28/15.
//  Copyright (c) 2015 Plantronics. All rights reserved.
//

#import "BRCommand.h"


#define BR_BLUETOOTH_CONNECT_DISCONNECT 0x0A46



@interface BRBluetoothConnectDisconnectCommand : BRCommand

+ (BRBluetoothConnectDisconnectCommand *)commandWithConnectionOffset:(uint16_t)connectionOffset disconnect:(BOOL)disconnect;

@property(nonatomic,assign) uint16_t connectionOffset;
@property(nonatomic,assign) BOOL disconnect;


@end
