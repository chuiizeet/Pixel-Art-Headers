//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface DialogButton : NSObject
{
    UIImage *_Canvas;
    NSString *_button_title;
    struct CGSize _frame_size;
}

+ (id)GenerateProBannerWith:(struct CGSize)arg1;
+ (id)GenerateWith:(struct CGSize)arg1 text:(id)arg2 pressed:(_Bool)arg3;
+ (id)GenerateWith:(struct CGSize)arg1 text:(id)arg2 pressed:(_Bool)arg3 font_size:(double)arg4;
+ (id)GenerateWith:(struct CGSize)arg1 text:(id)arg2 pressed:(_Bool)arg3 font_size:(double)arg4 lineWidth:(double)arg5;
+ (id)Generate2With:(struct CGSize)arg1 text:(id)arg2 pressed:(_Bool)arg3 font_size:(double)arg4 lineWidth:(double)arg5;
@property(retain, nonatomic) NSString *button_title; // @synthesize button_title=_button_title;
@property(nonatomic) struct CGSize frame_size; // @synthesize frame_size=_frame_size;
@property(retain, nonatomic) UIImage *Canvas; // @synthesize Canvas=_Canvas;
- (void).cxx_destruct;

@end

