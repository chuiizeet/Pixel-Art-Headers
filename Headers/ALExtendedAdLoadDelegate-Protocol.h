//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ALAdLoadDelegate-Protocol.h"

@class ALAdService, ALAdZone;

@protocol ALExtendedAdLoadDelegate <ALAdLoadDelegate>

@optional
- (void)adService:(ALAdService *)arg1 didFailToLoadAdOfZone:(ALAdZone *)arg2 withError:(long long)arg3;
@end

