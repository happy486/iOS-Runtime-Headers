/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotosSharingViewController : UIViewController <PHAssetCollectionDataSource, PLDismissableViewController, PUActivityViewControllerDelegate, PUOneUpAssetTransitionViewController, PUOneUpPhotosSharingTransitionViewController, PUPhotoViewContentHelperDelegate, PUPhotosSharingCollectionViewLayoutDelegate, PUPhotosSharingTransitionViewController, PUScrollViewSpeedometerDelegate, PUTransitionViewAnimatorDelegate, PXPhotoLibraryUIChangeObserver, UIActivityViewControllerDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UIGestureRecognizerDelegate> {
    PXAssetBadgeManager * __badgeManager;
    PHCachingImageManager * __cachingImageManager;
    PUActivityViewController * __embeddedActivityViewController;
    PHAsset * __lastKnownReferenceAsset;
    NSIndexPath * __lastKnownReferenceIndexPath;
    PUTransitionViewAnimator * __photoZoomAnimator;
    PUPhotosZoomingSharingGridCell * __photoZoomCell;
    PUPhotoPinchGestureRecognizer * __photoZoomPinchGestureRecognizer;
    id /* block */  __pptOnDidEndScrollingBlock;
    NSMutableSet * __preheatedAssets;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  __previousPreheatRect;
    UICollectionViewLayout * __transitionLayout;
    PUActivityViewController * __unembeddedActivityViewController;
    BOOL  __viewInSyncWithModel;
    struct __CFString { } * _aggregateKey;
    BOOL  _allowAirPlayActivity;
    NSMutableDictionary * _assetItemsByAssetIdentifier;
    PUOneUpAssetTransitionInfo * _assetTransitionInfo;
    float  _cachedEmbeddedActivityViewHeight;
    UIBarButtonItem * _cancelButton;
    BOOL  _defaultIrisEnabled;
    <PUPhotosSharingViewControllerDelegate> * _delegate;
    BOOL  _didAttemptShareViaAirDrop;
    UIBarButtonItem * _doneButton;
    UIView * _embeddedActivityView;
    NSArray * _excludedActivityTypes;
    NSPredicate * _filterPredicate;
    NSIndexPath * _inFlightReferenceIndexPath;
    BOOL  _inFlightRotation;
    NSMapTable * _indexPathsByOptionView;
    BOOL  _lockScreenCamera;
    UICollectionView * _mainCollectionView;
    PUPhotosSharingCollectionViewLayout * _mainCollectionViewLayout;
    UIBarButtonItem * _nextButton;
    PHPerson * _person;
    PHFetchResult * _photoCollectionsFetchResult;
    PUPhotoSelectionManager * _photoSelectionManager;
    PUPhotosSharingTransitionContext * _photosSharingTransitionContext;
    NSMutableDictionary * _resultsForAssetCollection;
    BOOL  _shouldPlayVitalityHintAfterViewDidAppear;
    BOOL  _shouldScrollToSelection;
    PUPhotosSharingViewControllerSpec * _spec;
    PUScrollViewSpeedometer * _speedometer;
    UITapGestureRecognizer * _tapGestureRecognizer;
}

