/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class <MFMailComposeToFieldDelegate>, MFComposeSMIMELockButton;

@interface MFMailComposeToField : MFMailComposeRecipientView {
    MFComposeSMIMELockButton *_smimeButton;
    BOOL _smimeButtonVisible;
    <MFMailComposeToFieldDelegate> *_toFieldDelegate;
}

@property(readonly) MFComposeSMIMELockButton * SMIMEButton;
@property BOOL smimeButtonVisible;
@property <MFMailComposeToFieldDelegate> * toFieldDelegate;

- (id)SMIMEButton;
- (void)_setSMIMEButtonVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_tappedSMIMEButton:(id)arg1;
- (id)_textContainerExclusionPathsWithAddButton:(BOOL)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setFocused:(BOOL)arg1;
- (void)setSmimeButtonVisible:(BOOL)arg1;
- (void)setToFieldDelegate:(id)arg1;
- (BOOL)smimeButtonVisible;
- (id)toFieldDelegate;

@end