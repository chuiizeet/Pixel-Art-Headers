//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ALDMediatedNetwork, NSArray, NSString, UIImage;

@interface ALDMediatedNetworkViewModel : NSObject
{
    NSArray *_integrationSection;
    NSArray *_permissionsSection;
    NSArray *_configurationSection;
    ALDMediatedNetwork *_network;
    UIImage *_checkmarkImage;
    UIImage *_xmarkImage;
}

+ (id)viewModelFromMediatedNetwork:(id)arg1;
@property(retain, nonatomic) UIImage *xmarkImage; // @synthesize xmarkImage=_xmarkImage;
@property(retain, nonatomic) UIImage *checkmarkImage; // @synthesize checkmarkImage=_checkmarkImage;
@property(retain, nonatomic) ALDMediatedNetwork *network; // @synthesize network=_network;
@property(retain, nonatomic) NSArray *configurationSection; // @synthesize configurationSection=_configurationSection;
@property(retain, nonatomic) NSArray *permissionsSection; // @synthesize permissionsSection=_permissionsSection;
@property(retain, nonatomic) NSArray *integrationSection; // @synthesize integrationSection=_integrationSection;
- (void).cxx_destruct;
- (id)iconTintColorForCheckedState:(_Bool)arg1;
- (id)iconForCheckedState:(_Bool)arg1;
- (id)cleartextTrafficCellViewModel;
- (id)cellViewModelForPermission:(id)arg1;
- (id)adapterIntegrationCellViewModel;
- (id)sdkIntegrationCellViewModel;
@property(readonly, copy, nonatomic) NSString *networkName;
- (id)initWithMediatedNetwork:(id)arg1;

@end
