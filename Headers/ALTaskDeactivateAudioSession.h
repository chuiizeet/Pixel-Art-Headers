//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ALTask.h"

@class NSString;

@interface ALTaskDeactivateAudioSession : ALTask
{
    NSString *_category;
    unsigned long long _options;
}

@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(copy, nonatomic) NSString *category; // @synthesize category=_category;
- (void).cxx_destruct;
- (id)key;
- (void)run;
- (id)initWithCategory:(id)arg1 options:(unsigned long long)arg2 sdk:(id)arg3;

@end

