//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIWindow.h>

@class ALStoreKitPoststitialConfiguration;

@interface ALStoreKitWindow : UIWindow
{
    _Bool _statusBarOriginallyHidden;
    ALStoreKitPoststitialConfiguration *_configuration;
}

@property(nonatomic) _Bool statusBarOriginallyHidden; // @synthesize statusBarOriginallyHidden=_statusBarOriginallyHidden;
@property(retain, nonatomic) ALStoreKitPoststitialConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (void)dismissKeyWindow;
- (void)makeKeyAndVisible;
- (id)initWithStatusBarHidden:(_Bool)arg1 configuration:(id)arg2 storeKitProductViewController:(id)arg3;

@end

