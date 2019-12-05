//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ALTask.h"

@class NSDictionary;
@protocol ALNativeAdLoadDelegate;

@interface ALTaskRenderNativeAd : ALTask
{
    id <ALNativeAdLoadDelegate> _adLoadDelegate;
    NSDictionary *_fullAdResponse;
}

@property(retain, nonatomic) NSDictionary *fullAdResponse; // @synthesize fullAdResponse=_fullAdResponse;
@property(retain, nonatomic) id <ALNativeAdLoadDelegate> adLoadDelegate; // @synthesize adLoadDelegate=_adLoadDelegate;
- (void).cxx_destruct;
- (id)key;
- (id)clickURLWithSettings:(id)arg1 clCode:(id)arg2 eventIdentifier:(id)arg3;
- (id)URLForKey:(id)arg1 settings:(id)arg2 clCode:(id)arg3;
- (void)performRender:(id)arg1;
- (void)run;
- (id)initWithFullAdResponse:(id)arg1 sdk:(id)arg2 andNotify:(id)arg3;

@end

