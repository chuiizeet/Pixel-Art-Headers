//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIActivityIndicatorView;

@interface UIViewController (ALUtils)
+ (id)al_instantiateFromStoryboardName:(id)arg1;
- (void)showAlertWithTitle:(id)arg1 message:(id)arg2;
- (void)al_removeActivityIndicator;
- (void)al_showActivityIndicator;
@property(retain, nonatomic) UIActivityIndicatorView *al_activityIndicator; // @dynamic al_activityIndicator;
@end
