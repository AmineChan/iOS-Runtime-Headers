/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXTilingLayout : NSObject {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _contentInset;
    PXTilingCoordinateSpace * _coordinateSpace;
    void * _coordinateSpaceIdentifier;
    <PXTilingLayoutObserver> * _observer;
    struct CGSize { 
        float width; 
        float height; 
    }  _referenceSize;
    PXTilingScrollInfo * _scrollInfo;
    struct CGPoint { 
        float x; 
        float y; 
    }  _visibleOrigin;
    struct CGSize { 
        float width; 
        float height; 
    }  _visibleSize;
}

@property (nonatomic, readonly) BOOL allowHorizontalFlip;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } contentBounds;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } contentInset;
@property (nonatomic, readonly) PXTilingCoordinateSpace *coordinateSpace;
@property (nonatomic, readonly) void*coordinateSpaceIdentifier;
@property (nonatomic) <PXTilingLayoutObserver> *observer;
@property (nonatomic) struct CGSize { float x1; float x2; } referenceSize;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } scrollBounds;
@property (nonatomic, readonly, copy) PXTilingScrollInfo *scrollInfo;
@property (nonatomic, readonly) BOOL shouldFlipHorizontally;
@property (nonatomic) struct CGPoint { float x1; float x2; } visibleOrigin;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } visibleRect;
@property (nonatomic) struct CGSize { float x1; float x2; } visibleSize;

- (void).cxx_destruct;
- (BOOL)allowHorizontalFlip;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentBounds;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentInset;
- (id)coordinateSpace;
- (void*)coordinateSpaceIdentifier;
- (void)enumerateTilesInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withOptions:(id)arg2 usingBlock:(id /* block */)arg3;
- (BOOL)getGeometry:(struct PXTileGeometry { struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_1_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_1_1_2; } x1; struct CGPoint { float x_2_1_1; float x_2_1_2; } x2; struct CGSize { float x_3_1_1; float x_3_1_2; } x3; struct CGAffineTransform { float x_4_1_1; float x_4_1_2; float x_4_1_3; float x_4_1_4; float x_4_1_5; float x_4_1_6; } x4; float x5; float x6; BOOL x7; struct CGSize { float x_8_1_1; float x_8_1_2; } x8; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_9_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_9_1_2; } x9; void *x10; }*)arg1 group:(unsigned int*)arg2 userData:(id*)arg3 forTileWithIdentifier:(struct PXTileIdentifier { unsigned int x1; unsigned int x2[10]; })arg4;
- (id)init;
- (void)invalidateLayout;
- (void)invalidateLayoutWithContext:(id)arg1;
- (id)observer;
- (void)prepareLayout;
- (struct CGSize { float x1; float x2; })referenceSize;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })scrollBounds;
- (id)scrollInfo;
- (void)setContentInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setObserver:(id)arg1;
- (void)setReferenceSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setVisibleOrigin:(struct CGPoint { float x1; float x2; })arg1;
- (void)setVisibleSize:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)shouldFlipHorizontally;
- (struct CGPoint { float x1; float x2; })visibleOrigin;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleRect;
- (struct CGSize { float x1; float x2; })visibleSize;

@end