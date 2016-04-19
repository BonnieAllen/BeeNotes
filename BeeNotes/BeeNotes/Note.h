//
//  Note.h
//  BeeNotes
//
//  Created by King Kittenhead on 4/18/16.
//  Copyright © 2016 Bloc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@interface Note : NSManagedObject

@property (strong, nonatomic) NSDate *timeStamp;
@property (strong, nonatomic) NSString *title;
@property (strong, nonatomic) NSString *text;

@end
