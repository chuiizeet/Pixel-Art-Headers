//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface ALMediationAdapterAvailability : NSObject
{
    NSArray *_availableMediationAdapters;
    NSArray *_unavailableMediationAdapterClassNames;
}

@property(retain, nonatomic) NSArray *unavailableMediationAdapterClassNames; // @synthesize unavailableMediationAdapterClassNames=_unavailableMediationAdapterClassNames;
@property(retain, nonatomic) NSArray *availableMediationAdapters; // @synthesize availableMediationAdapters=_availableMediationAdapters;
- (void).cxx_destruct;
- (id)initWithAvailableMediationAdapters:(id)arg1 unavailableMediationAdapterClassNames:(id)arg2;

@end
