//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface ALHTTPRequestBuilder : NSObject
{
    _Bool _requiresResponse;
    _Bool _encodingEnabled;
    _Bool _trackConnectionSpeed;
    NSString *_HTTPMethod;
    NSString *_endpoint;
    NSString *_backupEndpoint;
    NSDictionary *_parameters;
    NSDictionary *_HTTPHeaders;
    NSDictionary *_body;
    id _emptyResponse;
    unsigned long long _retryAttemptsLeft;
    double _timeoutSec;
    double _retryDelaySec;
}

@property(nonatomic) _Bool trackConnectionSpeed; // @synthesize trackConnectionSpeed=_trackConnectionSpeed;
@property(nonatomic) _Bool encodingEnabled; // @synthesize encodingEnabled=_encodingEnabled;
@property(nonatomic) double retryDelaySec; // @synthesize retryDelaySec=_retryDelaySec;
@property(nonatomic) double timeoutSec; // @synthesize timeoutSec=_timeoutSec;
@property unsigned long long retryAttemptsLeft; // @synthesize retryAttemptsLeft=_retryAttemptsLeft;
@property(nonatomic) _Bool requiresResponse; // @synthesize requiresResponse=_requiresResponse;
@property(retain, nonatomic) id emptyResponse; // @synthesize emptyResponse=_emptyResponse;
@property(retain, nonatomic) NSDictionary *body; // @synthesize body=_body;
@property(retain, nonatomic) NSDictionary *HTTPHeaders; // @synthesize HTTPHeaders=_HTTPHeaders;
@property(copy, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(copy, nonatomic) NSString *backupEndpoint; // @synthesize backupEndpoint=_backupEndpoint;
@property(copy, nonatomic) NSString *endpoint; // @synthesize endpoint=_endpoint;
@property(copy, nonatomic) NSString *HTTPMethod; // @synthesize HTTPMethod=_HTTPMethod;
- (void).cxx_destruct;
- (id)initWithSdk:(id)arg1;

@end

