//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "ALAdLoadDelegate-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"
#import "WKNavigationDelegate-Protocol.h"

@class ALAdEventStatsManagerHelper, ALAdSize, ALBaseVideoViewController, ALDirectAd, ALExpandedAdView, ALLogger, ALSdk, NSNumber, NSString, UIViewController;
@protocol ALAdDisplayDelegate, ALAdLoadDelegate, ALAdVideoPlaybackDelegate, ALAdViewActionDelegate, ALAdViewEventDelegate, ALInterstitialAdDismissProxy, ALWebView;

@interface ALAdView : UIView <ALAdLoadDelegate, UIWebViewDelegate, WKNavigationDelegate>
{
    ALAdSize *adSize;
    id <ALAdLoadDelegate> _adLoadDelegate;
    id <ALAdDisplayDelegate> _adDisplayDelegate;
    id <ALAdViewEventDelegate> _adEventDelegate;
    id <ALAdVideoPlaybackDelegate> _adVideoPlaybackDelegate;
    id <ALInterstitialAdDismissProxy> _weakInterstitialDismissalDelegate;
    NSString *_zoneIdentifier;
    ALSdk *_sdk;
    ALLogger *_logger;
    NSNumber *_autoloadInternal;
    ALDirectAd *_oldAd;
    ALDirectAd *_lastHiddenNotifiedAd;
    ALDirectAd *_lastDisplayedNotifiedAd;
    UIViewController *_parentController;
    UIView<ALWebView> *_adWebView;
    ALDirectAd *_currentAd;
    id <ALAdViewActionDelegate> _actionDelegate;
    ALBaseVideoViewController *_parentAdViewController;
    ALExpandedAdView *_expandedAdView;
    ALExpandedAdView *_detachedExpandedAdView;
    ALAdEventStatsManagerHelper *_statsManagerHelper;
}

@property(retain, nonatomic) ALAdEventStatsManagerHelper *statsManagerHelper; // @synthesize statsManagerHelper=_statsManagerHelper;
@property(nonatomic) __weak ALExpandedAdView *detachedExpandedAdView; // @synthesize detachedExpandedAdView=_detachedExpandedAdView;
@property(retain, nonatomic) ALExpandedAdView *expandedAdView; // @synthesize expandedAdView=_expandedAdView;
@property(nonatomic) __weak ALBaseVideoViewController *parentAdViewController; // @synthesize parentAdViewController=_parentAdViewController;
@property(nonatomic) __weak id <ALAdViewActionDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
@property(retain) ALDirectAd *currentAd; // @synthesize currentAd=_currentAd;
@property(retain, nonatomic) UIView<ALWebView> *adWebView; // @synthesize adWebView=_adWebView;
@property(retain) UIViewController *parentController; // @synthesize parentController=_parentController;
@property(retain) ALDirectAd *lastDisplayedNotifiedAd; // @synthesize lastDisplayedNotifiedAd=_lastDisplayedNotifiedAd;
@property(retain) ALDirectAd *lastHiddenNotifiedAd; // @synthesize lastHiddenNotifiedAd=_lastHiddenNotifiedAd;
@property(retain) ALDirectAd *oldAd; // @synthesize oldAd=_oldAd;
@property(retain, nonatomic) NSNumber *autoloadInternal; // @synthesize autoloadInternal=_autoloadInternal;
@property(retain, nonatomic) ALLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) ALSdk *sdk; // @synthesize sdk=_sdk;
@property(copy, nonatomic) NSString *zoneIdentifier; // @synthesize zoneIdentifier=_zoneIdentifier;
@property __weak id <ALInterstitialAdDismissProxy> weakInterstitialDismissalDelegate; // @synthesize weakInterstitialDismissalDelegate=_weakInterstitialDismissalDelegate;
@property(retain, nonatomic) id <ALAdVideoPlaybackDelegate> adVideoPlaybackDelegate; // @synthesize adVideoPlaybackDelegate=_adVideoPlaybackDelegate;
@property(retain, nonatomic) id <ALAdViewEventDelegate> adEventDelegate; // @synthesize adEventDelegate=_adEventDelegate;
@property(retain, nonatomic) id <ALAdDisplayDelegate> adDisplayDelegate; // @synthesize adDisplayDelegate=_adDisplayDelegate;
@property(retain, nonatomic) id <ALAdLoadDelegate> adLoadDelegate; // @synthesize adLoadDelegate=_adLoadDelegate;
@property(retain, nonatomic) ALAdSize *adSize; // @synthesize adSize;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isReadyForDisplay;
- (void)dealloc;
- (void)ensureAudioRunwayRestoration;
- (void)cleanWebView:(id)arg1;
- (void)teardown;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)replaceInTemplateIfNeeded:(id)arg1 source:(id)arg2;
- (void)loadURL:(id)arg1 inTemplateIfNeeded:(id)arg2 sdk:(id)arg3;
- (void)loadHTMLString:(id)arg1 forWebView:(id)arg2;
- (void)streamHTMLForWebKitAd:(id)arg1;
- (void)loadAd:(id)arg1;
- (void)doRenderAd:(id)arg1;
- (void)hideWebView;
- (void)showWebView;
- (void)awakeFromNib;
- (void)layoutSubviews;
- (void)removeFromSuperview;
- (void)detachExpandedAdViewIfNeededForAd:(id)arg1;
- (void)trackAdHidden;
- (void)contractAd;
- (void)expandAd;
- (void)closeAd;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webViewDidFinishLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (_Bool)canAcceptUpdate;
- (void)adService:(id)arg1 didFailToLoadAdWithError:(int)arg2;
- (void)adService:(id)arg1 didLoadAd:(id)arg2;
- (void)render:(id)arg1 overPlacement:(id)arg2;
- (void)render:(id)arg1;
- (void)loadNextAd;
@property(nonatomic, getter=isAutoloadEnabled, setter=setAutoloadEnabled:) _Bool shouldAutoload; // @dynamic shouldAutoload;
- (void)didMoveToWindow;
- (void)createWebViewForAd:(id)arg1;
- (void)baseInitWithSize:(id)arg1 zoneIdentifier:(id)arg2 ad:(id)arg3 sdk:(id)arg4;
- (id)initWithFrame:(struct CGRect)arg1 size:(id)arg2 zoneIdentifier:(id)arg3 ad:(id)arg4 sdk:(id)arg5;
- (id)initWithSize:(id)arg1 zoneIdentifier:(id)arg2 ad:(id)arg3 sdk:(id)arg4;
- (id)initWithSize:(id)arg1 ad:(id)arg2 sdk:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 size:(id)arg2 sdk:(id)arg3;
- (id)initWithSdk:(id)arg1 size:(id)arg2 zoneIdentifier:(id)arg3;
- (id)initWithSdk:(id)arg1 size:(id)arg2;
- (id)initWithSize:(id)arg1 zoneIdentifier:(id)arg2;
- (id)initWithSize:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic, getter=isAutoloadEnabled, setter=setAutoloadEnabled:) _Bool autoload; // @dynamic autoload;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

