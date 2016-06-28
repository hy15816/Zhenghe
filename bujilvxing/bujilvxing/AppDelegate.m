//
//  AppDelegate.m
//  bujilvxing
//
//  Created by liuYaLin on 16/6/24.
//  Copyright © 2016年 微创软件. All rights reserved.
//

#import "AppDelegate.h"
#import "XHTabBar.h"


@interface AppDelegate ()

@end

@implementation AppDelegate


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    // Override point for customization after application launch.
    
    self.window = [[UIWindow alloc]initWithFrame:[[UIScreen mainScreen] bounds]];
    self.window.backgroundColor = [UIColor whiteColor];
    

    //控制器数组
    NSArray *controllerArray = @[@"HomepageViewController",@"FindViewController",@"InformationViewController",@"ActivityViewController",@"MineViewController"];
    //title数组
    NSArray * titleArray = @[@"首页",@"发现",@"消息",@"活动",@"我的"];
    //默认图片数组
    NSArray *imageArray= @[@"home_tabbar",@"msg_tabbar",@"friend_tabbar",@"me_tabbar",@"me_tabbar"];
    //选中图片数组
    NSArray *selImageArray = @[@"home_tabbar_sel",@"msg_tabbar_sel",@"friend_tabbar_sel",@"me_tabbar_sel",@"me_tabbar_sel"];
    //tabBar高度
    CGFloat tabBarHeight = 49.0;
    
    //初始化(height:传nil 默认为49.0)
    XHTabBar *tabbar = [[XHTabBar alloc] initWithControllerArray:controllerArray titleArray:titleArray imageArray:imageArray selImageArray:selImageArray height:tabBarHeight];
    
    //设置为根控制器
    self.window.rootViewController = tabbar;
    
    //    //设置数字角标(可选)
    //    [tabbar showBadgeMark:100 index:1];
    //    //设置小红点(可选)
    //    [tabbar showPointMarkIndex:2];
    //不显示角标(可选)
    //[tabbar hideMarkIndex:3];
    
    [self.window makeKeyAndVisible];
    
    return YES;
}

- (void)applicationWillResignActive:(UIApplication *)application {
    // Sent when the application is about to move from active to inactive state. This can occur for certain types of temporary interruptions (such as an incoming phone call or SMS message) or when the user quits the application and it begins the transition to the background state.
    // Use this method to pause ongoing tasks, disable timers, and throttle down OpenGL ES frame rates. Games should use this method to pause the game.
}

- (void)applicationDidEnterBackground:(UIApplication *)application {
    // Use this method to release shared resources, save user data, invalidate timers, and store enough application state information to restore your application to its current state in case it is terminated later.
    // If your application supports background execution, this method is called instead of applicationWillTerminate: when the user quits.
}

- (void)applicationWillEnterForeground:(UIApplication *)application {
    // Called as part of the transition from the background to the inactive state; here you can undo many of the changes made on entering the background.
}

- (void)applicationDidBecomeActive:(UIApplication *)application {
    // Restart any tasks that were paused (or not yet started) while the application was inactive. If the application was previously in the background, optionally refresh the user interface.
}

- (void)applicationWillTerminate:(UIApplication *)application {
    // Called when the application is about to terminate. Save data if appropriate. See also applicationDidEnterBackground:.
}

@end
