//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ALTaskFetchNextAd.h"

@class NSArray;

@interface ALTaskFetchMultizoneAd : ALTaskFetchNextAd
{
    NSArray *_zoneIdentifiers;
}

@property(copy, nonatomic) NSArray *zoneIdentifiers; // @synthesize zoneIdentifiers=_zoneIdentifiers;
- (void).cxx_destruct;
- (id)key;
- (unsigned long long)source;
- (id)fetchTaskSpecificParameters;
- (id)initWithZoneIdentifiers:(id)arg1 sdk:(id)arg2;

@end

