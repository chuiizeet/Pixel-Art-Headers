//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIWebView.h>

#import "ALWebViewButton-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"

@class ALSdk, NSString;
@protocol ALWebViewButtonDelegate;

@interface ALUIWebViewButton : UIWebView <UIWebViewDelegate, ALWebViewButton>
{
    id <ALWebViewButtonDelegate> _clickDelegate;
    ALSdk *_sdk;
}

@property(nonatomic) __weak ALSdk *sdk; // @synthesize sdk=_sdk;
@property(nonatomic) __weak id <ALWebViewButtonDelegate> clickDelegate; // @synthesize clickDelegate=_clickDelegate;
- (void).cxx_destruct;
- (void)loadHTMLString:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (id)initWithSdk:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

