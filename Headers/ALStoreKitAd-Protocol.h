//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ALAdSize, ALStoreKitPoststitialConfiguration, NSDictionary, NSNumber;

@protocol ALStoreKitAd <NSObject>
@property(readonly, nonatomic) ALStoreKitPoststitialConfiguration *storeKitPoststitialConfiguration;
@property(nonatomic) unsigned long long storekitPoststitialMode;
@property(readonly, nonatomic) _Bool storekitPoststitialEnabled;
@property(nonatomic) unsigned long long supportedStoreKitOrientations;
@property(nonatomic) unsigned long long iTunesIdentifier;
@property(nonatomic) _Bool opensInStoreKit;
@property(retain, nonatomic) NSDictionary *storeKitParameters;
@property(readonly, nonatomic) ALAdSize *size;
@property(readonly, nonatomic) NSNumber *adIdNumber;
@end

