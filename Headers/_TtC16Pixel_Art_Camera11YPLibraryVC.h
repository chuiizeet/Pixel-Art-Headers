//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "PHPhotoLibraryChangeObserver-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@interface _TtC16Pixel_Art_Camera11YPLibraryVC : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, PHPhotoLibraryChangeObserver>
{
    // Error parsing type: , name: delegate
    // Error parsing type: , name: v
    // Error parsing type: , name: isProcessing
    // Error parsing type: , name: multipleSelectionEnabled
    // Error parsing type: , name: initialized
    // Error parsing type: , name: selection
    // Error parsing type: , name: currentlySelectedIndex
    // Error parsing type: , name: mediaManager
    // Error parsing type: , name: latestImageTapped
    // Error parsing type: , name: panGestureHelper
    // Error parsing type: , name: NoPermissionView3
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tappedImage;
- (void)multipleSelectionButtonTapped;
- (void)squareCropButtonTapped;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)handleLongPressWithLongPressGR:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (_Bool)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)photoLibraryDidChange:(id)arg1;

@end
