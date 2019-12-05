//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ALAtomicBoolean, ALDelegateWrapper, ALLogger, ALMediatedAd, ALMediationAdapterSpec, ALSdk, NSString, UIView;
@protocol MAAdapter, MAAdapterResponseParameters;

@interface ALMediationAdapterWrapper : NSObject
{
    UIView *_loadedAdView;
    NSString *_name;
    ALSdk *_sdk;
    ALLogger *_logger;
    ALMediationAdapterSpec *_adapterSpec;
    NSString *_adapterTag;
    id <MAAdapter> _adapter;
    NSString *_adUnitIdentifier;
    ALMediatedAd *_ad;
    ALDelegateWrapper *_delegateWrapper;
    id <MAAdapterResponseParameters> _adapterParameters;
    ALAtomicBoolean *_enabled;
    ALAtomicBoolean *_loadCompleted;
    ALAtomicBoolean *_adLoaded;
}

@property(retain, nonatomic) ALAtomicBoolean *adLoaded; // @synthesize adLoaded=_adLoaded;
@property(retain, nonatomic) ALAtomicBoolean *loadCompleted; // @synthesize loadCompleted=_loadCompleted;
@property(retain, nonatomic) ALAtomicBoolean *enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) id <MAAdapterResponseParameters> adapterParameters; // @synthesize adapterParameters=_adapterParameters;
@property(retain, nonatomic) ALDelegateWrapper *delegateWrapper; // @synthesize delegateWrapper=_delegateWrapper;
@property(retain, nonatomic) ALMediatedAd *ad; // @synthesize ad=_ad;
@property(copy, nonatomic) NSString *adUnitIdentifier; // @synthesize adUnitIdentifier=_adUnitIdentifier;
@property(retain, nonatomic) id <MAAdapter> adapter; // @synthesize adapter=_adapter;
@property(copy, nonatomic) NSString *adapterTag; // @synthesize adapterTag=_adapterTag;
@property(retain, nonatomic) ALMediationAdapterSpec *adapterSpec; // @synthesize adapterSpec=_adapterSpec;
@property(nonatomic) __weak ALLogger *logger; // @synthesize logger=_logger;
@property(nonatomic) __weak ALSdk *sdk; // @synthesize sdk=_sdk;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) UIView *loadedAdView; // @synthesize loadedAdView=_loadedAdView;
- (void).cxx_destruct;
- (id)description;
- (void)runOperationWithTag:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)markDisabledWithReason:(id)arg1;
- (void)destroy;
- (void)notifySignalCollectionFailedWithMessage:(id)arg1 collectionState:(id)arg2;
- (void)notifySignalCollectionSucceededForSignal:(id)arg1 collectionState:(id)arg2;
- (void)collectSignalForParameters:(id)arg1 spec:(id)arg2 andNotify:(id)arg3;
- (Class)implementationClass;
@property(readonly, copy, nonatomic) NSString *adapterVersion; // @dynamic adapterVersion;
@property(readonly, copy, nonatomic) NSString *SDKVersion; // @dynamic SDKVersion;
@property(readonly, nonatomic) _Bool isAdLoaded; // @dynamic isAdLoaded;
@property(readonly, nonatomic) _Bool isEnabled; // @dynamic isEnabled;
- (void)showAd:(id)arg1;
- (void)loadNextAdForAdUnitIdentifier:(id)arg1 adapterParameters:(id)arg2 mediatedAd:(id)arg3 andNotify:(id)arg4;
- (void)setMaxAdForAdUnitIdentifier:(id)arg1 ad:(id)arg2;
- (void)initializeWithAdapterInitializationParameters:(id)arg1;
- (id)initWithAdapterSpec:(id)arg1 adapter:(id)arg2 sdk:(id)arg3;

@end

