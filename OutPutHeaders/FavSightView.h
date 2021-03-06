/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "WCActionSheetDelegate.h"
#import "SightIconViewDelegate.h"
#import "MMUIView.h"

@class SightIconView, SimpleSightInfo, SightPlayerView, FavSightWindow, UIView, NSString, CAGradientLayer;
@protocol FavSightViewDelegate;

@interface FavSightView : MMUIView <SightIconViewDelegate, WCActionSheetDelegate> {
	SimpleSightInfo* m_sightInfo;
	FavSightWindow* m_sightWindow;
	SightPlayerView* m_playerView;
	id<FavSightViewDelegate> m_delegate;
	SightIconView* m_progressView;
	BOOL bIsSyncComplete;
	int m_currMaskType;
	BOOL fullScreenMode;
	CAGradientLayer* m_layer;
	UIView* m_transparentCoverView;
	unsigned _sightLegalityType;
	BOOL _supportLandscape;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL supportLandscape;
@property(retain, nonatomic) SightPlayerView* m_playerView;
@property(assign, nonatomic) __weak id<FavSightViewDelegate> m_delegate;
-(void).cxx_destruct;
-(BOOL)isAd;
-(void)checkLegalityWithCompletionHandler:(id)completionHandler;
-(void)onProgressEnd;
-(void)initCoverMask;
-(void)layoutSubviews;
-(void)setDownFail;
-(void)setDownFinsh;
-(void)setFinishedLength:(long)length TotalLength:(long)length2;
-(void)showCoverMask:(int)mask;
-(void)pause;
-(void)tryToPlay:(BOOL)play;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(void)fullScreenPlay:(id)play;
-(void)onClickSight;
-(void)initView;
-(void)resize:(CGSize)resize;
-(void)initPlayerView;
-(CGSize)getSightSizeWithMaxSize:(CGSize)maxSize;
-(float)getSightHeight;
-(void)dealloc;
-(id)initWithFavDataSource:(id)favDataSource;
-(id)initWithSimpleSightInfo:(id)simpleSightInfo fullScreenMode:(BOOL)mode;
@end

