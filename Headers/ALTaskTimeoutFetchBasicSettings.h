//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ALTask.h"

@class ALTaskFetchBasicSettings;

@interface ALTaskTimeoutFetchBasicSettings : ALTask
{
    ALTaskFetchBasicSettings *_parentTask;
}

@property(retain, nonatomic) ALTaskFetchBasicSettings *parentTask; // @synthesize parentTask=_parentTask;
- (void).cxx_destruct;
- (id)key;
- (void)run;
- (id)initWithParentTask:(id)arg1;

@end

