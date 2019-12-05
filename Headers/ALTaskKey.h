//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ALTaskKey : NSObject
{
    NSString *_name;
}

+ (id)reportMAXReward;
+ (id)validateMAXReward;
+ (id)fetchMediationDebuggerInfo;
+ (id)fireMediationPostbacks;
+ (id)timeoutSignalCollection;
+ (id)timeoutMediatedAd;
+ (id)processNextWaterfallMediatedAd;
+ (id)processMediationWaterfall;
+ (id)loadAdapterAd;
+ (id)fetchNextMediatedAd;
+ (id)collectSignals;
+ (id)autoInitializeAdapters;
+ (id)validateReward;
+ (id)resolveVASTWrapper;
+ (id)reportReward;
+ (id)renderVASTAd;
+ (id)renderNativeAd;
+ (id)renderAppLovinAd;
+ (id)processVASTWrapperResponse;
+ (id)processSDKVASTResponse;
+ (id)processAdResponse;
+ (id)fetchVariables;
+ (id)fetchTokenAd;
+ (id)fetchNextNativeAd;
+ (id)fetchNextAd;
+ (id)fetchMultizoneAd;
+ (id)deactiveAudioSession;
+ (id)cacheVASTAd;
+ (id)cacheNativeAdVideos;
+ (id)cacheNativeAdImages;
+ (id)cacheAppLovinAd;
+ (id)APISubmitData;
+ (id)blockTask;
+ (id)dispatchPostback;
+ (id)initializeSDK;
+ (id)notifyFetchBasicSettingsTimeout;
+ (id)fetchBasicSettings;
+ (id)repeatRequest;
+ (id)unknown;
+ (id)newTaskKey:(id)arg1;
+ (void)initialize;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithName:(id)arg1;

@end

