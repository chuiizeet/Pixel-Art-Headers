//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPUImageFilter.h"

@interface CQ : GPUImageFilter
{
    int gl_nbins;
    int gl_nbins2;
    int gl_phi_q;
    int gl_q_ceil;
    int gl_q2_factor;
    int gl_q3_factor;
    int _nbins;
    int _nbins2;
    float _phi_q;
    float _q_ceil;
    float _q2_factor;
    float _q3_factor;
}

@property(nonatomic) float q3_factor; // @synthesize q3_factor=_q3_factor;
@property(nonatomic) float q2_factor; // @synthesize q2_factor=_q2_factor;
@property(nonatomic) float q_ceil; // @synthesize q_ceil=_q_ceil;
@property(nonatomic) float phi_q; // @synthesize phi_q=_phi_q;
@property(nonatomic) int nbins2; // @synthesize nbins2=_nbins2;
@property(nonatomic) int nbins; // @synthesize nbins=_nbins;
- (id)init;

@end

