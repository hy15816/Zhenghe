#ifndef _Defines_h_
#define _Defines_h_

//
// 屏幕尺寸
//
#define DEVICE_BOUNDS [UIScreen mainScreen].bounds

#define DEVICE_WIDTH [UIScreen mainScreen].bounds.size.width

#define DEVICE_HEIGHT [UIScreen mainScreen].bounds.size.height

//确认按钮 圆角值
#define BTNCORNERRADIU  2


// 判断IPHONE类型
// iPhone4
#define iPhone4 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 960), [[UIScreen mainScreen] currentMode].size) : NO)
#define iPhone5 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 1136), [[UIScreen mainScreen] currentMode].size) : NO)
#define iPhone6 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(750, 1334), [[UIScreen mainScreen] currentMode].size) : NO)
#define iPhone6P ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1242, 2208), [[UIScreen mainScreen] currentMode].size) : NO)


#define IS_IPHONE_4 ([[UIScreen mainScreen] bounds].size.height <= 480)
#define ShortSystemVersion  [[UIDevice currentDevice].systemVersion floatValue]


// 判别系统版本
#define IS_IOS_6 (ShortSystemVersion < 7)
#define IS_IOS_7 (ShortSystemVersion >= 7 && ShortSystemVersion < 8)
#define IS_IOS_8 (ShortSystemVersion >= 8)

// 判别设备类型
#define IS_PORTRAIT UIDeviceOrientationIsPortrait([UIDevice currentDevice].orientation) || UIDeviceOrientationIsPortrait(self.interfaceOrientation)
#define IS_IPAD (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)
#define IS_IPHONE (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)


#define radians(degrees)  (degrees)*M_PI/180.0f


//
// 相对于父窗口的对齐方式
//
#define ALIGN_VIEW_LEFT(PARENT, VIEW) [PARENT addConstraint:[NSLayoutConstraint constraintWithItem:VIEW attribute: NSLayoutAttributeLeft relatedBy:NSLayoutRelationEqual toItem:PARENT attribute:NSLayoutAttributeLeft multiplier:1.0f constant:0.0f]]
#define ALIGN_VIEW_RIGHT(PARENT, VIEW) [PARENT addConstraint:[NSLayoutConstraint constraintWithItem:VIEW attribute: NSLayoutAttributeRight relatedBy:NSLayoutRelationEqual toItem:PARENT attribute:NSLayoutAttributeRight multiplier:1.0f constant:0.0f]]
#define ALIGN_VIEW_TOP(PARENT, VIEW) [PARENT addConstraint:[NSLayoutConstraint constraintWithItem:VIEW attribute: NSLayoutAttributeTop relatedBy:NSLayoutRelationEqual toItem:PARENT attribute:NSLayoutAttributeTop multiplier:1.0f constant:0.0f]]
#define ALIGN_VIEW_BOTTOM(PARENT, VIEW) [PARENT addConstraint:[NSLayoutConstraint constraintWithItem:VIEW attribute: NSLayoutAttributeBottom relatedBy:NSLayoutRelationEqual toItem:PARENT attribute:NSLayoutAttributeBottom multiplier:1.0f constant:0.0f]]
#define ALIGN_VIEW_LEFT_CONSTANT(PARENT, VIEW, CONSTANT) [PARENT addConstraint:[NSLayoutConstraint constraintWithItem:VIEW attribute: NSLayoutAttributeLeft relatedBy:NSLayoutRelationEqual toItem:PARENT attribute:NSLayoutAttributeLeft multiplier:1.0f constant:CONSTANT]]
#define ALIGN_VIEW_RIGHT_CONSTANT(PARENT, VIEW, CONSTANT) [PARENT addConstraint:[NSLayoutConstraint constraintWithItem:VIEW attribute: NSLayoutAttributeRight relatedBy:NSLayoutRelationEqual toItem:PARENT attribute:NSLayoutAttributeRight multiplier:1.0f constant:CONSTANT]]
#define ALIGN_VIEW_TOP_CONSTANT(PARENT, VIEW, CONSTANT) [PARENT addConstraint:[NSLayoutConstraint constraintWithItem:VIEW attribute: NSLayoutAttributeTop relatedBy:NSLayoutRelationEqual toItem:PARENT attribute:NSLayoutAttributeTop multiplier:1.0f constant:CONSTANT]]
#define ALIGN_VIEW_BOTTOM_CONSTANT(PARENT, VIEW, CONSTANT) [PARENT addConstraint:[NSLayoutConstraint constraintWithItem:VIEW attribute: NSLayoutAttributeBottom relatedBy:NSLayoutRelationEqual toItem:PARENT attribute:NSLayoutAttributeBottom multiplier:1.0f constant:CONSTANT]]

