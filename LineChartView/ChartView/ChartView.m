//
//  ChartView.m
//  LineChartView
//
//  Created by Superman on 2018/8/9.
//  Copyright © 2018年 Superman. All rights reserved.
//

#import "ChartView.h"


#define btnW 12
#define titleWOfY 60
@interface ChartView()<UIScrollViewDelegate>
{
    CGFloat currentPage;//当前页数
    CGFloat Xmargin;//X轴方向的偏移
    CGFloat Ymargin;//Y轴方向的偏移
    CGPoint lastPoint;//最后一个坐标点
    UIButton *firstBtn;
    UIButton *lastBtn;
}

@end
@implementation ChartView

/*
// Only override drawRect: if you perform custom drawing.
// An empty implementation adversely affects performance during animation.
- (void)drawRect:(CGRect)rect {
    // Drawing code
}
*/

@end
