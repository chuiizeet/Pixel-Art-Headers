//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MAAdViewDelegateWrapper.h"

#import "MAAdViewAdDelegate-Protocol.h"

@class MAAdView, MAAdViewController, NSString;

@interface MAAdViewAdLoadDelegate : MAAdViewDelegateWrapper <MAAdViewAdDelegate>
{
    MAAdViewController *_strongParentController;
    MAAdView *_strongContainerAdView;
}

@property(retain, nonatomic) MAAdView *strongContainerAdView; // @synthesize strongContainerAdView=_strongContainerAdView;
@property(retain, nonatomic) MAAdViewController *strongParentController; // @synthesize strongParentController=_strongParentController;
- (void).cxx_destruct;
- (void)didFailToLoadAdForAdUnitIdentifier:(id)arg1 withErrorCode:(long long)arg2;
- (void)didLoadAd:(id)arg1;
- (id)initWithParentController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

