/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBDisplayLayoutTransition : NSObject {
    unsigned int _displayType;
    int _interfaceOrientation;
    NSString *_name;
    NSString *_transitionReason;
    BOOL _transitioning;
}

@property (nonatomic, readonly) unsigned int displayType;
@property (nonatomic) int interfaceOrientation;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, copy) NSString *transitionReason;
@property (getter=isTransitioning, nonatomic, readonly) BOOL transitioning;

+ (void)flushLayoutForDisplayType:(unsigned int)arg1;
+ (BOOL)isTransitioningForDisplayType:(unsigned int)arg1;

- (void)beginTransition;
- (void)dealloc;
- (id)description;
- (unsigned int)displayType;
- (void)endTransition;
- (id)initWithDisplayType:(unsigned int)arg1 name:(id)arg2;
- (int)interfaceOrientation;
- (BOOL)isTransitioning;
- (id)name;
- (void)setInterfaceOrientation:(int)arg1;
- (void)setTransitionReason:(id)arg1;
- (id)transitionReason;

@end