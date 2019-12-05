//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ALTaskReward.h"

#import "ALConnectionManagerDelegate-Protocol.h"

@class NSString;

@interface ALTaskReportReward : ALTaskReward <ALConnectionManagerDelegate>
{
}

- (void)handlePendingRewardNotFound;
- (void)handleRequestFailedWithResponseCode:(long long)arg1;
- (void)handleRequestSuccessfulWithResponse:(id)arg1;
- (id)getAndRemovePendingReward;
- (id)createRequestBodyForPendingReward:(id)arg1;
- (void)connectionVia:(id)arg1 didSucceedWith:(long long)arg2 responseBody:(id)arg3;
- (void)connectionVia:(id)arg1 didFailWith:(long long)arg2;
- (void)run;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

