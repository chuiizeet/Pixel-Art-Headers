//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPUImageTwoInputFilter.h"

@interface ASCII3 : GPUImageTwoInputFilter
{
    int gl_img_width;
    int gl_img_height;
    int gl_ascii_type;
    float _img_width;
    float _img_height;
    int _ascii_type;
}

@property(nonatomic) int ascii_type; // @synthesize ascii_type=_ascii_type;
@property(nonatomic) float img_height; // @synthesize img_height=_img_height;
@property(nonatomic) float img_width; // @synthesize img_width=_img_width;
- (void)setupFilterForSize:(struct CGSize)arg1;
- (id)init;

@end

