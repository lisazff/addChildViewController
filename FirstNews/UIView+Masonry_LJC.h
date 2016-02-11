//
//  UIView+Masonry_LJC.h
//  FirstNews
//
//  Created by wangyuheng on 16/2/7.
//  Copyright © 2016年 wangyuheng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Masonry.h"
@interface UIView (Masonry_LJC)
- (void) distributeSpacingHorizontallyWith:(NSArray*)views;
- (void) distributeSpacingVerticallyWith:(NSArray*)views;
@end
