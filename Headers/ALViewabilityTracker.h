//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ALLogger, ALSdk, MAAdView;

@interface ALViewabilityTracker : NSObject
{
    ALSdk *_sdk;
    ALLogger *_logger;
    MAAdView *_adView;
}

@property(nonatomic) __weak MAAdView *adView; // @synthesize adView=_adView;
@property(nonatomic) __weak ALLogger *logger; // @synthesize logger=_logger;
@property(nonatomic) __weak ALSdk *sdk; // @synthesize sdk=_sdk;
- (void).cxx_destruct;
- (unsigned long long)checkViewabilityForAd:(id)arg1;
- (id)initWithAdView:(id)arg1 sdk:(id)arg2;

@end