// Set Size
#define CONSTRAIN_WIDTH(VIEW, WIDTH) [VIEW addConstraint:[NSLayoutConstraint constraintWithItem:VIEW attribute:NSLayoutAttributeWidth relatedBy:NSLayoutRelationEqual toItem:nil attribute:NSLayoutAttributeNotAnAttribute multiplier:1.0f constant:WIDTH]];
#define CONSTRAIN_HEIGHT(VIEW, HEIGHT) [VIEW addConstraint:[NSLayoutConstraint constraintWithItem:VIEW attribute:NSLayoutAttributeHeight relatedBy:NSLayoutRelationEqual toItem:nil attribute:NSLayoutAttributeNotAnAttribute multiplier:1.0f constant:HEIGHT]];
#define CONSTRAIN_SIZE(VIEW, HEIGHT, WIDTH) {CONSTRAIN_WIDTH(VIEW, WIDTH); CONSTRAIN_HEIGHT(VIEW, HEIGHT);}

// Set Aspect
#define CONSTRAIN_ASPECT(VIEW, ASPECT) [VIEW addConstraint:[NSLayoutConstraint constraintWithItem:VIEW attribute:NSLayoutAttributeWidth relatedBy:NSLayoutRelationEqual toItem:VIEW attribute:NSLayoutAttributeHeight multiplier:(ASPECT) constant:0.0f]]



// 字体 4s 4 5 5s 5c与6以上区别
#define GMFONTSCALE(orginFont) DEVICE_WIDTH > 320 ? 2+orginFont : orginFont

#define ApplicationDelegate   ((AppDelegate *)[[UIApplication sharedApplication] delegate])


#define userDefaults        [NSUserDefaults standardUserDefaults]
#define KeyWindow           [[[UIApplication sharedApplication] delegate] window]
#define WindowZoomScale     (WINDOW_WIDTH/320.f)
#define WindowUp            [UIApplication sharedApplication]

#define DocumentPath        [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) firstObject]    //获取Document文件夹的路径

#define ResourcePath        [[NSBundle mainBundle] resourcePath]    //获取自定义文件的bundle路径

#define ImageNamed(name)    [UIImage imageWithContentsOfFile:[ResourcePath stringByAppendingPathComponent:name]]

#define RGBCOLOR(r,g,b)     [UIColor colorWithRed:(r)/255.0f green:(g)/255.0f blue:(b)/255.0f alpha:1]         //RGB进制颜色值
#define RGBACOLOR(r,g,b,a)  [UIColor colorWithRed:(r)/255.0f green:(g)/255.0f blue:(b)/255.0f alpha:(a)]       //RGBA进制颜色值


#pragma mark  定义颜色
#define COLOR_MAIN_BACKGOROUNDCOLOR     @"#F1F5F8"  //  背景颜色


#define COLOR_MAIN_BLUE_29A1EF          @"#29a1ef"  //  标准蓝 APP主色 button填充色
#define COLOR_MAIN_RED_F75258           @"#f75258"  //  button背景、报错文字、金额
#define COLOR_BLUE_2198E5               @"#2198e5"  //  辅助蓝  按钮按下状态
#define COLOR_RED_F2464D                @"#f2464d"  //  辅助红色 按钮按下状态
#define COLOR_YELLOW_FFB30A             @"#fe5722"  //  橘黄  状态字段（表等待） 提示图标
#define COLOR_GREEN_40AD36              @"#40ad36"  //  状态字段、提示图标
#define COLOR_BLACK_333333              @"#333333"  //  黑3  正文标题 选项名称等文字
#define COLOR_LIGHTGRAY_666666          @"#666666"  //  灰6 正文内容
#define COLOR_LIGHTGRAY_999999          @"#999999"  //  灰9 提示文字 选择箭头
#define COLOR_LIGHTGRAY_D8D9DD          @"#d8d9dd"  // button不可点击状态
#define COLOR_LIGHTGRAY_D5D5D5          @"#d5d5d5"  //  bar底部描边 button状态
#define CLOKR_LIGHTGRAY_E236E9          @"#e2e629"  //  蓝灰  分割线
#define COLOR_WHITE                     @"#ffffff"  //  纯白颜色
#define COLOR_MAIN_COLOR                @"#ff8212"  //  APP主色调

