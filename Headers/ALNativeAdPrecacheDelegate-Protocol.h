//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ALNativeAd, ALNativeAdService;

@protocol ALNativeAdPrecacheDelegate <NSObject>
- (void)nativeAdService:(ALNativeAdService *)arg1 didFailToPrecacheVideoForAd:(ALNativeAd *)arg2 withError:(long long)arg3;
- (void)nativeAdService:(ALNativeAdService *)arg1 didFailToPrecacheImagesForAd:(ALNativeAd *)arg2 withError:(long long)arg3;
- (void)nativeAdService:(ALNativeAdService *)arg1 didPrecacheVideoForAd:(ALNativeAd *)arg2;
- (void)nativeAdService:(ALNativeAdService *)arg1 didPrecacheImagesForAd:(ALNativeAd *)arg2;
@end
