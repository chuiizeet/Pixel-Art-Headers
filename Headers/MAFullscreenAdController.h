//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MAAdController.h"

#import "ALAdExpirationManagerDelegate-Protocol.h"

@class ALAdExpirationManager, ALAdHiddenCallbackScheduler, ALAtomicBoolean, ALMediatedFullscreenAd, MAFullscreenAdDelegateWrapper, MAMockAd, NSObject, NSString;

@interface MAFullscreenAdController : MAAdController <ALAdExpirationManagerDelegate>
{
    MAFullscreenAdDelegateWrapper *_delegateWrapper;
    ALAdExpirationManager *_adExpirationManager;
    ALAdHiddenCallbackScheduler *_adHiddenCallbackScheduler;
    NSObject *_stateLock;
    ALMediatedFullscreenAd *_visibleAd;
    ALMediatedFullscreenAd *_regularLoadedAd;
    ALMediatedFullscreenAd *_fallbackLoadedAd;
    long long _adState;
    ALAtomicBoolean *_reloadingExpiredAd;
}

@property(retain, nonatomic) ALAtomicBoolean *reloadingExpiredAd; // @synthesize reloadingExpiredAd=_reloadingExpiredAd;
@property(nonatomic) long long adState; // @synthesize adState=_adState;
@property(retain, nonatomic) ALMediatedFullscreenAd *fallbackLoadedAd; // @synthesize fallbackLoadedAd=_fallbackLoadedAd;
@property(retain, nonatomic) ALMediatedFullscreenAd *regularLoadedAd; // @synthesize regularLoadedAd=_regularLoadedAd;
@property(retain, nonatomic) ALMediatedFullscreenAd *visibleAd; // @synthesize visibleAd=_visibleAd;
@property(retain, nonatomic) NSObject *stateLock; // @synthesize stateLock=_stateLock;
@property(retain, nonatomic) ALAdHiddenCallbackScheduler *adHiddenCallbackScheduler; // @synthesize adHiddenCallbackScheduler=_adHiddenCallbackScheduler;
@property(retain, nonatomic) ALAdExpirationManager *adExpirationManager; // @synthesize adExpirationManager=_adExpirationManager;
@property(retain, nonatomic) MAFullscreenAdDelegateWrapper *delegateWrapper; // @synthesize delegateWrapper=_delegateWrapper;
- (void).cxx_destruct;
- (id)stringFromAdState:(long long)arg1;
@property(readonly, nonatomic) MAMockAd *mockAd; // @dynamic mockAd;
- (void)scheduleAdExpirationIfNeededForAd:(id)arg1;
- (void)didExpireAd;
- (void)handleAdLoaded:(id)arg1;
- (void)invalidateCurrentAd;
- (void)showFullscreenAdForPlacement:(id)arg1;
@property(readonly, nonatomic) ALMediatedFullscreenAd *loadedAd; // @dynamic loadedAd;
- (void)transitionToState:(long long)arg1 withTransitionBlock:(CDUnknownBlockType)arg2;
- (void)showAdForPlacement:(id)arg1;
- (void)loadAd;
@property(readonly, nonatomic, getter=isReady) _Bool ready; // @dynamic ready;
- (id)initWithAdUnitIdentifier:(id)arg1 adFormat:(id)arg2 tag:(id)arg3 sdk:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

