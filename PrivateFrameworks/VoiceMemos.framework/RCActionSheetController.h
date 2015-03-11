/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSString, RCActionSheetAlertController, UIResponder, UIViewController;

@interface RCActionSheetController : NSObject <UIActionSheetDelegate> {
    UIViewController *_accessoryViewController;
    NSArray *_actionButtonTitles;
    id _actionHandlerBlock;
    RCActionSheetAlertController *_alertController;
    NSString *_alertMessage;
    NSString *_alertTitle;
    BOOL _autoDismissDisabled;
    NSString *_cancelButtonTitle;
    BOOL _dismissWhenDismissIsEnabled;
    BOOL _enabled;
    UIViewController *_modalItemPresentationViewController;
    UIResponder *_originalFirstResponder;
    BOOL _showing;
}

@property(readonly) UIViewController * accessoryViewController;
@property(copy,readonly) id actionHandlerBlock;
@property BOOL autoDismissDisabled;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property BOOL enabled;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)_invokeActionHandlerWithActionIndex:(int)arg1;
- (void)_willDismiss;
- (id)accessoryViewController;
- (id)actionHandlerBlock;
- (BOOL)autoDismissDisabled;
- (void)cancel;
- (void)dealloc;
- (void)dismissWithActionIndex:(int)arg1 invokeActionHandler:(BOOL)arg2;
- (void)dismissWithActionIndex:(int)arg1;
- (BOOL)enabled;
- (id)initWithTitle:(id)arg1 cancelTitle:(id)arg2 actionTitles:(id)arg3 accessoryViewController:(id)arg4;
- (void)setAutoDismissDisabled:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)showInView:(id)arg1 actionHandlerBlock:(id)arg2;
- (void)showInViewController:(id)arg1 actionHandlerBlock:(id)arg2;

@end