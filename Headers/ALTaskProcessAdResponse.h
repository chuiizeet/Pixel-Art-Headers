//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ALTask.h"

#import "ALAdLoadDelegate-Protocol.h"

@class ALAdZone, NSDictionary, NSString;
@protocol ALAdLoadDelegate;

@interface ALTaskProcessAdResponse : ALTask <ALAdLoadDelegate>
{
    NSDictionary *_fullAdResponse;
    ALAdZone *_zone;
    unsigned long long _source;
    id <ALAdLoadDelegate> _adLoadDelegate;
}

@property(retain, nonatomic) id <ALAdLoadDelegate> adLoadDelegate; // @synthesize adLoadDelegate=_adLoadDelegate;
@property(nonatomic) unsigned long long source; // @synthesize source=_source;
@property(retain, nonatomic) ALAdZone *zone; // @synthesize zone=_zone;
@property(retain, nonatomic) NSDictionary *fullAdResponse; // @synthesize fullAdResponse=_fullAdResponse;
- (void).cxx_destruct;
- (id)key;
- (void)handleFailedAdRenderWithErrorCode:(int)arg1;
- (void)handleFailedAdRender;
- (void)handleAdRendered:(id)arg1;
- (void)adService:(id)arg1 didFailToLoadAdWithError:(int)arg2;
- (void)adService:(id)arg1 didLoadAd:(id)arg2;
- (void)processCurrentAd:(id)arg1;
- (void)run;
- (id)initWithFullAdResponse:(id)arg1 zone:(id)arg2 source:(unsigned long long)arg3 adLoadDelegate:(id)arg4 sdk:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

