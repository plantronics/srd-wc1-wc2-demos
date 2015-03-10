//
//  BRSetVocalystPhoneNumberCommand.m
//  BRDevice
//
//  Auto-generated from deckard.xml v2.3 on 01/28/15.
//  Copyright (c) 2015 Plantronics. All rights reserved.
//

#import "BRSetVocalystPhoneNumberCommand.h"
#import "BRMessage_Private.h"


@implementation BRSetVocalystPhoneNumberCommand

#pragma mark - Public

+ (BRSetVocalystPhoneNumberCommand *)commandWithVocalystPhoneNumber:(NSString *)vocalystPhoneNumber
{
	BRSetVocalystPhoneNumberCommand *instance = [[BRSetVocalystPhoneNumberCommand alloc] init];
	instance.vocalystPhoneNumber = vocalystPhoneNumber;
	return instance;
}

@dynamic deckardID;
- (uint16_t)deckardID
{
	return BR_SET_VOCALYST_PHONE_NUMBER;
}

#pragma mark BRMessage

- (NSArray *)payloadDescriptors
{
	// auto-generated to hold name, order and type information for payload items
	return @[
			@{@"name": @"vocalystPhoneNumber", @"type": @(BRPayloadItemTypeString)}
			 ];
}

#pragma mark - NSObject

- (NSString *)description
{
    return [NSString stringWithFormat:@"<BRSetVocalystPhoneNumberCommand %p> vocalystPhoneNumber=%@",
            self, self.vocalystPhoneNumber];
}

@end
