//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ALReachability : NSObject
{
}

+ (_Bool)hasActiveInternetConnection;
+ (void)initialize;
+ (_Bool)isReachableViaWiFi;
+ (_Bool)isReachableViaWWAN;
+ (_Bool)isReachable;
+ (_Bool)isReachableWithFlags:(unsigned int)arg1;
+ (id)networkTypeFromSystemConfiguration;
+ (id)currentNetworkType;

@end

