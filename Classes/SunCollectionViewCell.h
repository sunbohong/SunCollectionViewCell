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

@property (nonatomic, strong, readonly) UIImageView *imageView;
@property (nonatomic, strong, readonly) UILabel *textLabel;
@property (nonatomic, strong, readonly) UILabel *detailTextLabel;

@end
