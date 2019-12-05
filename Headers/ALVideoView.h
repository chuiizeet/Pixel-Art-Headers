//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class ALClickTrackingOverlayView, AVPlayer, AVPlayerLayer;

@interface ALVideoView : UIView
{
    _Bool _adDismissed;
    ALClickTrackingOverlayView *_trackingOverlay;
}

+ (Class)layerClass;
@property(retain, nonatomic) ALClickTrackingOverlayView *trackingOverlay; // @synthesize trackingOverlay=_trackingOverlay;
@property(getter=isAdDismissed) _Bool adDismissed; // @synthesize adDismissed=_adDismissed;
- (void).cxx_destruct;
- (void)removeClickTrackingOverlay;
- (void)showClickTrackingOverlay;
- (void)setPlayer:(id)arg1;
@property(readonly, nonatomic) AVPlayer *player; // @dynamic player;
@property(readonly, nonatomic) AVPlayerLayer *playerLayer; // @dynamic playerLayer;
- (id)initWithPlayer:(id)arg1;

@end
