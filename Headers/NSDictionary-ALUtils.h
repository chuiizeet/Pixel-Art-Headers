//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSDictionary.h>

@interface NSDictionary (ALUtils)
@property(readonly, nonatomic, getter=al_isEmpty) _Bool al_empty; // @dynamic al_empty;
- (_Bool)al_containsValueForKey:(id)arg1;
- (_Bool)al_containsAtLeastOneValueForKeys:(id)arg1;
- (_Bool)al_containsValuesForKeys:(id)arg1;
- (id)al_objectForCaseInsensitiveKey:(id)arg1 defaultValue:(id)arg2;
- (id)al_objectForCaseInsensitiveKey:(id)arg1;
- (id)al_objectForKey:(id)arg1 defaultValue:(id)arg2;
- (id)al_dictionaryForKey:(id)arg1 defaultValue:(id)arg2;
- (id)al_dictionaryForKey:(id)arg1;
- (id)al_arrayForKey:(id)arg1 defaultValue:(id)arg2;
- (id)al_arrayForKey:(id)arg1;
- (id)al_stringForKey:(id)arg1 defaultValue:(id)arg2;
- (id)al_stringForKey:(id)arg1;
- (id)al_numberForKey:(id)arg1 defaultValue:(id)arg2;
- (id)al_numberForKey:(id)arg1;
@end

