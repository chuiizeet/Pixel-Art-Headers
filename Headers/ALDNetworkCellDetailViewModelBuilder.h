//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIColor, UIImage;

@interface ALDNetworkCellDetailViewModelBuilder : NSObject
{
    _Bool _highlight;
    NSString *_text;
    NSString *_detailText;
    NSString *_alertMessage;
    UIImage *_icon;
    UIColor *_iconTintColor;
}

@property(nonatomic, getter=shouldHighlight) _Bool highlight; // @synthesize highlight=_highlight;
@property(retain, nonatomic) UIColor *iconTintColor; // @synthesize iconTintColor=_iconTintColor;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *alertMessage; // @synthesize alertMessage=_alertMessage;
@property(copy, nonatomic) NSString *detailText; // @synthesize detailText=_detailText;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;

@end

