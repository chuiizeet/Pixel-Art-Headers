//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ALLogger, ALSdk, NSMutableOrderedSet, NSString;

@interface ALAdZoneManager : NSObject
{
    _Bool _updated;
    ALSdk *_sdk;
    NSMutableOrderedSet *_zones;
    NSObject *_zonesLock;
    NSString *_zonesFilePath;
}

@property(copy, nonatomic) NSString *zonesFilePath; // @synthesize zonesFilePath=_zonesFilePath;
@property(retain) NSObject *zonesLock; // @synthesize zonesLock=_zonesLock;
@property(retain, nonatomic) NSMutableOrderedSet *zones; // @synthesize zones=_zones;
@property(nonatomic) __weak ALSdk *sdk; // @synthesize sdk=_sdk;
@property(getter=isUpdated) _Bool updated; // @synthesize updated=_updated;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak ALLogger *logger; // @dynamic logger;
- (void)persistZonesIfNeeded:(id)arg1;
- (id)retrievePersistedZones;
- (_Bool)containsZone:(id)arg1;
- (id)loadZonesIfNeeded:(id)arg1;
- (id)initWithSDK:(id)arg1;

@end
