//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ALConnectionManagerDelegate-Protocol.h"

@class ALAdEventStatsMap, ALLogger, ALSdk, NSString;

@interface ALAdEventStatsManager : NSObject <ALConnectionManagerDelegate>
{
    ALSdk *_sdk;
    ALAdEventStatsMap *_eventStatsMap;
    NSObject *_eventStatsMapLock;
    NSString *_statsKey;
}

@property(copy, nonatomic) NSString *statsKey; // @synthesize statsKey=_statsKey;
@property(retain, nonatomic) NSObject *eventStatsMapLock; // @synthesize eventStatsMapLock=_eventStatsMapLock;
@property(retain, nonatomic) ALAdEventStatsMap *eventStatsMap; // @synthesize eventStatsMap=_eventStatsMap;
@property(retain, nonatomic) ALSdk *sdk; // @synthesize sdk=_sdk;
- (void).cxx_destruct;
@property(retain, nonatomic) ALLogger *logger; // @dynamic logger;
- (void)connectionVia:(id)arg1 didFailWith:(long long)arg2;
- (void)connectionVia:(id)arg1 didSucceedWith:(long long)arg2 responseBody:(id)arg3;
- (double)adStatsRequestTimeout;
- (id)createAdStatsBackupEndpoint;
- (id)createAdStatsEndpoint;
- (void)submitStats:(id)arg1;
- (void)persistStats;
- (id)retrieveAdEventStatsForAd:(id)arg1;
- (void)clearAll;
- (void)setValue:(id)arg1 forKey:(id)arg2 ad:(id)arg3;
- (void)incrementKey:(id)arg1 byAmount:(id)arg2 ad:(id)arg3;
- (void)incrementKey:(id)arg1 ad:(id)arg2;
- (void)submitLastSessionStats;
- (id)initWithSdk:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
