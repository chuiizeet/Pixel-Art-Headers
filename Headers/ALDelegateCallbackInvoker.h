//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ALDelegateCallbackInvoker : NSObject
{
}

+ (void)invokePostbackDelegate:(id)arg1 postbackService:(id)arg2 didFailToExecutePostback:(id)arg3 errorCode:(long long)arg4;
+ (void)invokePostbackDelegate:(id)arg1 postbackService:(id)arg2 didExecutePostback:(id)arg3;
+ (void)invokeMediationDelegate:(id)arg1 didCollapseAd:(id)arg2;
+ (void)invokeMediationDelegate:(id)arg1 didExpandAd:(id)arg2;
+ (void)invokeMediationDelegate:(id)arg1 didRewardUserForAd:(id)arg2 withReward:(id)arg3;
+ (void)invokeMediationDelegate:(id)arg1 didCompleteRewardedVideoForAd:(id)arg2;
+ (void)invokeMediationDelegate:(id)arg1 didStartRewardedVideoForAd:(id)arg2;
+ (void)invokeMediationDelegate:(id)arg1 didFailToDisplayAd:(id)arg2 withErrorCode:(long long)arg3;
+ (void)invokeMediationDelegate:(id)arg1 didClickAd:(id)arg2;
+ (void)invokeMediationDelegate:(id)arg1 didHideAd:(id)arg2;
+ (void)invokeMediationDelegate:(id)arg1 didDisplayAd:(id)arg2;
+ (void)invokeMediationDelegate:(id)arg1 didFailToLoadAdForAdUnitIdentifier:(id)arg2 withErrorCode:(long long)arg3;
+ (void)invokeMediationDelegate:(id)arg1 didLoadAd:(id)arg2;
+ (void)invokeAdRewardDelegate:(id)arg1 rewardValidationRequestForAd:(id)arg2 didFailWithError:(long long)arg3;
+ (void)invokeAdRewardDelegate:(id)arg1 rewardValidationRequestForAd:(id)arg2 wasRejectedWithResponse:(id)arg3;
+ (void)invokeAdRewardDelegate:(id)arg1 rewardValidationRequestForAd:(id)arg2 didExceedQuotaWithResponse:(id)arg3;
+ (void)invokeAdRewardDelegate:(id)arg1 rewardValidationRequestForAd:(id)arg2 didSucceedWithResponse:(id)arg3;
+ (void)invokeAdViewEventDelegate:(id)arg1 ad:(id)arg2 didFailToDisplayInAdView:(id)arg3 withError:(long long)arg4;
+ (void)invokeAdViewEventDelegate:(id)arg1 ad:(id)arg2 didReturnToApplicationForAdView:(id)arg3;
+ (void)invokeAdViewEventDelegate:(id)arg1 ad:(id)arg2 willLeaveApplicationForAdView:(id)arg3;
+ (void)invokeAdViewEventDelegate:(id)arg1 ad:(id)arg2 didDismissFullscreenForAdView:(id)arg3;
+ (void)invokeAdViewEventDelegate:(id)arg1 ad:(id)arg2 willDismissFullscreenForAdView:(id)arg3;
+ (void)invokeAdViewEventDelegate:(id)arg1 ad:(id)arg2 didPresentFullscreenForAdView:(id)arg3;
+ (void)invokeAdVideoPlaybackDelegate:(id)arg1 videoPlaybackEndedInAd:(id)arg2 atPlaybackPercent:(id)arg3 fullyWatched:(_Bool)arg4;
+ (void)invokeAdVideoPlaybackDelegate:(id)arg1 videoPlaybackBeganInAd:(id)arg2;
+ (void)invokeAdDisplayDelegate:(id)arg1 ad:(id)arg2 wasClickedIn:(id)arg3;
+ (void)invokeAdDisplayDelegate:(id)arg1 ad:(id)arg2 wasHiddenIn:(id)arg3;
+ (void)invokeAdDisplayDelegate:(id)arg1 ad:(id)arg2 wasDisplayedIn:(id)arg3;
+ (void)invokeInternalAdDisplayDelegateIfNeeded:(id)arg1 withErrorMessage:(id)arg2;

@end

