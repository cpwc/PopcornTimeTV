//
//  SQSubSetting.h
//  Squire
//
//  Created by Fernando Torcelly Garcia on 17/2/16.
//  Copyright © 2016 Fernando Torcelly. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, SQSubSettingBackground) {
    SQSubSettingBackgroundBlack = 0,
    SQSubSettingBackgroundWhite = 1,
    SQSubSettingBackgroundBlur  = 2,
    SQSubSettingBackgroundNone  = 3
};

@interface SQSubSetting : NSObject

@property (nonatomic, assign) float sizeFloat;
@property (nonatomic, strong) UIColor  *textColor;
@property (nonatomic, strong) NSString *fontName;
@property (nonatomic, assign) SQSubSettingBackground backgroundType;

+ (id) loadFromDisk;
- (void) writeToDisk;
- (NSDictionary *) attributes;

@end
