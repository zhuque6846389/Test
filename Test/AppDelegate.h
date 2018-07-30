//
//  AppDelegate.h
//  Test
//
//  Created by liuheng on 2018/7/30.
//  Copyright © 2018年 liuheng. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;


@end

/*
 常用git命令
 1、git init（初始化本地代码仓库）
 2、git add .（将所有文件添加到暂缓区）
 3、git commit -m 'xxx'（将暂缓区文件提交到本地代码仓库）
 4、git status（查看所有文件状态：文件显示红色说明在工作区，文件显示绿色说明在暂缓区；）
 5、git log（查看版本库日志：版本号是一个很长的字符串；）
 6、git remote add origin xxx（将本地代码仓库与远程代码仓库关联）
 7、git push origin master（推送代码到远程代码仓库）
 8、git tag -a '1.0.0' -m 'xxx'（打标签）
    git tag '1.0.1'（打标签）
 9、git tag（查看所有标签）
 10、git push --tags（推送本地所有标签到远程代码仓库）
     git push origin 1.0.1（推送本地标签1.0.1到远程代码仓库）
 */
