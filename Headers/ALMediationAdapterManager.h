//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ALLogger, ALSdk, NSMutableDictionary, NSMutableSet, NSSet;

@interface ALMediationAdapterManager : NSObject
{
    ALSdk *_sdk;
    ALLogger *_logger;
    NSObject *_loadedAdaptersLock;
    NSMutableDictionary *_loadedAdapterClasses;
    NSMutableSet *_failedToLoadAdapterClasses;
}

@property(retain, nonatomic) NSMutableSet *failedToLoadAdapterClasses; // @synthesize failedToLoadAdapterClasses=_failedToLoadAdapterClasses;
@property(retain, nonatomic) NSMutableDictionary *loadedAdapterClasses; // @synthesize loadedAdapterClasses=_loadedAdapterClasses;
@property(retain, nonatomic) NSObject *loadedAdaptersLock; // @synthesize loadedAdaptersLock=_loadedAdaptersLock;
@property(nonatomic) __weak ALLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) ALSdk *sdk; // @synthesize sdk=_sdk;
- (void).cxx_destruct;
- (Class)loadAdapterClassForClassName:(id)arg1;
- (id)createAdapterWrapperFromSpec:(id)arg1 class:(Class)arg2;
- (id)createAdapterFromSpec:(id)arg1;
@property(readonly, nonatomic) NSSet *failedAdapterClassnames; // @dynamic failedAdapterClassnames;
@property(readonly, nonatomic) NSSet *loadedAdapterClassnames; // @dynamic loadedAdapterClassnames;
- (id)initWithSdk:(id)arg1;

@end
