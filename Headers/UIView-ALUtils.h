//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface UIView (ALUtils)
+ (id)al_instantiateFromXib;
- (void)al_removeAllSubviewsExcept:(id)arg1;
- (void)al_removeAllSubviews;
- (void)al_pinToSuperviewRespectingAutoresizingMaskWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 defaultHorizontalAttribute:(long long)arg3 defaultVerticalAttribute:(long long)arg4;
- (void)al_pinToSuperviewWithTop:(unsigned long long)arg1 left:(unsigned long long)arg2 bottom:(unsigned long long)arg3 right:(unsigned long long)arg4;
- (void)al_pinToSuperview;
- (void)al_pinToSuperviewRespectingVerticalSafeAreaLayoutGuide;
@property(readonly, nonatomic, getter=al_isAnimating) _Bool al_animating; // @dynamic al_animating;
@end
