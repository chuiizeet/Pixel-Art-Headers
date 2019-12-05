//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ALBackgroundingAwareTimer, ALLogger, ALSdk;
@protocol ALAdHiddenCallbackTimeoutManagerDelegate;

@interface ALAdHiddenCallbackTimeoutManager : NSObject
{
    ALSdk *_sdk;
    ALLogger *_logger;
    id <ALAdHiddenCallbackTimeoutManagerDelegate> _delegate;
    ALBackgroundingAwareTimer *_timer;
}

@property(retain, nonatomic) ALBackgroundingAwareTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) __weak id <ALAdHiddenCallbackTimeoutManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak ALLogger *logger; // @synthesize logger=_logger;
@property(nonatomic) __weak ALSdk *sdk; // @synthesize sdk=_sdk;
- (void).cxx_destruct;
- (void)cancel;
- (void)scheduleForAd:(id)arg1 timeoutSeconds:(double)arg2;
- (id)initWithSdk:(id)arg1 andNotify:(id)arg2;

@end
