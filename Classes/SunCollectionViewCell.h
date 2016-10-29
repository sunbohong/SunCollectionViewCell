//
//  SunCollectionViewCell.h
//  SunCollectionViewCell
//
//  Created by 酷酷的哀殿 on 16/10/21.
//  Copyright © 2016年 酷酷的哀殿. All rights reserved.
//

#import <UIKit/UIKit.h>

#ifndef SunCollectionViewCell
 #define SunCollectionViewCell(_name_) \
    @interface SunCollectionViewCell_ ## _name_ : SunCollectionViewCell @end \
    @implementation SunCollectionViewCell_ ## _name_ @end
#endif

#define Identifier(_Class_) \
    static NSString *reuse ## _Class_ ## Identifier; \
    static dispatch_once_t onceToken ## _Class_; \
    dispatch_once(&onceToken ## _Class_, ^{ \
        reuse ## _Class_ ## Identifier = NSStringFromClass([_Class_ class]); \
    });


@interface SunCollectionViewCell : UICollectionViewCell

@property (nonatomic, assign) BOOL needConfig;

@property (nonatomic, readonly) UIImageView *imageView;
@property (nonatomic, readonly) UILabel *textLabel;
@property (nonatomic, readonly) UILabel *detailTextLabel;
@property (nonatomic, readonly) CALayer *separator;

/**
   allows customization of the separator color.
   This only affect appearance,if you want change separator'color,you should set cell.separator.backgroundColor
 */
@property (nonatomic, strong) UIColor *separatorColor UI_APPEARANCE_SELECTOR;

/**
   allows customization of the separator frame
 */
@property (nonatomic) UIEdgeInsets separatorInset UI_APPEARANCE_SELECTOR;


@property (nonatomic, copy) void (^didMoveToSuperviewBlock)(SunCollectionViewCell *cell);
@property (nonatomic, copy) void (^didLayoutSubviewsBlock)(SunCollectionViewCell *cell);

@end
