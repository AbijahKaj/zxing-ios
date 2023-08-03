//
//  Header.h
//  
//
//  Created by Dmitry on 11/16/22.
//

#ifndef ZXIMetadata_h
#define ZXIMetadata_h

@interface ZXIMetadata : NSObject
@property(nonatomic, strong) NSNumber * rows;
@property(nonatomic, strong) NSNumber * columns;
@property(nonatomic, strong) NSNumber * ecl;

- (instancetype)initWithRow:(NSNumber *)rows
               columns:(NSNumber *) columns
               ecl:(NSNumber *)ecl;
@end
#endif /* Header_h */
