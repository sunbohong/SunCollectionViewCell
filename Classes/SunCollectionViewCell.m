//
//  SunCollectionViewCell.m
//  SunCollectionViewCell
//
//  Created by 酷酷的哀殿 on 16/10/21.
//  Copyright © 2016年 酷酷的哀殿. All rights reserved.
//

#import "SunCollectionViewCell.h"

@implementation SunCollectionViewCell {
    UIImageView *_imageView;
    UILabel *_textLabel;
    UILabel *_detailTextLabel;
}

- (UIImageView *)imageView {
    if(!_imageView) {
        _imageView = [[UIImageView alloc] init];
        [self.contentView addSubview:_imageView];
    }
    return _imageView;
}

- (UILabel *)textLabel {
    if(!_textLabel) {
        _textLabel = [UILabel new];
        [self.contentView addSubview:_textLabel];
    }
    return _textLabel;
}

- (UILabel *)detailTextLabel {
    if(!_detailTextLabel) {
        _detailTextLabel = [UILabel new];
        [self.contentView addSubview:_detailTextLabel];
    }
    return _detailTextLabel;
}

@end
