//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ALVideoView, AVAsset, AVPlayer, AVPlayerItem;

@interface ALVideoPlayer : NSObject
{
    ALVideoView *_videoView;
    AVPlayerItem *_playerItem;
    AVAsset *_playerAsset;
    AVPlayer *_player;
}

@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) AVAsset *playerAsset; // @synthesize playerAsset=_playerAsset;
@property(retain, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(retain, nonatomic) ALVideoView *videoView; // @synthesize videoView=_videoView;
- (void).cxx_destruct;
@property(readonly, nonatomic) double durationSeconds; // @dynamic durationSeconds;
- (void)teardown;
- (void)pauseVideo;
- (void)playVideo;
- (id)initWithMediaSource:(id)arg1;

@end

