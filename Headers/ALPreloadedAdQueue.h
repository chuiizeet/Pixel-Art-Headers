//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ALSdk, NSMutableArray;

@interface ALPreloadedAdQueue : NSObject
{
    unsigned long long _maxCapacity;
    NSMutableArray *_backingArray;
    NSObject *_queueLock;
    ALSdk *_sdk;
}

@property(retain, nonatomic) ALSdk *sdk; // @synthesize sdk=_sdk;
@property(retain, nonatomic) NSObject *queueLock; // @synthesize queueLock=_queueLock;
@property(retain, nonatomic) NSMutableArray *backingArray; // @synthesize backingArray=_backingArray;
@property(nonatomic) unsigned long long maxCapacity; // @synthesize maxCapacity=_maxCapacity;
- (void).cxx_destruct;
- (id)peek;
- (id)dequeueAd;
- (void)enqueueAd:(id)arg1;
@property(readonly, getter=isEmpty) _Bool empty; // @dynamic empty;
@property(readonly, getter=isFull) _Bool full; // @dynamic full;
- (unsigned long long)currentSize;
- (id)initWithCapacity:(unsigned long long)arg1 sdk:(id)arg2;

@end

