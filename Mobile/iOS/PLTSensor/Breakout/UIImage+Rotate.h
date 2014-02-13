//
//  UIImage+Rotate.h
//
//  Created by Genki Kondo on 10/6/12.
//  Copyright (c) 2012 Genki Kondo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface UIImage (Rotate)

- (UIImage *)imageRotatedByRadians:(CGFloat)radians clip:(BOOL)clip;
- (UIImage *)imageRotatedByDegrees:(CGFloat)degrees clip:(BOOL)clip;

@end
