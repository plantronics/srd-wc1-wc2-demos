//
//  BRQueryServicesCalibrationDataSettingResult.h
//  BRDevice
//
//  Auto-generated from deckard.xml v2.3 on 01/28/15.
//  Copyright (c) 2015 Plantronics. All rights reserved.
//

#import "BRSettingResult.h"


#define BR_QUERY_SERVICES_CALIBRATION_DATA_SETTING_RESULT 0xFF01



@interface BRQueryServicesCalibrationDataSettingResult : BRSettingResult

@property(nonatomic,readonly) uint16_t serviceID;
@property(nonatomic,readonly) uint16_t characteristic;
@property(nonatomic,readonly) NSData * calibrationData;


@end
