//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ALInterstitialAdDismissProxy-Protocol.h"
#import "ALInterstitialControlProxy-Protocol.h"
#import "ALInterstitialCurrentAdProxy-Protocol.h"
#import "ALInterstitialUIViewControlProxy-Protocol.h"

@class ALDirectAd, ALInterstitialAd, ALSdk;

@protocol ALInterstitialExtendedControlProxy <ALInterstitialControlProxy, ALInterstitialCurrentAdProxy, ALInterstitialUIViewControlProxy, ALInterstitialAdDismissProxy>
- (id)initWithSdk:(ALSdk *)arg1 currentAd:(ALDirectAd *)arg2 wrapper:(ALInterstitialAd *)arg3;
@end

