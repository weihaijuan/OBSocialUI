//
//  OBBaseViewController.h
//  OBSocialUI
//
//  Created by DarrenW on 16/6/23.
//  Copyright © 2016年 oneBug. All rights reserved.
//  朋友圈所有控制器的父类

#import <UIKit/UIKit.h>

@interface OBBaseViewController : UIViewController
/**
 *  初始化导航条的返回按钮
 *
 *  @param image 返回按钮的image
 *  @param title 返回按钮的标题
 */
- (void)ob_initNavigationGoBackButtonImage:(UIImage *)image WithTitle:(NSString *)title;

/**
 *  返回按钮的响应事件,如需定制返回事件,重写此方法
 *
 *  @param sender 返回按钮
 */
- (void)goBackButtonClicked:(UIBarButtonItem *)sender;


/**
 *  初始化导航条的右侧按钮
 *
 *  @param image 返回按钮的image
 *  @param title 返回按钮的标题
 */
- (void)ob_initNavigationRightButtonImage:(UIImage *)image;

/**
 *  右侧按钮的响应事件,如需定制返回事件,重写此方法
 *
 *  @param sender 返回按钮
 */
- (void)rightButtonClicked:(UIBarButtonItem *)sender;



@end
