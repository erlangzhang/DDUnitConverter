//
//  DDIlluminationUnitConverter.h
//  DDUnitConverter
//
//  Created by Dave DeLong on 11/26/10.
//  Copyright 2010 Home. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DDUnitConverter.h"

@interface DDUnitConverter (DDIlluminationUnitConverter)

+ (instancetype)illuminationUnitConverter;

@end

typedef NS_ENUM(NSInteger, DDIlluminationUnit) {
    DDIlluminationUnitFootCandles = 0,
	DDIlluminationUnitLumensPerSquareCentimeter,
	DDIlluminationUnitLumensPerSquareFoot,
	DDIlluminationUnitLumensPerSquareMeter,
	DDIlluminationUnitNox,
	DDIlluminationUnitPhots,
	DDIlluminationClearDaySunIllumination
};

@interface DDIlluminationUnitConverter : DDUnitConverter

@end
