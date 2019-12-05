//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ALSdk, NSArray, NSMutableDictionary;

@interface ALTaskStatsManager : NSObject
{
    ALSdk *_sdk;
    NSObject *_taskStatsMapLock;
    NSMutableDictionary *_taskStatsMap;
}

@property(retain, nonatomic) NSMutableDictionary *taskStatsMap; // @synthesize taskStatsMap=_taskStatsMap;
@property(retain, nonatomic) NSObject *taskStatsMapLock; // @synthesize taskStatsMapLock=_taskStatsMapLock;
@property(retain, nonatomic) ALSdk *sdk; // @synthesize sdk=_sdk;
- (void).cxx_destruct;
- (void)persistStats;
- (void)loadAll;
- (id)retrieveStatsForTask:(id)arg1;
@property(readonly, nonatomic) NSArray *stats; // @dynamic stats;
- (void)clearAll;
- (void)reportExceptionForTask:(id)arg1 shouldCollectDuration:(_Bool)arg2 duration:(long long)arg3;
- (void)reportExceptionForTask:(id)arg1;
- (void)reportCompletionForTask:(id)arg1 duration:(long long)arg2;
- (id)initWithSdk:(id)arg1;

@end

