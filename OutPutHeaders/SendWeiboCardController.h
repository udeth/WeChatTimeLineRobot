/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WCActionSheetDelegate.h"
#import "MMUIViewController.h"
#import "WeChat-Structs.h"
#import "UIAlertViewDelegate.h"
#import "scrollViewDelegate.h"
#import "IMMQRCodeExt.h"

@class UIImageView, NSString, MMScrollView, MMAnimationTipView, MMLoadingView;

@interface SendWeiboCardController : MMUIViewController <scrollViewDelegate, UIAlertViewDelegate, IMMQRCodeExt, WCActionSheetDelegate> {
	MMAnimationTipView* m_tipView;
	MMScrollView* m_viewBG;
	stWeixinEntryRow* m_weixinEntry;
	MMLoadingView* m_loadingView;
	UIImageView* m_imageView;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) stWeixinEntryRow* m_weixinEntry;
-(void).cxx_destruct;
-(void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;
-(void)Operate:(id)operate;
-(void)saveToAlbum;
-(void)touchesEnded_ScrollView:(id)view withEvent:(id)event;
-(void)touchesCancelled_ScrollView:(id)view withEvent:(id)event;
-(void)touchesMoved_ScrollView:(id)view withEvent:(id)event;
-(void)touchesBegan_ScrollView:(id)view withEvent:(id)event;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)initView;
-(void)done:(id)done;
-(void)onDownloadQRCodeFinish:(id)finish FooterWording:(id)wording;
-(void)getNextQRCode;
-(void)willAppear;
-(void)initQRCode;
-(void)initLoadingView;
-(void)scrollToNormal;
-(void)onNextStep:(id)step;
-(void)showFacebookBindView;
-(void)onFacebookWall;
-(void)onSinaMicroBlog;
-(void)onTxMicroBlog;
-(void)onCancel:(id)cancel;
-(void)didFinishSavingImage:(id)image didFinishSavingWithError:(id)error contextInfo:(void*)info;
-(void)CloseLoadingView:(id)view;
-(void)popToTop;
-(void)initTipView;
-(void)dealloc;
-(id)init;
-(BOOL)isMicroBlogOpen;
@end
