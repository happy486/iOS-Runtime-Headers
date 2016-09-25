/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPCaptionBarPresentationProperties : NSObject {
    LPCaptionRowPresentationProperties * _aboveTop;
    LPCaptionRowPresentationProperties * _belowBottom;
    LPCaptionRowPresentationProperties * _bottom;
    int  _leadingAccessoryType;
    LPImage * _leadingIcon;
    UIColor * _leadingIconMaskColor;
    LPCaptionRowPresentationProperties * _top;
    int  _trailingAccessoryType;
    LPImage * _trailingIcon;
    UIColor * _trailingIconMaskColor;
}

@property (nonatomic, readonly, retain) LPCaptionRowPresentationProperties *aboveTop;
@property (nonatomic, readonly, retain) LPCaptionRowPresentationProperties *belowBottom;
@property (nonatomic, readonly, retain) LPCaptionRowPresentationProperties *bottom;
@property (nonatomic) int leadingAccessoryType;
@property (nonatomic, retain) LPImage *leadingIcon;
@property (nonatomic, retain) UIColor *leadingIconMaskColor;
@property (nonatomic, readonly, retain) LPCaptionRowPresentationProperties *top;
@property (nonatomic) int trailingAccessoryType;
@property (nonatomic, retain) LPImage *trailingIcon;
@property (nonatomic, retain) UIColor *trailingIconMaskColor;

- (void).cxx_destruct;
- (id)aboveTop;
- (id)belowBottom;
- (id)bottom;
- (BOOL)hasAnyContent;
- (id)init;
- (int)leadingAccessoryType;
- (id)leadingIcon;
- (id)leadingIconMaskColor;
- (void)setLeadingAccessoryType:(int)arg1;
- (void)setLeadingIcon:(id)arg1;
- (void)setLeadingIconMaskColor:(id)arg1;
- (void)setTrailingAccessoryType:(int)arg1;
- (void)setTrailingIcon:(id)arg1;
- (void)setTrailingIconMaskColor:(id)arg1;
- (id)top;
- (int)trailingAccessoryType;
- (id)trailingIcon;
- (id)trailingIconMaskColor;

@end