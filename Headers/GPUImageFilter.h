//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPUImageOutput.h"

#import "GPUImageInput-Protocol.h"

@class GLProgram, GPUImageFramebuffer, NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_semaphore;

@interface GPUImageFilter : GPUImageOutput <GPUImageInput>
{
    GPUImageFramebuffer *firstInputFramebuffer;
    GLProgram *filterProgram;
    int filterPositionAttribute;
    int filterTextureCoordinateAttribute;
    int filterInputTextureUniform;
    float backgroundColorRed;
    float backgroundColorGreen;
    float backgroundColorBlue;
    float backgroundColorAlpha;
    _Bool isEndProcessing;
    struct CGSize currentFilterSize;
    unsigned long long inputRotation;
    _Bool currentlyReceivingMonochromeInput;
    NSMutableDictionary *uniformStateRestorationBlocks;
    NSObject<OS_dispatch_semaphore> *imageCaptureSemaphore;
    _Bool _preventRendering;
    struct __CVBuffer *_renderTarget;
}

+ (const float *)textureCoordinatesForRotation:(unsigned long long)arg1;
@property(readonly) struct __CVBuffer *renderTarget; // @synthesize renderTarget=_renderTarget;
@property(nonatomic) _Bool currentlyReceivingMonochromeInput; // @synthesize currentlyReceivingMonochromeInput;
@property(nonatomic) _Bool preventRendering; // @synthesize preventRendering=_preventRendering;
- (void).cxx_destruct;
- (_Bool)wantsMonochromeInput;
- (void)endProcessing;
- (struct CGSize)maximumOutputSize;
- (void)forceProcessingAtSizeRespectingAspectRatio:(struct CGSize)arg1;
- (void)forceProcessingAtSize:(struct CGSize)arg1;
- (void)setInputRotation:(unsigned long long)arg1 atIndex:(long long)arg2;
- (void)setInputSize:(struct CGSize)arg1 atIndex:(long long)arg2;
- (struct CGPoint)rotatedPoint:(struct CGPoint)arg1 forRotation:(unsigned long long)arg2;
- (struct CGSize)rotatedSize:(struct CGSize)arg1 forIndex:(long long)arg2;
- (void)setInputFramebuffer:(id)arg1 atIndex:(long long)arg2;
- (long long)nextAvailableTextureIndex;
- (void)newFrameReadyAtTime:(CDStruct_1b6d18a9)arg1 atIndex:(long long)arg2;
- (void)setUniformsForProgramAtIndex:(unsigned long long)arg1;
- (void)setAndExecuteUniformStateCallbackAtIndex:(int)arg1 forProgram:(id)arg2 toBlock:(CDUnknownBlockType)arg3;
- (void)setInteger:(int)arg1 forUniform:(int)arg2 program:(id)arg3;
- (void)setFloatArray:(float *)arg1 length:(int)arg2 forUniform:(int)arg3 program:(id)arg4;
- (void)setVec4:(struct GPUVector4)arg1 forUniform:(int)arg2 program:(id)arg3;
- (void)setVec3:(struct GPUVector3)arg1 forUniform:(int)arg2 program:(id)arg3;
- (void)setSize:(struct CGSize)arg1 forUniform:(int)arg2 program:(id)arg3;
- (void)setPoint:(struct CGPoint)arg1 forUniform:(int)arg2 program:(id)arg3;
- (void)setFloat:(float)arg1 forUniform:(int)arg2 program:(id)arg3;
- (void)setMatrix4f:(struct GPUMatrix4x4)arg1 forUniform:(int)arg2 program:(id)arg3;
- (void)setMatrix3f:(struct GPUMatrix3x3)arg1 forUniform:(int)arg2 program:(id)arg3;
- (void)setFloatArray:(float *)arg1 length:(int)arg2 forUniform:(id)arg3;
- (void)setFloatVec4:(struct GPUVector4)arg1 forUniform:(id)arg2;
- (void)setFloatVec3:(struct GPUVector3)arg1 forUniformName:(id)arg2;
- (void)setPoint:(struct CGPoint)arg1 forUniformName:(id)arg2;
- (void)setSize:(struct CGSize)arg1 forUniformName:(id)arg2;
- (void)setFloat:(float)arg1 forUniformName:(id)arg2;
- (void)setInteger:(int)arg1 forUniformName:(id)arg2;
- (void)setBackgroundColorRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
- (struct CGSize)outputFrameSize;
- (void)informTargetsAboutNewFrameAtTime:(CDStruct_1b6d18a9)arg1;
- (void)renderToTextureWithVertices:(const float *)arg1 textureCoordinates:(const float *)arg2;
- (struct CGSize)sizeOfFBO;
- (struct CGImage *)newCGImageFromCurrentlyProcessedOutput;
- (void)useNextFrameForImageCapture;
- (void)dealloc;
- (void)setupFilterForSize:(struct CGSize)arg1;
- (void)initializeAttributes;
- (id)init;
- (id)initWithFragmentShaderFromFile:(id)arg1;
- (id)initWithFragmentShaderFromString:(id)arg1;
- (id)initWithVertexShaderFromString:(id)arg1 fragmentShaderFromString:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

