//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ALTimer;

@interface ALBackgroundingAwareTimer : NSObject
{
    ALTimer *_timer;
}

+ (id)timerWithTimeInterval:(double)arg1 sdk:(id)arg2 block:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) ALTimer *timer; // @synthesize timer=_timer;
- (void).cxx_destruct;
- (void)appResumed;
- (void)appPaused;
- (void)cancel;
- (void)dealloc;
- (id)initWithTimeInterval:(double)arg1 sdk:(id)arg2 block:(CDUnknownBlockType)arg3;

@end
