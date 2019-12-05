//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ALLogger, ALPreloadedAdManager, ALSdk, NSMutableDictionary;

@interface ALAdService : NSObject
{
    ALSdk *_sdk;
    ALLogger *_logger;
    NSMutableDictionary *_adLoadStates;
    NSObject *_adLoadStatesLock;
}

+ (id)accepts;
@property(retain) NSObject *adLoadStatesLock; // @synthesize adLoadStatesLock=_adLoadStatesLock;
@property(retain) NSMutableDictionary *adLoadStates; // @synthesize adLoadStates=_adLoadStates;
@property(retain, nonatomic) ALLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) ALSdk *sdk; // @synthesize sdk=_sdk;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) ALPreloadedAdManager *preloadManager; // @dynamic preloadManager;
- (void)preloadAdsForZone:(id)arg1;
- (void)preloadAdForZoneIdentifier:(id)arg1;
- (_Bool)hasPreloadedAdForZoneIdentifier:(id)arg1;
- (_Bool)hasPreloadedAdOfSize:(id)arg1;
- (void)preloadAdOfSize:(id)arg1;
- (void)loadNextAdUsingTask:(id)arg1 andNotify:(id)arg2;
- (void)doLoadAdForZone:(id)arg1 delegateProxy:(id)arg2;
- (id)retrieveLoadStateForZone:(id)arg1;
- (void)addAdUpdateObserver:(id)arg1 ofSize:(id)arg2;
- (void)removeAdUpdateObserver:(id)arg1 ofSize:(id)arg2;
- (void)dispatchPersistentPostback:(id)arg1 andNotify:(id)arg2;
- (void)dispatchPersistentPostbacks:(id)arg1 andNotify:(id)arg2;
- (void)dispatchPersistentPostbacks:(id)arg1;
- (id)completeVideoEndURL:(id)arg1 elapsedTimeSeconds:(unsigned long long)arg2 withPercentViewed:(unsigned long long)arg3 timestamp:(id)arg4 usedVideoStream:(_Bool)arg5;
- (void)trackVideoEndForAd:(id)arg1 elapsedTimeSeconds:(unsigned long long)arg2 percentViewed:(unsigned long long)arg3 usedVideoStream:(_Bool)arg4;
- (void)trackImpressionForAd:(id)arg1;
- (void)launchURL:(id)arg1 forAd:(id)arg2 inAdView:(id)arg3;
- (void)launchURL:(id)arg1 forAd:(id)arg2 fromViewController:(id)arg3;
- (void)dispatchForegroundClickPostbacksForAd:(id)arg1 andNotify:(id)arg2;
- (void)trackClickOn:(id)arg1 inAdView:(id)arg2 andLaunchURL:(id)arg3;
- (void)trackVideoForegroundClickOn:(id)arg1 videoView:(id)arg2 inViewController:(id)arg3;
- (void)trackVideoClickOn:(id)arg1 videoView:(id)arg2 fromViewController:(id)arg3;
- (void)notifyDelegate:(id)arg1 adServiceDidFailToLoadAdWithError:(int)arg2;
- (void)notifyDelegate:(id)arg1 adServiceDidLoadAd:(id)arg2;
- (id)dequeueAdForZone:(id)arg1;
- (void)loadNextAdOfZone:(id)arg1 andNotify:(id)arg2;
- (void)loadNextAdForZoneIdentifiers:(id)arg1 andNotify:(id)arg2;
- (void)loadNextAdForAdToken:(id)arg1 andNotify:(id)arg2;
- (id)bidToken;
- (void)loadNextAdForZoneIdentifier:(id)arg1 andNotify:(id)arg2;
- (void)loadNextAdForZoneIdentifier:(id)arg1 size:(id)arg2 andNotify:(id)arg3;
- (void)loadNextIncentivizedAdForZoneIdentifier:(id)arg1 andNotify:(id)arg2;
- (void)loadNextAd:(id)arg1 andNotify:(id)arg2;
- (id)initWithSdk:(id)arg1;

@end
