//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ALTaskCacheAd.h"

@class ALFileManager, ALVASTAd;

@interface ALTaskCacheVASTAd : ALTaskCacheAd
{
}

- (id)key;
@property(readonly, nonatomic) ALFileManager *fileManager; // @dynamic fileManager;
@property(readonly, nonatomic) ALVASTAd *vastAd; // @dynamic vastAd;
- (void)cacheHTMLTemplateIfNeeded;
- (void)cacheVideoCreativeIfNeeded;
- (void)cacheCompanionAdIfNeeded;
- (void)run;
- (id)initWithAd:(id)arg1 sdk:(id)arg2 andNotify:(id)arg3;

@end

