/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class CKService, UILabel, CKDashedLineView;

@interface CKServiceView : CKTranscriptCell  {
    CKService *_service;
    CKDashedLineView *_dashedLineView;
    UILabel *_label;
}


- (void)setService:(id)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)dealloc;

@end