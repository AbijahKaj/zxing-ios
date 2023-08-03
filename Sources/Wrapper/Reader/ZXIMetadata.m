//
//  ZXIMetadata.m
//  
//
//  Created by Dmitry on 11/16/22.
//

#import <Foundation/Foundation.h>
#import "ZXIMetadata.h"
@implementation ZXIMetadata
- (instancetype)initWithRow:(NSNumber *)rows columns:(NSNumber *)columns ecl:(NSNumber *)ecl {
    self = [super init];
    self.rows = rows;
    self.columns = columns;
    self.ecl = ecl;
    return self;
}
@end
