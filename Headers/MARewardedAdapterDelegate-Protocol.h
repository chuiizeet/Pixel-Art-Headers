//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MAAdapterDelegate-Protocol.h"

@class MAAdapterError, MAReward;

@protocol MARewardedAdapterDelegate <MAAdapterDelegate>
- (void)didRewardUserWithReward:(MAReward *)arg1;
- (void)didCompleteRewardedAdVideo;
- (void)didStartRewardedAdVideo;
- (void)didHideRewardedAd;
- (void)didClickRewardedAd;
- (void)didFailToDisplayRewardedAdWithError:(MAAdapterError *)arg1;
- (void)didDisplayRewardedAd;
- (void)didFailToLoadRewardedAdWithError:(MAAdapterError *)arg1;
- (void)didLoadRewardedAd;
@end
