//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ALLogger, ALSdk, NSMutableDictionary, NSString;

@interface ALSettingsManager : NSObject
{
    ALSdk *_sdk;
    NSMutableDictionary *_allSettings;
    NSString *_settingsKey;
}

@property(copy, nonatomic) NSString *settingsKey; // @synthesize settingsKey=_settingsKey;
@property(retain, nonatomic) NSMutableDictionary *allSettings; // @synthesize allSettings=_allSettings;
@property(retain, nonatomic) ALSdk *sdk; // @synthesize sdk=_sdk;
- (void).cxx_destruct;
@property(retain, nonatomic) ALLogger *logger; // @dynamic logger;
- (void)clearAll;
- (void)clear:(id)arg1;
- (void)loadFromUserSettings:(id)arg1;
- (void)persistAll;
- (void)loadFromServer:(id)arg1;
- (void)loadAll;
- (void)putNumber:(id)arg1 forKey:(id)arg2;
- (void)putBool:(_Bool)arg1 forKey:(id)arg2;
- (void)putLong:(long long)arg1 forKey:(id)arg2;
- (void)putInt:(int)arg1 forKey:(id)arg2;
- (void)putString:(id)arg1 forKey:(id)arg2;
- (id)constraintsForKeys:(id)arg1 variableBindings:(id)arg2;
- (id)numberForKey:(id)arg1;
- (_Bool)boolForKey:(id)arg1;
- (double)timeIntervalForKey:(id)arg1;
- (long long)integerForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (id)settingForName:(id)arg1 defaultValue:(id)arg2;
- (id)initWithSdk:(id)arg1;

@end
