//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSURL.h>

@class NSString;

@interface NSURL (ALUtils)
@property(readonly, copy, nonatomic) NSString *al_hostAndPathString; // @dynamic al_hostAndPathString;
@property(readonly, copy, nonatomic) NSString *al_URLStringWithoutQueryParameters; // @dynamic al_URLStringWithoutQueryParameters;
- (id)al_URLByAppendingQueryItemsFromDictionary:(id)arg1 useExistingPercentEncodedQuery:(_Bool)arg2;
- (id)al_URLByAppendingQueryItem:(id)arg1;
@end