#define font11 [UIFont systemFontOfSize:11]
#define font12 [UIFont systemFontOfSize:12]
#define font13 [UIFont systemFontOfSize:13]
#define font14 [UIFont systemFontOfSize:14]
#define font15 [UIFont systemFontOfSize:15]
#define font16 [UIFont systemFontOfSize:16]
#define font17 [UIFont systemFontOfSize:17]
#define font18 [UIFont systemFontOfSize:18]
#define font19 [UIFont systemFontOfSize:19]
#define font20 [UIFont systemFontOfSize:20]
#define font22 [UIFont systemFontOfSize:22]
#define font25 [UIFont systemFontOfSize:25]
#define ResentMonReturnTableViewCellHIGHT 70

//自定义表格显示内容长度
#define WIDTH DEVICE_BOUNDS.size.width/4-25

#define GETSTRING_WITH(x,y) [NSString stringWithFormat:@"%@%@",x,y]




//测试输入 接口地址
#define  UserDefault_TstUrl  @"UserDefault_TstUrl"
//是否自动输入测试环境
#define BASE_URl_Auto   ([userDefaults objectForKey:UserDefault_TstUrl]&&[[userDefaults objectForKey:UserDefault_TstUrl] length])?[userDefaults objectForKey:UserDefault_TstUrl]:BASE_URL_API

#define USEMESSAGE  [[NSUserDefaults standardUserDefaults]objectForKey:@"MyBorrow"]



typedef void(^complished)(id dataInfo);

/**
 *  SVHUD 展示 默认隐藏
 *
 */
#define SVHUD_Normal(meg)   {\
[SVProgressHUD showWithStatus:meg];\
[SVProgressHUD dismissAfterDelay:1];\
}


/**
 *  SVHUD 展示 默认不隐藏
 *
 */
#define SVHUD_NO_Stop(meg) {\
[SVProgressHUD showWithStatus:meg];\
}


/**
 *  SVHUD 隐藏
 *
 */
#define SVHUD_Stop [SVProgressHUD dismiss];
/**
 *  SVHUD 请求失败
 */
#define SVHUD_HTTP_ERROR [SVProgressHUD showErrorWithStatus:@"请求失败"];


/**
 *  SVHUD 请求成功
 */
#define SVHUD_HTTP_SUCCESS(msg) [SVProgressHUD showSuccessWithStatus:msg?msg:@"请求成功"];


/**
 *  SVHUD 提示
 */
#define SVHUD_HINT(msg) [SVProgressHUD showInfoWithStatus:msg];
#define GETSTRING_WITH(x,y) [NSString stringWithFormat:@"%@%@",x,y]
#define RightString(str) !str?@"":str

#define gFTHUDFontSize  15

#define HUDNormal(msg) {MBProgressHUD *hud=[MBProgressHUD showHUDAddedTo:[[UIApplication sharedApplication].delegate window] animated:NO];\
hud.mode = MBProgressHUDModeText;\
hud.minShowTime=1;\
hud.detailsLabelText= msg;\
hud.detailsLabelFont = [UIFont systemFontOfSize:gFTHUDFontSize];\
[hud hide:YES afterDelay:1];\
}


#define HUDNoStop(msg)    {MBProgressHUD *hud=[MBProgressHUD showHUDAddedTo:[[UIApplication sharedApplication].delegate window] animated:NO];\
hud.detailsLabelText = msg;\
hud.detailsLabelFont = [UIFont systemFontOfSize:gFTHUDFontSize];\
hud.mode = MBProgressHUDModeText;}

#define HUDStop [MBProgressHUD hideAllHUDsForView:[[UIApplication sharedApplication].delegate window] animated:NO];




//全局单例UserAccountManager
#define contextManager [UserAccountManager sharedInstance]

//
// 调试模式
//
#ifdef DEBUG
#define GMLOG(fmt, ...) NSLog((fmt), ##__VA_ARGS__);
#define GMLOG_METHOD NSLog(@"%s", __func__);
#else
#define GMLOG(...);
#define GMLOG_METHOD;
#endif

#endif
