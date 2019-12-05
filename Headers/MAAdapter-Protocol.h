//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol MAAdapterInitializationParameters;

@protocol MAAdapter <NSObject>
@property(readonly, copy, nonatomic) NSString *adapterVersion;
@property(readonly, copy, nonatomic) NSString *SDKVersion;
- (void)destroy;
- (void)initializeWithParameters:(id <MAAdapterInitializationParameters>)arg1 withCompletionHandler:(void (^)(void))arg2;

@optional
- (void)initializeWithParameters:(id <MAAdapterInitializationParameters>)arg1 completionHandler:(void (^)(long long, NSString *))arg2;
@end

