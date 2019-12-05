//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "ALAdViewActionDelegate-Protocol.h"
#import "ALApplicationControlProtocol-Protocol.h"
#import "ALInterstitialExtendedControlProxy-Protocol.h"
#import "ALOptOutButtonDelegate-Protocol.h"
#import "ALVideoEventProtocol-Protocol.h"
#import "ALWebViewButtonDelegate-Protocol.h"

@class ALAdEventStatsManagerHelper, ALAdView, ALCircularCountdownView, ALDelegateCallbackUnrepeatableInvoker, ALDirectAd, ALExitButton, ALIncentivizedWarningManager, ALInterstitialAd, ALLogger, ALOptOutButton, ALSdk, ALTimer, ALVideoPlayer, ALVideoViewControllerClickForwarder, AVPlayer, NSNumber, NSString, UIActivityIndicatorView, UIImageView, UIProgressView, UIView;
@protocol ALAdDisplayDelegate, ALAdLoadDelegate, ALAdVideoPlaybackDelegate, ALWebViewButton;

@interface ALBaseVideoViewController : UIViewController <ALApplicationControlProtocol, ALInterstitialExtendedControlProxy, ALVideoEventProtocol, ALWebViewButtonDelegate, ALAdViewActionDelegate, ALOptOutButtonDelegate>
{
    _Bool _dismissesOnClick;
    _Bool _wasPlayedToEnd;
    _Bool _statusBarOriginallyHidden;
    _Bool _willResignActive;
    _Bool _didEnterBackground;
    _Bool _skippable;
    _Bool _poststitialShown;
    _Bool _usedVideoStream;
    _Bool _idleTimerOriginallyDisabled;
    ALDirectAd *_currentAd;
    ALSdk *_sdk;
    ALInterstitialAd *_wrapper;
    ALAdEventStatsManagerHelper *_statsManagerHelper;
    ALAdView *_videoPoststitial;
    ALVideoPlayer *_videoPlayer;
    ALExitButton *_closeButton;
    ALExitButton *_skipButton;
    ALCircularCountdownView *_countdownClock;
    UIProgressView *_progressBar;
    UIImageView *_muteImageView;
    UIView<ALWebViewButton> *_videoButton;
    UIActivityIndicatorView *_bufferIndicator;
    ALIncentivizedWarningManager *_incentivizedWarningManager;
    id _countdownTextTimeObserver;
    id _videoProgressTimeObserver;
    unsigned long long _videoStreamStalledCount;
    unsigned long long _targetInterfaceOrientations;
    long long _startTimeMillis;
    CDUnknownBlockType _endBackgroundTaskBlock;
    ALVideoViewControllerClickForwarder *_clickForwarder;
    ALDelegateCallbackUnrepeatableInvoker *_delegateCallbackInvoker;
    ALOptOutButton *_optOutButton;
    long long _pausedTimeMillis;
    NSString *_savedAudioSessionCategory;
    unsigned long long _savedAudioSessionCategoryOptions;
    ALTimer *_reportRewardTimer;
    long long _originalApplicationStatusBarStyle;
}

