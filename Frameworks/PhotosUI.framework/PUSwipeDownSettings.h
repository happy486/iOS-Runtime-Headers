/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSwipeDownSettings : PUSettings {
    float  _downGestureToleranceAngle;
    int  _downMotionType;
    float  _downResistanceDistance;
    int  _horizontalMotionType;
    float  _horizontalResistanceDistance;
    float  _rotationHorizontalMotionFactor;
    float  _rotationHorizontalMotionHysteresisDistance;
    float  _rotationMaximumAngle;
    BOOL  _rotationOnHorizontalMotion;
    BOOL  _rotationOnVerticalMotion;
    float  _rotationVerticalMotionAngle;
    float  _rotationVerticalMotionResistanceDistance;
    float  _scaleDownDistance;
    float  _scaleDownFactor;
    float  _transitionDistance;
    float  _upGestureToleranceAngle;
    int  _upMotionType;
    float  _upResistanceDistance;
}

@property (nonatomic) float downGestureToleranceAngle;
@property (nonatomic) int downMotionType;
@property (nonatomic) float downResistanceDistance;
@property (nonatomic) int horizontalMotionType;
@property (nonatomic) float horizontalResistanceDistance;
@property (nonatomic) float rotationHorizontalMotionFactor;
@property (nonatomic) float rotationHorizontalMotionHysteresisDistance;
@property (nonatomic) float rotationMaximumAngle;
@property (nonatomic) BOOL rotationOnHorizontalMotion;
@property (nonatomic) BOOL rotationOnVerticalMotion;
@property (nonatomic) float rotationVerticalMotionAngle;
@property (nonatomic) float rotationVerticalMotionResistanceDistance;
@property (nonatomic) float scaleDownDistance;
@property (nonatomic) float scaleDownFactor;
@property (nonatomic) float transitionDistance;
@property (nonatomic) float upGestureToleranceAngle;
@property (nonatomic) int upMotionType;
@property (nonatomic) float upResistanceDistance;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (float)downGestureToleranceAngle;
- (int)downMotionType;
- (float)downResistanceDistance;
- (int)horizontalMotionType;
- (float)horizontalResistanceDistance;
- (float)rotationHorizontalMotionFactor;
- (float)rotationHorizontalMotionHysteresisDistance;
- (float)rotationMaximumAngle;
- (BOOL)rotationOnHorizontalMotion;
- (BOOL)rotationOnVerticalMotion;
- (float)rotationVerticalMotionAngle;
- (float)rotationVerticalMotionResistanceDistance;
- (float)scaleDownDistance;
- (float)scaleDownFactor;
- (void)setDefaultValues;
- (void)setDownGestureToleranceAngle:(float)arg1;
- (void)setDownMotionType:(int)arg1;
- (void)setDownResistanceDistance:(float)arg1;
- (void)setHorizontalMotionType:(int)arg1;
- (void)setHorizontalResistanceDistance:(float)arg1;
- (void)setRotationHorizontalMotionFactor:(float)arg1;
- (void)setRotationHorizontalMotionHysteresisDistance:(float)arg1;
- (void)setRotationMaximumAngle:(float)arg1;
- (void)setRotationOnHorizontalMotion:(BOOL)arg1;
- (void)setRotationOnVerticalMotion:(BOOL)arg1;
- (void)setRotationVerticalMotionAngle:(float)arg1;
- (void)setRotationVerticalMotionResistanceDistance:(float)arg1;
- (void)setScaleDownDistance:(float)arg1;
- (void)setScaleDownFactor:(float)arg1;
- (void)setTransitionDistance:(float)arg1;
- (void)setUpGestureToleranceAngle:(float)arg1;
- (void)setUpMotionType:(int)arg1;
- (void)setUpResistanceDistance:(float)arg1;
- (float)transitionDistance;
- (float)upGestureToleranceAngle;
- (int)upMotionType;
- (float)upResistanceDistance;

@end
