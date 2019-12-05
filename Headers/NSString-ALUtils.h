//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@class NSNumber, NSURL, NSURLRequest;

@interface NSString (ALUtils)
+ (id)al_stringWithBool:(_Bool)arg1;
+ (id)al_stringByHexEncodingCharBuffer:(char *)arg1 length:(unsigned long long)arg2;
- (id)al_prefixToIndex:(unsigned long long)arg1;
@property(readonly, getter=al_isValidResourceURL) _Bool al_validResourceURL; // @dynamic al_validResourceURL;
@property(readonly, getter=al_isValidURL) _Bool al_validURL; // @dynamic al_validURL;
@property(readonly, copy, nonatomic) NSString *al_stringByTrimmingWhitespace;
@property(readonly, copy, nonatomic) NSString *al_stringByRemovingSpaces; // @dynamic al_stringByRemovingSpaces;
@property(readonly, copy, nonatomic) NSString *al_stringByRemovingWhitespace; // @dynamic al_stringByRemovingWhitespace;
- (id)al_trimmedComponentsSeparatedByString:(id)arg1;
- (id)al_stringBySafeEncodingBase64;
@property(readonly) struct _NSRange al_containingRange; // @dynamic al_containingRange;
@property(readonly, nonatomic, getter=al_isNumeric) _Bool al_numeric; // @dynamic al_numeric;
@property(readonly, copy, nonatomic) NSURLRequest *al_URLRequest;
@property(readonly, copy, nonatomic, getter=al_asURL) NSURL *al_URL;
@property(readonly) __weak NSNumber *al_numberValue; // @dynamic al_numberValue;
- (_Bool)al_isEqualToStringIgnoringCase:(id)arg1;
- (id)al_stringByHashingStringUsingEncoding:(unsigned long long)arg1;
- (id)al_stringByReplacingOccurrencesOfStringsInDictionary:(id)arg1 options:(unsigned long long)arg2;
- (id)al_stringByReplacingOccurrencesOfStringsInDictionary:(id)arg1;
@property(readonly, copy, nonatomic) NSString *al_stringByURLEncodingString;
- (_Bool)al_containsSubstringIgnoringCase:(id)arg1;
- (_Bool)al_containsSubstring:(id)arg1;
@property(readonly, getter=al_isValidString) _Bool al_validString; // @dynamic al_validString;
@end

