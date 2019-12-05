//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ALTask.h"

#import "ALPostbackDelegate-Protocol.h"

@class ALMediationAdapterSpec, NSArray, NSDictionary, NSString;

@interface ALTaskFireMediationPostbacks : ALTask <ALPostbackDelegate>
{
    _Bool _shouldFirePostbackInSuccession;
    NSString *_eventType;
    NSString *_postbackKey;
    ALMediationAdapterSpec *_adapterSpec;
    NSDictionary *_userInfo;
    NSDictionary *_HTTPHeaders;
    NSString *_errorCodeString;
    NSString *_errorMessage;
    NSArray *_urls;
    long long _postbackFireCount;
}

@property(nonatomic) long long postbackFireCount; // @synthesize postbackFireCount=_postbackFireCount;
@property(retain, nonatomic) NSArray *urls; // @synthesize urls=_urls;
@property(nonatomic) _Bool shouldFirePostbackInSuccession; // @synthesize shouldFirePostbackInSuccession=_shouldFirePostbackInSuccession;
@property(copy, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(copy, nonatomic) NSString *errorCodeString; // @synthesize errorCodeString=_errorCodeString;
@property(retain, nonatomic) NSDictionary *HTTPHeaders; // @synthesize HTTPHeaders=_HTTPHeaders;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) ALMediationAdapterSpec *adapterSpec; // @synthesize adapterSpec=_adapterSpec;
@property(copy, nonatomic) NSString *postbackKey; // @synthesize postbackKey=_postbackKey;
@property(copy, nonatomic) NSString *eventType; // @synthesize eventType=_eventType;
- (void).cxx_destruct;
- (id)key;
- (id)replaceUrl:(id)arg1 errorCodeString:(id)arg2 errorMessage:(id)arg3;
- (id)persistentRequestWithReplacePostbackErrorMacrosForUrl:(id)arg1 errorCodeString:(id)arg2 errorMessage:(id)arg3 HTTPHeaders:(id)arg4;
- (id)requestWithReplacePostbackErrorMacrosForUrl:(id)arg1 errorCodeString:(id)arg2 errorMessage:(id)arg3 HTTPHeaders:(id)arg4;
- (void)maybeFireSuccessivePostbacks;
- (void)postbackService:(id)arg1 didFailToExecutePostback:(id)arg2 errorCode:(long long)arg3;
- (void)postbackService:(id)arg1 didExecutePostback:(id)arg2;
- (void)firePersistentPostbacks;
- (void)firePostbacks;
- (void)run;
- (id)initWithEventType:(id)arg1 userInfo:(id)arg2 errorCode:(long long)arg3 errorMessage:(id)arg4 adapterSpec:(id)arg5 sdk:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

