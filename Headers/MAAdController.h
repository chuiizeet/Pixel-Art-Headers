//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ALLogger, ALRequestParametersBuilder, ALSdk, MAAdFormat, NSString;
@protocol MAAdDelegate;

@interface MAAdController : NSObject
{
    ALSdk *_sdk;
    ALLogger *_logger;
    NSString *_tag;
    NSString *_adUnitIdentifier;
    MAAdFormat *_adFormat;
    ALRequestParametersBuilder *_loadRequestBuilder;
    id <MAAdDelegate> _delegate;
}

@property(nonatomic) __weak id <MAAdDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) ALRequestParametersBuilder *loadRequestBuilder; // @synthesize loadRequestBuilder=_loadRequestBuilder;
@property(nonatomic) __weak MAAdFormat *adFormat; // @synthesize adFormat=_adFormat;
@property(copy, nonatomic) NSString *adUnitIdentifier; // @synthesize adUnitIdentifier=_adUnitIdentifier;
@property(copy, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(nonatomic) __weak ALLogger *logger; // @synthesize logger=_logger;
@property(nonatomic) __weak ALSdk *sdk; // @synthesize sdk=_sdk;
- (void).cxx_destruct;
- (void)setExtraParameterValue:(id)arg1 forKey:(id)arg2;
- (id)initWithAdUnitIdentifier:(id)arg1 adFormat:(id)arg2 tag:(id)arg3 sdk:(id)arg4;

@end

