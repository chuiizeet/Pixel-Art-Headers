//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ALTask.h"

@class ALBackgroundingAwareTimer, MAAdFormat, NSDictionary, NSString;
@protocol MAAdDelegate;

@interface ALTaskProcessMediationWaterfall : ALTask
{
    NSString *_adUnitIdentifier;
    NSDictionary *_fullAdResponse;
    id <MAAdDelegate> _finalDelegate;
    MAAdFormat *_format;
    ALBackgroundingAwareTimer *_timer;
}

@property(retain, nonatomic) ALBackgroundingAwareTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) MAAdFormat *format; // @synthesize format=_format;
@property(retain, nonatomic) id <MAAdDelegate> finalDelegate; // @synthesize finalDelegate=_finalDelegate;
@property(retain, nonatomic) NSDictionary *fullAdResponse; // @synthesize fullAdResponse=_fullAdResponse;
@property(copy, nonatomic) NSString *adUnitIdentifier; // @synthesize adUnitIdentifier=_adUnitIdentifier;
- (void).cxx_destruct;
- (_Bool)isValidAdFormat;
- (id)key;
- (void)handleAdFailedWithErrorCode:(long long)arg1;
- (void)handleAdRendered:(id)arg1;
- (void)run;
- (id)initWithAdUnitIdentifier:(id)arg1 format:(id)arg2 fullAdResponse:(id)arg3 sdk:(id)arg4 andNotify:(id)arg5;

@end
