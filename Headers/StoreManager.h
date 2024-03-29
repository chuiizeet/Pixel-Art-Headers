//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SKProductsRequestDelegate-Protocol.h"
#import "SKRequestDelegate-Protocol.h"

@class NSMutableArray, NSString;

@interface StoreManager : NSObject <SKRequestDelegate, SKProductsRequestDelegate>
{
    long long _status;
    NSMutableArray *_availableProducts;
    NSMutableArray *_invalidProductIds;
    NSString *_errorMessage;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(retain, nonatomic) NSMutableArray *invalidProductIds; // @synthesize invalidProductIds=_invalidProductIds;
@property(retain, nonatomic) NSMutableArray *availableProducts; // @synthesize availableProducts=_availableProducts;
@property(nonatomic) long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (id)titleMatchingProductIdentifier:(id)arg1;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (void)fetchProductInformationForIds:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

