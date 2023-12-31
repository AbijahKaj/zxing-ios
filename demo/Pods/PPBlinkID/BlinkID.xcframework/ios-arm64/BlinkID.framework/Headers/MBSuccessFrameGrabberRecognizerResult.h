//
//  MBSuccessFrameGrabberRecognizerResult.h
//  MicroblinkDev
//
//  Created by Jura Skrlec on 22/12/2017.
//

#import <Foundation/Foundation.h>
#import "MBMicroblinkDefines.h"
#import "MBRecognizerResult.h"

@class MBImage;

NS_ASSUME_NONNULL_BEGIN

/**
 * A recognizer that returns SuccessFrameGrabber result.
 */
MB_CLASS_AVAILABLE_IOS(13.0)

@interface MBSuccessFrameGrabberRecognizerResult : MBRecognizerResult<NSCopying>

MB_INIT_UNAVAILABLE

/**
 * Success frame MBImage of successful frame
 */
@property (nonatomic, strong, readonly) MBImage *successFrame;

@end

NS_ASSUME_NONNULL_END
