//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ALConnectionManager, NSURLRequest;

@protocol ALConnectionManagerDelegate <NSObject>
- (void)connectionVia:(ALConnectionManager *)arg1 didFailWith:(long long)arg2;
- (void)connectionVia:(ALConnectionManager *)arg1 didSucceedWith:(long long)arg2 responseBody:(id)arg3;

@optional
- (_Bool)connectionVia:(ALConnectionManager *)arg1 requiresResponseForRequest:(NSURLRequest *)arg2;
@end
