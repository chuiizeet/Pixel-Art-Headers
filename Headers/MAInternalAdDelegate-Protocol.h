//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MAAdDelegate-Protocol.h"

@class MAAd, NSString;

@protocol MAInternalAdDelegate <MAAdDelegate>
- (void)didFailToDisplayAd:(MAAd *)arg1 withErrorCode:(long long)arg2 errorString:(NSString *)arg3;
- (void)didFailToLoadAdForAdUnitIdentifier:(NSString *)arg1 withErrorCode:(long long)arg2 errorString:(NSString *)arg3;
@end

