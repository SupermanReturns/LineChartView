//
//  ChartView.h
//  LineChartView
//
//  Created by Superman on 2018/8/9.
//  Copyright © 2018年 Superman. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ChartView : UIView

@property (nonatomic, assign) NSInteger numOfX;

/** Y轴坐标数据 */
@property (nonatomic, strong) NSArray *dataArrOfY;
/** X轴坐标数据 */
@property (nonatomic, strong) NSArray *dataArrOfX;
/** 左边数据 */
@property (nonatomic,strong) NSArray *leftDataArr;
/** 右边数据 没有不用传递 */
@property (nonatomic,strong) NSArray *rightDataArr;
/** X轴标题 */
@property (nonatomic, strong) UILabel *titleOfX;
/** Y轴标题 */
@property (nonatomic, strong) UILabel *titleOfY;

@property (nonatomic, copy) NSString *titleOfXStr;
@property (nonatomic, copy) NSString *titleOfYStr;

@end
