//
//  JPagerBaseViewController.h
//  JKitDemo
//
//  Created by Zebra on 16/3/31.
//  Copyright © 2016年 陈杰. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JPagerMacro.h"
#import "JPagerTopTabView.h"

@interface JPagerBaseViewController : UIView<UIScrollViewDelegate>


@property (strong, nonatomic) UIScrollView *scrollView;
@property (assign, nonatomic) NSInteger currentPage; /**<  页码   **/
@property (strong, nonatomic) UIScrollView *topTab; /**<  顶部tab   **/
@property (strong, nonatomic) NSArray *titleArray; /**<  标题   **/


/**
 设置下划线的宽和y值
 
 @param width 下划线宽 默认item.width
 @param y y值 默认 item.height - 1
 */
- (void)setPagerViewLineViewWithWidth:(CGFloat)width andY:(CGFloat)y;

- (instancetype)initWithFrame:(CGRect)frame WithSelectColor:(UIColor *)selectColor WithUnselectorColor:(UIColor *)unselectColor WithUnderLineColor:(UIColor *)underlineColor WithtopTabColor:(UIColor *)topTabColor;

- (void)setPagerViewTopBarWithWidth:(CGFloat)width andHeight:(CGFloat)height andAlpha:(CGFloat)alpha;

@end
