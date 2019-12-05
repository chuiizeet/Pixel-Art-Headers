//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ALTask.h"

#import "ALConnectionManagerDelegate-Protocol.h"

@class NSString;

@interface ALTaskFetchVariables : ALTask <ALConnectionManagerDelegate>
{
    CDUnknownBlockType _completion;
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void).cxx_destruct;
- (id)key;
- (void)connectionVia:(id)arg1 didFailWith:(long long)arg2;
- (void)connectionVia:(id)arg1 didSucceedWith:(long long)arg2 responseBody:(id)arg3;
- (double)defaultTimeout;
- (id)fetchParameters;
- (id)fetchBackupDomain;
- (id)fetchDomain;
- (void)run;
- (id)initWithSdk:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

