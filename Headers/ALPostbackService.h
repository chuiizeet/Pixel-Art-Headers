//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ALSdk;

@interface ALPostbackService : NSObject
{
    ALSdk *_sdk;
}

@property(nonatomic) __weak ALSdk *sdk; // @synthesize sdk=_sdk;
- (void).cxx_destruct;
- (_Bool)isPostbackRequestForAppPause:(id)arg1;
- (void)dispatchPostbackRequest:(id)arg1 executionQueue:(unsigned long long)arg2 andNotify:(id)arg3;
- (void)dispatchPostbackRequest:(id)arg1 andNotify:(id)arg2;
- (void)dispatchPostbackAsync:(id)arg1 andNotify:(id)arg2;
- (id)initWithSdk:(id)arg1;

@end
