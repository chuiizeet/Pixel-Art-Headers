//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FBSDKRestrictiveRule : NSObject
{
    NSString *_keyRegex;
    NSString *_valueRegex;
    NSString *_valueNegativeRegex;
    NSString *_dataType;
}

@property(readonly, copy, nonatomic) NSString *dataType; // @synthesize dataType=_dataType;
@property(readonly, copy, nonatomic) NSString *valueNegativeRegex; // @synthesize valueNegativeRegex=_valueNegativeRegex;
@property(readonly, copy, nonatomic) NSString *valueRegex; // @synthesize valueRegex=_valueRegex;
@property(readonly, copy, nonatomic) NSString *keyRegex; // @synthesize keyRegex=_keyRegex;
- (void).cxx_destruct;
- (id)initWithKeyRegex:(id)arg1 valueRegex:(id)arg2 valueNegativeRegex:(id)arg3 dataType:(id)arg4;

@end

