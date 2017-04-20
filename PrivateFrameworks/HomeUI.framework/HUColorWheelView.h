/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUColorWheelView : UIView {
    <HUColorWheelSpace> * _colorWheelSpace;
    float  _wheelHoleRadius;
}

@property (nonatomic, retain) <HUColorWheelSpace> *colorWheelSpace;
@property (nonatomic) float wheelHoleRadius;

+ (float)_colorWheelRenderingScale;

- (void).cxx_destruct;
- (float)_outerRadius;
- (struct { float x1; float x2; })colorWheelCoordinateForPoint:(struct CGPoint { float x1; float x2; })arg1 boundedToWheel:(BOOL)arg2;
- (id)colorWheelSpace;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithColorWheelSpace:(id)arg1;
- (struct CGPoint { float x1; float x2; })pointForColorWheelCoordinate:(struct { float x1; float x2; })arg1;
- (void)setColorWheelSpace:(id)arg1;
- (void)setWheelHoleRadius:(float)arg1;
- (id)wheelBezierPath;
- (float)wheelHoleRadius;

@end