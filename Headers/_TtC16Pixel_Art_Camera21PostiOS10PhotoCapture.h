//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AVCapturePhotoCaptureDelegate-Protocol.h"

@interface _TtC16Pixel_Art_Camera21PostiOS10PhotoCapture : NSObject <AVCapturePhotoCaptureDelegate>
{
    // Error parsing type: , name: sessionQueue
    // Error parsing type: , name: session
    // Error parsing type: , name: deviceInput
    // Error parsing type: , name: photoOutput
    // Error parsing type: , name: isPreviewSetup
    // Error parsing type: , name: previewView
    // Error parsing type: , name: videoLayer
    // Error parsing type: , name: currentFlashMode
    // Error parsing type: , name: block
}

- (void).cxx_destruct;
- (id)init;
- (void)captureOutput:(id)arg1 didFinishProcessingPhotoSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 previewPhotoSampleBuffer:(struct opaqueCMSampleBuffer *)arg3 resolvedSettings:(id)arg4 bracketSettings:(id)arg5 error:(id)arg6;
- (void)captureOutput:(id)arg1 didFinishProcessingPhoto:(id)arg2 error:(id)arg3;

@end
