//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MAAdDelegate-Protocol.h"
#import "MARewardedAdDelegate-Protocol.h"

@class ALMediatedFullscreenAd, ALSdk, ALSetting, ALTimer, MAAdFormat, NSString;
@protocol MAAdDelegate;

@interface ALAdLoadManager : NSObject <MAAdDelegate, MARewardedAdDelegate>
{
    ALSdk *_sdk;
    id <MAAdDelegate> _delegate;
    MAAdFormat *_adFormat;
    ALSetting *_adUnitIdentifierSetting;
    ALMediatedFullscreenAd *_ad;
    NSObject *_stateLock;
    ALTimer *_timer;
}

@property(retain, nonatomic) ALTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSObject *stateLock; // @synthesize stateLock=_stateLock;
@property(retain, nonatomic) ALMediatedFullscreenAd *ad; // @synthesize ad=_ad;
@property(nonatomic) __weak ALSetting *adUnitIdentifierSetting; // @synthesize adUnitIdentifierSetting=_adUnitIdentifierSetting;
@property(nonatomic) __weak MAAdFormat *adFormat; // @synthesize adFormat=_adFormat;
@property(nonatomic) __weak id <MAAdDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak ALSdk *sdk; // @synthesize sdk=_sdk;
- (void).cxx_destruct;
- (void)didRewardUserForAd:(id)arg1 withReward:(id)arg2;
- (void)didCompleteRewardedVideoForAd:(id)arg1;
- (void)didStartRewardedVideoForAd:(id)arg1;
- (void)didHideAd:(id)arg1;
- (void)didFailToDisplayAd:(id)arg1 withErrorCode:(long long)arg2;
- (void)didDisplayAd:(id)arg1;
- (void)didClickAd:(id)arg1;
- (void)didFailToLoadAdForAdUnitIdentifier:(id)arg1 withErrorCode:(long long)arg2;
- (void)didLoadAd:(id)arg1;
- (void)invalidateAndReloadAd;
- (void)preloadAdIfNeededIsExpired:(_Bool)arg1;
- (void)preloadAdIfNeeded;
- (id)initWithSetting:(id)arg1 adFormat:(id)arg2 sdk:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