@property (nonatomic, readonly) PUActivityViewController *_activityViewController;
@property (nonatomic, readonly) PXAssetBadgeManager *_badgeManager;
@property (nonatomic, readonly) PHCachingImageManager *_cachingImageManager;
@property (setter=_setEmbeddedActivityViewController:, nonatomic, retain) PUActivityViewController *_embeddedActivityViewController;
@property (setter=_setLastKnownReferenceAsset:, nonatomic, retain) PHAsset *_lastKnownReferenceAsset;
@property (setter=_setLastKnownReferenceIndexPath:, nonatomic, retain) NSIndexPath *_lastKnownReferenceIndexPath;
@property (setter=_setPhotoZoomAnimator:, nonatomic, retain) PUTransitionViewAnimator *_photoZoomAnimator;
@property (setter=_setPhotoZoomCell:, nonatomic, retain) PUPhotosZoomingSharingGridCell *_photoZoomCell;
@property (setter=_setPhotoZoomPinchGestureRecognizer:, nonatomic, retain) PUPhotoPinchGestureRecognizer *_photoZoomPinchGestureRecognizer;
@property (setter=_pptSetOnDidEndScrollingBlock:, nonatomic, copy) id /* block */ _pptOnDidEndScrollingBlock;
@property (setter=_setPreheatedAssets:, nonatomic, retain) NSMutableSet *_preheatedAssets;
@property (setter=_setPreviousPreheatRect:, nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } _previousPreheatRect;
@property (setter=_setTransitionLayout:, nonatomic, retain) UICollectionViewLayout *_transitionLayout;
@property (setter=_setUnembeddedActivityViewController:, nonatomic, retain) PUActivityViewController *_unembeddedActivityViewController;
@property (getter=_isViewInSyncWithModel, setter=_setViewInSyncWithModel:, nonatomic) BOOL _viewInSyncWithModel;
@property (nonatomic, retain) struct __CFString { }*aggregateKey;
@property (nonatomic) BOOL allowAirPlayActivity;
@property (nonatomic, readonly) PHFetchResult *assetCollectionsFetchResult;
@property (nonatomic, retain) PUOneUpAssetTransitionInfo *assetTransitionInfo;
@property (nonatomic, readonly) PHAsset *currentAsset;
@property (nonatomic, readonly) NSIndexPath *currentIndexPath;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUPhotosSharingViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (setter=_setEmbeddedActivityView:, nonatomic, retain) UIView *embeddedActivityView;
@property (nonatomic, copy) NSArray *excludedActivityTypes;
@property (nonatomic, readonly) NSPredicate *filterPredicate;
@property (readonly) unsigned int hash;
@property (getter=isLockScreenCamera, nonatomic) BOOL lockScreenCamera;
@property (setter=_setMainCollectionView:, nonatomic, retain) UICollectionView *mainCollectionView;
@property (setter=_setMainCollectionViewLayout:, nonatomic, retain) PUPhotosSharingCollectionViewLayout *mainCollectionViewLayout;
@property (nonatomic, retain) PHPerson *person;
@property (nonatomic, readonly) PHFetchResult *photoCollectionsFetchResult;
@property (nonatomic, retain) PUPhotoSelectionManager *photoSelectionManager;
@property (nonatomic, retain) PUPhotosSharingTransitionContext *photosSharingTransitionContext;
@property (nonatomic, retain) PUPhotosSharingViewControllerSpec *spec;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_activityAssetItemForAsset:(id)arg1 createIfNecessary:(BOOL)arg2;
- (id)_activityViewController;
- (void)_activityViewControllerDidDismissWithActivityType:(id)arg1 didComplete:(BOOL)arg2;
- (void)_addActivityAssetItem:(id)arg1;
- (id)_assetAtIndexPath:(id)arg1;
- (id)_badgeManager;
- (void)_beginZoomingForCellAtIndexPath:(id)arg1;
- (id)_cachingImageManager;
- (void)_cancel:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_collectionViewContentFrame;
- (id)_currentSelectedAssets;
- (id)_embeddedActivityViewController;
- (BOOL)_embedsActivityView;
- (void)_endZoomingForCell;
- (id)_firstSelectedIndexPath;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameAtIndexPath:(id)arg1 inView:(id)arg2;
- (void)_getFirstValidIndexPath:(id*)arg1 lastValidIndexPath:(id*)arg2;
- (void)_getMainCollectionViewFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg1 collectionViewLayoutInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; }*)arg2 embeddedActivityViewFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg3;
- (void)_handleLivePhotoRequestResult:(id)arg1 forCell:(id)arg2 tag:(int)arg3;
- (void)_handlePhotoPinch:(id)arg1;
- (void)_handleSelectionOption:(id)arg1;
- (void)_handleTapAtIndexPath:(id)arg1;
- (void)_handleTapInMainCollectionView:(id)arg1;
- (float)_horizontalOffsetInCollectionView:(id)arg1 forCenteringOnItemAtIndexPath:(id)arg2;
- (unsigned int)_indexForPhotoCollection:(id)arg1;
- (id)_indexPathInCollectionView:(id)arg1 closestToContentOffsetX:(float)arg2;
- (id)_indexPathInCollectionView:(id)arg1 closestToPoint:(struct CGPoint { float x1; float x2; })arg2;
- (id)_indexPathOfAsset:(id)arg1 sectionHint:(int)arg2;
- (id)_indexPathOfCenterVisibleItemInCollectionView:(id)arg1;
- (BOOL)_isAnyAssetSelected;
- (BOOL)_isViewInSyncWithModel;
- (id)_lastKnownReferenceAsset;
- (id)_lastKnownReferenceIndexPath;
- (id)_localizedSelectionTitle;
- (void)_next:(id)arg1;
- (int)_numberOfItemsInSection:(int)arg1;
- (int)_numberOfSections;
- (id)_optionViewAtIndexPath:(id)arg1 forCollectionView:(id)arg2;
- (void)_pageToIndexPath:(id)arg1 animated:(BOOL)arg2;
- (id)_photoCollectionAtIndex:(int)arg1;
- (id)_photoZoomAnimator;
- (id)_photoZoomCell;
- (id)_photoZoomPinchGestureRecognizer;
- (void)_playLivePhotoHintIfNeededAtIndexPath:(id)arg1;
- (id /* block */)_pptOnDidEndScrollingBlock;
- (void)_pptSetOnDidEndScrollingBlock:(id /* block */)arg1;
- (id)_preheatedAssets;
- (void)_prepareActivityViewControllerForUse;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_previousPreheatRect;
- (void)_processCollectionListChangeNotifications:(id)arg1 singleCollectionNotifications:(id)arg2 needsReloadData:(BOOL)arg3;
- (void)_removeActivityAssetItem:(id)arg1;
- (id)_requiredActivityViewController;
- (void)_resetPreheating;
- (id)_selectionViewAtIndexPath:(id)arg1 forCollectionView:(id)arg2;
- (void)_setEmbeddedActivityView:(id)arg1;
- (void)_setEmbeddedActivityViewController:(id)arg1;
- (void)_setLastKnownReferenceAsset:(id)arg1;
- (void)_setLastKnownReferenceAsset:(id)arg1 indexPath:(id)arg2;
- (void)_setLastKnownReferenceIndexPath:(id)arg1;
- (void)_setMainCollectionView:(id)arg1;
- (void)_setMainCollectionViewLayout:(id)arg1;
- (void)_setPhotoZoomAnimator:(id)arg1;
- (void)_setPhotoZoomCell:(id)arg1;
- (void)_setPhotoZoomPinchGestureRecognizer:(id)arg1;
- (void)_setPreheatedAssets:(id)arg1;
- (void)_setPreviousPreheatRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_setSelected:(BOOL)arg1 atIndexPath:(id)arg2 animated:(BOOL)arg3;
- (void)_setTransitionLayout:(id)arg1;
- (void)_setUnembeddedActivityViewController:(id)arg1;
- (void)_setViewInSyncWithModel:(BOOL)arg1;
- (BOOL)_shouldShowAsset:(id)arg1;
- (struct CGSize { float x1; float x2; })_sizeForItemAtIndexPath:(id)arg1;
- (void)_statusBarFrameDidChange:(id)arg1;
- (void)_statusBarFrameWillChange:(id)arg1;
- (id)_transitionLayout;
- (id)_unembeddedActivityViewController;
- (void)_updateCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)_updateEmbeddedActivityViewAppearance;
- (void)_updateInterfaceForModelReloadAnimated:(BOOL)arg1;
- (void)_updateLastKnownReferenceIndexPath;
- (void)_updateLivePhotoForAsset:(id)arg1 cell:(id)arg2;
- (void)_updateMainViewAnimated:(BOOL)arg1;
- (void)_updateNavigationBarAnimated:(BOOL)arg1;
- (void)_updateOptionView:(id)arg1 atIndexPath:(id)arg2;
- (void)_updatePeripheralInterfaceAnimated:(BOOL)arg1;
- (void)_updatePhotoForAsset:(id)arg1 cell:(id)arg2 atIndexPath:(id)arg3;
- (void)_updatePreheatedAssets;
- (id)_updatedActivityAssetItemsForAssets:(id)arg1;
- (id)_validIndexPathFromIndexPath:(id)arg1;
- (BOOL)activityViewControllerShouldCancelAfterPreparationCanceled:(id)arg1;
- (void)activityViewControllerWillStartAirdropTransfer:(id)arg1;
- (struct __CFString { }*)aggregateKey;
- (BOOL)allowAirPlayActivity;
- (id)assetCollectionsFetchResult;
- (id)assetTransitionInfo;
- (id)assetsInAssetCollection:(id)arg1;
- (BOOL)automaticallyAdjustsScrollViewInsets;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingSupplementaryView:(id)arg2 forElementOfKind:(id)arg3 atIndexPath:(id)arg4;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)currentAsset;
- (id)currentIndexPath;
- (void)dealloc;
- (id)delegate;
- (id)embeddedActivityView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })embeddedActivityViewFrameWhenShowing:(BOOL)arg1;
- (id)excludedActivityTypes;
- (id)filterPredicate;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForBadgeOfKind:(id)arg1 forItemFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 atIndexPath:(id)arg3;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithPhotoCollectionsFetchResult:(id)arg1 assetsFetchResults:(id)arg2 filterPredicate:(id)arg3 selection:(id)arg4;
- (BOOL)isLockScreenCamera;
- (float)layout:(id)arg1 collectionView:(id)arg2 bottomBadgeInsetforItemAtIndexPath:(id)arg3;
- (void)layout:(id)arg1 collectionView:(id)arg2 itemAtIndexPath:(id)arg3 didChangeToVisibleFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4;
- (id)layout:(id)arg1 collectionView:(id)arg2 referenceIndexPathWithOffsetX:(float*)arg3;
- (struct CGSize { float x1; float x2; })layout:(id)arg1 collectionView:(id)arg2 sizeForBadgeViewOfKind:(id)arg3 forItemAtIndexPath:(id)arg4;
- (struct CGSize { float x1; float x2; })layout:(id)arg1 collectionView:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)mainCollectionView;
- (id)mainCollectionViewLayout;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (void)oneUpAssetTransition:(id)arg1 requestTransitionContextWithCompletion:(id /* block */)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })oneUpAssetTransitionAssetFinalFrame:(id)arg1;
- (id)person;
- (id)photoCollectionsFetchResult;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (id)photoSelectionManager;
- (void)photoViewContentHelper:(id)arg1 livePhotoWillBeginPlaybackWithStyle:(int)arg2;
- (id)photosSharingTransitionContext;
- (void)ppt_faultInScollViewContentSize;
- (BOOL)ppt_scrollToAssetAtRelativeIndex:(int)arg1 completion:(id /* block */)arg2;
- (id)ppt_scrollView;
- (BOOL)prepareForDismissingForced:(BOOL)arg1;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewSpeedometer:(id)arg1 regimeDidChange:(int)arg2 from:(int)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { float x1; float x2; })arg2 targetContentOffset:(inout struct CGPoint { float x1; float x2; }*)arg3;
- (void)setAggregateKey:(struct __CFString { }*)arg1;
- (void)setAllowAirPlayActivity:(BOOL)arg1;
- (void)setAssetTransitionInfo:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExcludedActivityTypes:(id)arg1;
- (void)setLockScreenCamera:(BOOL)arg1;
- (void)setOneUpPhotosSharingTransitionContext:(id)arg1;
- (void)setOneUpPhotosSharingTransitionInfo:(id)arg1;
- (void)setPerson:(id)arg1;
- (void)setPhotoSelectionManager:(id)arg1;
- (void)setPhotosSharingTransitionContext:(id)arg1;
- (void)setPhotosSharingTransitionLayout:(id)arg1 animated:(BOOL)arg2;
- (void)setSpec:(id)arg1;
- (id)spec;
- (id)transitionCollectionView;
- (void)transitionViewAnimatorDidEnd:(id)arg1 finished:(BOOL)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
