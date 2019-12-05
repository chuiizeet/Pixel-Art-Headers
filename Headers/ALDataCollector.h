//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ALSdk, NSDictionary, NSString;

@interface ALDataCollector : NSObject
{
    ALSdk *_sdk;
    NSDictionary *_cachedDeviceInformation;
    NSDictionary *_cachedApplicationInfo;
}

@property(retain, nonatomic) NSDictionary *cachedApplicationInfo; // @synthesize cachedApplicationInfo=_cachedApplicationInfo;
@property(retain, nonatomic) NSDictionary *cachedDeviceInformation; // @synthesize cachedDeviceInformation=_cachedDeviceInformation;
@property(nonatomic) __weak ALSdk *sdk; // @synthesize sdk=_sdk;
- (void).cxx_destruct;
- (id)collectUserAgent;
- (id)collectCurrentRadioAccessTechnology;
- (id)collectMemoryInfo;
- (id)collectFreeSpace;
- (id)collectSoundOutputs;
- (id)collectCarrierCountryCode;
- (id)collectCarrierName;
- (_Bool)isSimulator;
- (id)collectTimeZoneOffset;
- (id)collectModelRevision;
- (id)collectIdfv;
- (id)collectIdfa;
@property(readonly, nonatomic) NSDictionary *applicationInfo; // @dynamic applicationInfo;
- (id)addEphemeralDeviceData:(id)arg1;
- (id)collectDeviceInfo;
- (id)requestParametersForTaskSpecificParameters:(id)arg1 isPreloading:(_Bool)arg2;
@property(readonly, nonatomic) NSDictionary *requestParameters; // @dynamic requestParameters;
@property(readonly, copy, nonatomic) NSString *bidToken; // @dynamic bidToken;
- (id)initWithSdk:(id)arg1;

@end
