//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ALSdk, NSMutableDictionary;

@interface ALRequestTracker : NSObject
{
    ALSdk *_sdk;
    NSMutableDictionary *_counter;
    NSObject *_counterLock;
}

@property(retain, nonatomic) NSObject *counterLock; // @synthesize counterLock=_counterLock;
@property(retain, nonatomic) NSMutableDictionary *counter; // @synthesize counter=_counter;
@property(nonatomic) __weak ALSdk *sdk; // @synthesize sdk=_sdk;
- (void).cxx_destruct;
- (id)countAndIncrementForIdentifier:(id)arg1;
- (id)initWithSdk:(id)arg1;

@end
