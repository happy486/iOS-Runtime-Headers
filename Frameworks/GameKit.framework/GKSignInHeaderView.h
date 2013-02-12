/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKCoreTextLabel, NSString, UIImageView, UILabel;

@interface GKSignInHeaderView : UIView <GKTableViewCellContents> {
    float _adjustYOffset;
    UIImageView *_iconView;
    NSString *_message;
    GKCoreTextLabel *_messageLabel;
    NSString *_title;
    UILabel *_titleLabel;
}

@property float adjustYOffset;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } confirmationButtonRect;
@property(retain) UIImageView * iconView;
@property(retain) NSString * message;
@property(retain) GKCoreTextLabel * messageLabel;
@property(retain) NSString * title;
@property(retain) UILabel * titleLabel;

- (float)adjustYOffset;
- (void)dealloc;
- (id)iconView;
- (id)init;
- (void)layoutSubviews;
- (void)layoutSubviewsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviewsWithYOffset:(float)arg1;
- (id)message;
- (id)messageLabel;
- (float)preferredHeightForOrientation:(int)arg1;
- (void)prepareForReuse;
- (void)setAdjustYOffset:(float)arg1;
- (void)setIconView:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setMessageLabel:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)theme;
- (id)title;
- (id)titleLabel;

@end