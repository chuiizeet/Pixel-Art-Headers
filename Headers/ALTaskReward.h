//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ALTask.h"

@class NSString;

@interface ALTaskReward : ALTask
{
}

- (void)updateRequestWithTaskSpecificParameters:(id)arg1;
- (id)createBaseRequestBody;
- (void)sendApiRequestWith:(id)arg1 andNotify:(id)arg2;

// Remaining properties
@property(readonly, copy, nonatomic) NSString *endpoint; // @dynamic endpoint;

@end

