//
//  OutputLanguageWriterJava.h
//  JSONModeler
//
//  Created by Jon Rexeisen on 1/19/12.
//  Copyright (c) 2012 Nerdery Interactive Labs. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ClassPropertiesObject.h"
#import "OutputLanguageWriterProtocol.h"

static NSString *const kJavaWritingOptionBaseClassName = @"kJavaWritingOptionBaseClassName";
static NSString *const kJavaWritingOptionPackageName = @"kJavaWritingOptionPackageName";


@interface OutputLanguageWriterJava : NSObject <OutputLanguageWriterProtocol>

- (NSString *)setterMethodForProperty:(ClassPropertiesObject *)  property;

@end
