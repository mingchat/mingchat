//
//  MCAppDelegate.h
//  MingChat
//
//  Created by Manfred on 14-1-11.
//  Copyright (c) 2014年 Manfred. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MCAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
