//
//  GTUtilityFunctions.h
//  GTFoundation
//
//  Created by Gianluca Tranchedone on 14/08/13.
//  The MIT License (MIT)
//
//  Copyright (c) 2013 Gianluca Tranchedone
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy of
//  this software and associated documentation files (the "Software"), to deal in
//  the Software without restriction, including without limitation the rights to
//  use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
//  the Software, and to permit persons to whom the Software is furnished to do so,
//  subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in all
//  copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
//  FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
//  COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
//  IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
//  CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//

#import <Foundation/Foundation.h>

#if TARGET_OS_IPHONE
#import <UIKit/UIKit.h>
#else
#import <AppKit/AppKit.h>
#endif

/*
 For debug use only. If you want this macros and methods to be available in prerelease builds
 go to [Your Project] -> Build Settings -> Preprocessor Macros and add the macro DEBUG = 1 to your prerelease/ad-hoc configuration.
 A simpler way to do this is creating an Ad-Hoc configuration by copying the preconfigured Debug configuration instead of the release one.
 */
#ifdef DEBUG
#define GT_TODO_WITH_TITLE_AND_MESSAGE(title, message) GTShowAlertViewWithTitleAndMessage(title, message);
#define GT_TODO_WITH_MESSAGE(message) GT_TODO_WITH_TITLE_AND_MESSAGE(@"TODO", message)
#define GT_TODO_WITH_TITLE(title) GT_TODO_WITH_TITLE_AND_MESSAGE(title, nil)
#define GT_TODO GT_TODO_WITH_TITLE_AND_MESSAGE(@"TODO", nil)

FOUNDATION_EXTERN void GTShowAlertViewWithTitleAndMessage(NSString *title, NSString *message);
#endif

FOUNDATION_EXTERN CGFloat GTRadiansFromDegrees(CGFloat degrees);
FOUNDATION_EXTERN NSString *GTCurrencySymbolFromCurrencyCode(NSString *currencyCode);
