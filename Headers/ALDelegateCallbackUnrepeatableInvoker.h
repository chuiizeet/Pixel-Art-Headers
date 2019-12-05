//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ALAtomicBoolean, ALBaseVideoViewController, ALSdk;
@protocol ALAdDisplayDelegate, ALAdVideoPlaybackDelegate;

@interface ALDelegateCallbackUnrepeatableInvoker : NSObject
{
    ALSdk *_sdk;
    ALBaseVideoViewController *_parentViewController;
    ALAtomicBoolean *_adDisplayedFired;
    ALAtomicBoolean *_adHiddenFired;
    ALAtomicBoolean *_videoPlaybackBeganFired;
    ALAtomicBoolean *_videoPlaybackEndedFired;
}

@property(retain) ALAtomicBoolean *videoPlaybackEndedFired; // @synthesize videoPlaybackEndedFired=_videoPlaybackEndedFired;
@property(retain) ALAtomicBoolean *videoPlaybackBeganFired; // @synthesize videoPlaybackBeganFired=_videoPlaybackBeganFired;
@property(retain) ALAtomicBoolean *adHiddenFired; // @synthesize adHiddenFired=_adHiddenFired;
@property(retain) ALAtomicBoolean *adDisplayedFired; // @synthesize adDisplayedFired=_adDisplayedFired;
@property(nonatomic) __weak ALBaseVideoViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property(nonatomic) __weak ALSdk *sdk; // @synthesize sdk=_sdk;
- (void).cxx_destruct;
@property __weak id <ALAdDisplayDelegate> adDisplayDelegate; // @dynamic adDisplayDelegate;
@property __weak id <ALAdVideoPlaybackDelegate> adVideoPlaybackDelegate; // @dynamic adVideoPlaybackDelegate;
- (void)handleVideoPlaybackEndedInAd:(id)arg1 atPlaybackPercent:(id)arg2 fullyWatched:(_Bool)arg3;
- (void)handleVideoPlaybackBeganInAd:(id)arg1;
- (void)handleAd:(id)arg1 wasClickedIn:(id)arg2;
- (void)handleAd:(id)arg1 wasHiddenIn:(id)arg2;
- (void)handleAd:(id)arg1 wasDisplayedIn:(id)arg2;
- (id)initWithParentVideoViewController:(id)arg1 sdk:(id)arg2;

@end

