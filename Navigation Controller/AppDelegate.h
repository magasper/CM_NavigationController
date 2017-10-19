//
//  AppDelegate.h
//  Navigation Controller
//
//  Created by pegasus on 18/10/17.
//  Copyright © 2017 Pegasus Control. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

