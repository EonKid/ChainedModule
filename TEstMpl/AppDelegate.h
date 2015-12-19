//
//  AppDelegate.h
//  TEstMpl
//
//  Created by Aseem 1 on 19/12/15.
//  Copyright (c) 2015 codeBrew. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>{
    UIWindow *window;
    UINavigationController *navigationController;
}


@property (strong, nonatomic) UIWindow *window;
@property (nonatomic, retain) UINavigationController *navigationController;


@end

