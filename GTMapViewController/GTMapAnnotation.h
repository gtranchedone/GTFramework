//
//  GTMapAnnotation.h
//  MoneyClip
//
//  Created by Gianluca Tranchedone on 26/06/12.
//  Copyright (c) 2012 Gianluca Tranchedone. All rights reserved.
//

#import <CoreLocation/CoreLocation.h>
#import <Foundation/Foundation.h>
#import <MapKit/MapKit.h>

@interface GTMapAnnotation : NSObject <MKAnnotation>

@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (nonatomic, readonly) CLLocationCoordinate2D coordinate;

@property (nonatomic, strong) CLPlacemark *placemark;

- (id)initWithTitle:(NSString *)title subtitle:(NSString *)subtitle coordinate:(CLLocationCoordinate2D)coordinate;
- (id)initWithPlacemark:(CLPlacemark *)placemark;

@end