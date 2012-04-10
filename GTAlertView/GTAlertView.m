//
//  GTAlertView.m
//  GTFrameworkDemo
//
//  Created by Gianluca Tranchedone on 10/04/12.
//  Copyright (c) 2012 SketchToCode. All rights reserved.
//

#import "GTAlertView.h"

@interface GTAlertView () <UIAlertViewDelegate>

@property (nonatomic, strong) NSMutableArray *blocksArray;

@end

#pragma mark - Implementation

@implementation GTAlertView

@synthesize blocksArray = _blocksArray;

- (id)initWithTitle:(NSString *)title message:(NSString *)message cancelButtonTitle:(NSString *)cancelButton cancelBlock:(void (^)(void))cancelBlock
{
    self = [super initWithTitle:title message:message delegate:self cancelButtonTitle:cancelButton otherButtonTitles:nil];
    if (self) {
        self.blocksArray = [NSMutableArray array];
        [self.blocksArray addObject:cancelBlock];
    }
    return self;
}

- (void)addButtonWithTitle:(NSString *)title selectionBlock:(void (^)(void))selectionBlock
{
    [super addButtonWithTitle:title];
    [self.blocksArray addObject:selectionBlock];
}

- (void)alertView:(UIAlertView *)alertView clickedButtonAtIndex:(NSInteger)buttonIndex
{
    void(^block)(void) = [self.blocksArray objectAtIndex:buttonIndex];
    block();
}

@end