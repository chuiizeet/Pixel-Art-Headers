//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MAFullscreenAdController;
@protocol MAAdDelegate;

@interface MAInterstitialAd : NSObject
{
    MAFullscreenAdController *_controller;
}

@property(retain, nonatomic) MAFullscreenAdController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic, getter=isReady) _Bool ready; // @dynamic ready;
- (void)showAdForPlacement:(id)arg1;
- (void)showAd;
- (void)loadAd;
- (void)setExtraParameterForKey:(id)arg1 value:(id)arg2;
@property(nonatomic) __weak id <MAAdDelegate> delegate; // @dynamic delegate;
- (id)initWithAdUnitIdentifier:(id)arg1 sdk:(id)arg2;
- (id)initWithAdUnitIdentifier:(id)arg1;

@end

