//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ALTask.h"

#import "ALAdFetching-Protocol.h"

@class ALConnectionStatsTracker, ALRequestParameters, MAAdFormat, NSArray, NSMutableDictionary, NSString;
@protocol MAAdDelegate;

@interface ALTaskFetchMediatedAd : ALTask <ALAdFetching>
{
    NSString *_adUnitIdentifier;
    MAAdFormat *_format;
    ALRequestParameters *_requestParameters;
    NSArray *_signalData;
    id <MAAdDelegate> _delegate;
    ALConnectionStatsTracker *_statsTracker;
}

@property(retain, nonatomic) ALConnectionStatsTracker *statsTracker; // @synthesize statsTracker=_statsTracker;
@property(retain, nonatomic) id <MAAdDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *signalData; // @synthesize signalData=_signalData;
@property(retain, nonatomic) ALRequestParameters *requestParameters; // @synthesize requestParameters=_requestParameters;
@property(retain, nonatomic) MAAdFormat *format; // @synthesize format=_format;
@property(copy, nonatomic) NSString *adUnitIdentifier; // @synthesize adUnitIdentifier=_adUnitIdentifier;
- (void).cxx_destruct;
- (id)key;
- (double)defaultTimeout;
- (void)updateSessionStats;
@property(readonly, copy, nonatomic) NSString *adBackupEndpointDomain; // @dynamic adBackupEndpointDomain;
@property(readonly, copy, nonatomic) NSString *adEndpointDomain; // @dynamic adEndpointDomain;
@property(readonly, nonatomic) NSMutableDictionary *fetchTaskSpecificParameters; // @dynamic fetchTaskSpecificParameters;
- (void)notifyLoadDelegateOfFailureWithResponseCode:(long long)arg1;
- (id)createRenderTaskWithResponse:(id)arg1;
- (id)adapterClassnamesInformation;
- (id)createMediatedAdRequest;
- (void)connectionVia:(id)arg1 didFailWith:(long long)arg2;
- (void)connectionVia:(id)arg1 didSucceedWith:(long long)arg2 responseBody:(id)arg3;
- (void)run;
- (id)initWithAdUnitIdentifier:(id)arg1 format:(id)arg2 requestParameters:(id)arg3 signalData:(id)arg4 sdk:(id)arg5 andNotify:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned long long source; // @dynamic source;
@property(readonly) Class superclass;

@end

