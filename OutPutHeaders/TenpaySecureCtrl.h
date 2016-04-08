/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "WeChat-Structs.h"

@class UIView, TPIDKeyboardView, TenpayDelegate;
@protocol TenpaySecureCtrlDelegate;

@interface TenpaySecureCtrl : XXUnknownSuperclass {
	TenpayDelegate* _dataHandler;
	unsigned _maxInputLen;
	UIView* _keyboard;
	TPIDKeyboardView* _iPadKeyboard;
	BOOL bFormatBankCard;
	id<TenpaySecureCtrlDelegate> ctrlDelegate;
}
@property(assign, nonatomic) BOOL bFormatBankCard;
@property(assign, nonatomic) id<TenpaySecureCtrlDelegate> ctrlDelegate;
-(void)setDefaultValue:(id)value;
-(BOOL)isAreaIDCardNum:(int)num;
-(BOOL)isUserIDNum;
-(BOOL)isBankCardNum;
-(BOOL)isPhoneNum;
-(id)Get3DesEncryptData;
-(id)GetRsaEncryptData;
-(void)ClearInput;
-(void)SelectRsaKey:(int)key;
-(void)SetSalt:(id)salt;
-(long)GetInputInfo;
-(id)GetVersion;
-(void)numberKeyBoardClicked:(id)clicked;
-(void)numberKeyBoardTouchTouchCancel:(id)cancel;
-(void)numberKeyBoardTouchDown:(id)down;
-(void)UseKeyboardWithX:(BOOL)x ImageNumNormal:(id)normal ImageNumPress:(id)press ImageDelNormal:(id)normal4 ImageDelPess:(id)pess;
-(void)setKeyboradOrientation:(int)orientation;
-(void)AppendString:(id)string;
-(void)SetMaxInputLen:(int)len;
-(unsigned)GetInputLen;
-(id)text;
-(BOOL)canPerformAction:(SEL)action withSender:(id)sender;
-(void)dealloc;
-(void)onChange;
-(void)onReturn;
-(id)initWithFrame:(CGRect)frame;
@end
