//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

@class UIView;

@interface _TtC16Pixel_Art_Camera13YPImagePicker : UINavigationController
{
    // Error parsing type: , name: didSelectImage
    // Error parsing type: , name: didSelectVideo
    // Error parsing type: , name: didCancel
    // Error parsing type: , name: NoPermissionView
    // Error parsing type: , name: _didFinishPicking
    // Error parsing type: , name: loadingView
    // Error parsing type: , name: picker
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithRootViewController:(id)arg1;
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;
- (void)NotAuthorizedWithNew_view:(id)arg1;
- (void)DidAuthorize;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)init;
@property(nonatomic, readonly) long long preferredStatusBarStyle;
@property(nonatomic, retain) UIView *NoPermissionView; // @synthesize NoPermissionView;
@property(nonatomic, copy) CDUnknownBlockType didCancel; // @synthesize didCancel;
@property(nonatomic, copy) CDUnknownBlockType didSelectVideo; // @synthesize didSelectVideo;
@property(nonatomic, copy) CDUnknownBlockType didSelectImage; // @synthesize didSelectImage;

@end