@property(nonatomic) long long originalApplicationStatusBarStyle; // @synthesize originalApplicationStatusBarStyle=_originalApplicationStatusBarStyle;
@property(retain, nonatomic) ALTimer *reportRewardTimer; // @synthesize reportRewardTimer=_reportRewardTimer;
@property(nonatomic) unsigned long long savedAudioSessionCategoryOptions; // @synthesize savedAudioSessionCategoryOptions=_savedAudioSessionCategoryOptions;
@property(copy, nonatomic) NSString *savedAudioSessionCategory; // @synthesize savedAudioSessionCategory=_savedAudioSessionCategory;
@property(nonatomic) long long pausedTimeMillis; // @synthesize pausedTimeMillis=_pausedTimeMillis;
@property(retain, nonatomic) ALOptOutButton *optOutButton; // @synthesize optOutButton=_optOutButton;
@property(retain, nonatomic) ALDelegateCallbackUnrepeatableInvoker *delegateCallbackInvoker; // @synthesize delegateCallbackInvoker=_delegateCallbackInvoker;
@property(retain, nonatomic) ALVideoViewControllerClickForwarder *clickForwarder; // @synthesize clickForwarder=_clickForwarder;
@property(copy, nonatomic) CDUnknownBlockType endBackgroundTaskBlock; // @synthesize endBackgroundTaskBlock=_endBackgroundTaskBlock;
@property(nonatomic) long long startTimeMillis; // @synthesize startTimeMillis=_startTimeMillis;
@property(nonatomic) unsigned long long targetInterfaceOrientations; // @synthesize targetInterfaceOrientations=_targetInterfaceOrientations;
@property(nonatomic) unsigned long long videoStreamStalledCount; // @synthesize videoStreamStalledCount=_videoStreamStalledCount;
@property(nonatomic) _Bool idleTimerOriginallyDisabled; // @synthesize idleTimerOriginallyDisabled=_idleTimerOriginallyDisabled;
@property(nonatomic) _Bool usedVideoStream; // @synthesize usedVideoStream=_usedVideoStream;
@property(nonatomic) _Bool poststitialShown; // @synthesize poststitialShown=_poststitialShown;
@property(nonatomic) _Bool skippable; // @synthesize skippable=_skippable;
@property _Bool didEnterBackground; // @synthesize didEnterBackground=_didEnterBackground;
@property(nonatomic) _Bool willResignActive; // @synthesize willResignActive=_willResignActive;
@property(nonatomic) _Bool statusBarOriginallyHidden; // @synthesize statusBarOriginallyHidden=_statusBarOriginallyHidden;
@property _Bool wasPlayedToEnd; // @synthesize wasPlayedToEnd=_wasPlayedToEnd;
@property(retain, nonatomic) id videoProgressTimeObserver; // @synthesize videoProgressTimeObserver=_videoProgressTimeObserver;
@property(retain, nonatomic) id countdownTextTimeObserver; // @synthesize countdownTextTimeObserver=_countdownTextTimeObserver;
@property(retain, nonatomic) ALIncentivizedWarningManager *incentivizedWarningManager; // @synthesize incentivizedWarningManager=_incentivizedWarningManager;
@property(retain, nonatomic) UIActivityIndicatorView *bufferIndicator; // @synthesize bufferIndicator=_bufferIndicator;
@property(retain, nonatomic) UIView<ALWebViewButton> *videoButton; // @synthesize videoButton=_videoButton;
@property(retain, nonatomic) UIImageView *muteImageView; // @synthesize muteImageView=_muteImageView;
@property(retain, nonatomic) UIProgressView *progressBar; // @synthesize progressBar=_progressBar;
@property(retain, nonatomic) ALCircularCountdownView *countdownClock; // @synthesize countdownClock=_countdownClock;
@property(retain, nonatomic) ALExitButton *skipButton; // @synthesize skipButton=_skipButton;
@property(retain, nonatomic) ALExitButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) ALVideoPlayer *videoPlayer; // @synthesize videoPlayer=_videoPlayer;
@property(retain, nonatomic) ALAdView *videoPoststitial; // @synthesize videoPoststitial=_videoPoststitial;
@property(retain, nonatomic) ALAdEventStatsManagerHelper *statsManagerHelper; // @synthesize statsManagerHelper=_statsManagerHelper;
@property(nonatomic) __weak ALInterstitialAd *wrapper; // @synthesize wrapper=_wrapper;
@property(retain, nonatomic) ALSdk *sdk; // @synthesize sdk=_sdk;
@property(retain) ALDirectAd *currentAd; // @synthesize currentAd=_currentAd;
@property _Bool dismissesOnClick; // @synthesize dismissesOnClick=_dismissesOnClick;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak UIView *containingView; // @dynamic containingView;
@property(readonly, nonatomic) _Bool closeButtonHidden; // @dynamic closeButtonHidden;
@property(readonly, nonatomic) _Bool muteButtonShouldBeHidden; // @dynamic muteButtonShouldBeHidden;
@property(readonly, nonatomic, getter=shouldWarnIncentivizedAdClose) _Bool warnIncentivizedAdClose; // @dynamic warnIncentivizedAdClose;
@property(readonly, nonatomic, getter=isIncentivizedNonVideoAd) _Bool incentivizedNonVideoAd; // @dynamic incentivizedNonVideoAd;
@property(readonly, nonatomic, getter=isIncentivizedAd) _Bool incentivizedAd; // @dynamic incentivizedAd;
@property(readonly, nonatomic, getter=isVideoAd) _Bool videoAd; // @dynamic videoAd;
@property(readonly, nonatomic, getter=isFullyWatched) _Bool fullyWatched; // @dynamic fullyWatched;
@property(readonly, nonatomic, getter=isVideoMutedInitially) _Bool videoMutedInitially; // @dynamic videoMutedInitially;
@property(nonatomic, getter=isVideoMuted) _Bool videoMuted; // @dynamic videoMuted;
@property(readonly, nonatomic) __weak NSNumber *percentViewed; // @dynamic percentViewed;
@property(readonly, nonatomic) __weak NSNumber *videoDuration; // @dynamic videoDuration;
@property(readonly, nonatomic) __weak NSNumber *timeLeft; // @dynamic timeLeft;
@property(readonly, nonatomic) __weak NSNumber *currentTime; // @dynamic currentTime;
@property(readonly, nonatomic) __weak NSNumber *countdownTime; // @dynamic countdownTime;
@property(readonly, nonatomic) __weak AVPlayer *avPlayer; // @dynamic avPlayer;
@property(readonly, nonatomic) double standardAnimationTime; // @dynamic standardAnimationTime;
@property(readonly, nonatomic) double elapsedTime; // @dynamic elapsedTime;
@property(nonatomic) __weak id <ALAdVideoPlaybackDelegate> adVideoPlaybackDelegate; // @dynamic adVideoPlaybackDelegate;
@property(nonatomic) __weak id <ALAdDisplayDelegate> adDisplayDelegate; // @dynamic adDisplayDelegate;
@property(readonly, nonatomic) __weak ALLogger *logger; // @dynamic logger;
- (_Bool)isViewVisible:(id)arg1;
- (void)bringSubviewAboveVideoLayer:(id)arg1;
- (void)addTapHandler:(SEL)arg1 toView:(id)arg2;
- (void)showPoststitial;
- (void)hidePoststitial;
- (void)fadeOutVideoButton;
- (void)fadeInVideoButton;
- (void)fadeOutSkipButton;
- (void)fadeInSkipButton;
- (void)fadeInCloseButton;
- (void)fadeVideoButtonIfNeeded;
- (void)fadeCountdownClockIfNeeded;
- (void)setPoststitialMutedIfNeeded:(_Bool)arg1;
- (id)muteImageForMuteState:(_Bool)arg1;
- (void)toggleMute;
- (void)restoreAudioSessionIfNeeded;
- (void)setAudioSessionToMixableIfNeeded;
- (void)removeObservers;
- (void)addObservers;
- (id)createVideoProgressTimeObserver;
- (id)createCountdownTimeObserver;
- (void)scheduleReportRewardTaskIfNeeded;
- (_Bool)canShowVideo;
- (void)hideBufferIndicator;
- (void)showBufferIndicator;
- (void)playbackLikelyToKeepUpDidChange:(id)arg1;
- (void)player:(id)arg1 statusDidChange:(id)arg2;
- (void)playerRateDidChange:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)handleVideoPlayerError;
- (void)performBrokenVideoFailsafeIfNeeded;
- (void)audioSessionRouteDidChange:(id)arg1;
- (void)itemDidFailToPlayToEnd:(id)arg1;
- (void)itemDidPlayToEnd:(id)arg1;
- (void)itemDidReceiveNewErrorLogEntry:(id)arg1;
- (void)itemDidStall:(id)arg1;
- (void)clickThroughFromVideo;
- (void)handleVideoTap;
- (void)didReceiveSkipCommandOnWebViewButton:(id)arg1;
- (void)didReceiveCloseCommandOnWebViewButton:(id)arg1;
- (void)didReceiveClickCommandOnWebViewButton:(id)arg1;
- (void)didReceiveCloseCommandOnAdView:(id)arg1;
- (void)handleSkipVideo;
- (void)skipVideo;
- (void)updateConstraintsForOptOutButton;
- (void)didContractForOptOutButton:(id)arg1;
- (void)willExpandForOptOutButton:(id)arg1;
- (void)didDismissFullscreenForOptOutButton:(id)arg1;
- (void)willPresentFullscreenForOptOutButton:(id)arg1;
- (void)scheduleSkipButton;
- (void)playVideo;
- (void)dismissWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dismiss;
- (void)appWillResignActive:(id)arg1;
- (void)appResumed:(id)arg1;
- (void)appPaused:(id)arg1;
- (_Bool)prefersHomeIndicatorAutoHidden;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithSdk:(id)arg1 currentAd:(id)arg2 wrapper:(id)arg3;

// Remaining properties
@property(nonatomic, getter=isAdHidden, setter=setAdHidden:) _Bool adHidden;
@property(nonatomic) __weak id <ALAdLoadDelegate> adLoadDelegate;
@property(nonatomic, getter=currentFrame, setter=setCurrentFrame:) struct CGRect currentFrame;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

