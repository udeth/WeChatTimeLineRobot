/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMService.h"
#import "WCRedEnvelopesNetworkHelperDelegate.h"
#import "MMService.h"

@class WCRedEnvelopesNetworkHelper, NSString;

@interface WCRedEnvelopesLogicMgr : MMService <MMService, WCRedEnvelopesNetworkHelperDelegate> {
	WCRedEnvelopesNetworkHelper* m_networkHelper;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)AsyncBizSubcribeRequest:(id)request;
-(void)CheckAuthBizEnterpriseRedEnvelopesRequest:(id)request;
-(void)OpenBizEnterpriseRedEnvelopesRequest:(id)request;
-(void)ReceiveBizEnterpriseRedEnvelopesRequest:(id)request;
-(void)OpenEnterpriseRedEnvelopesRequest:(id)request SendKey:(id)key ShouldSubscribe:(BOOL);
-(void)ThanksForRedEnvelopesRequest:(id)redEnvelopesRequest;
-(void)ClearserSendOrReceiveRedEnveloperListRequest:(id)request;
-(void)DeleteRedEnvelopesRecord:(id)record;
-(void)QueryUserSendOrReceiveRedEnveloperListRequest:(id)request;
-(void)QueryRedEnvelopesDetailRequest:(id)request;
-(void)OpenRedEnvelopesRequest:(id)request;
-(void)ReceiverQueryRedEnvelopesRequest:(id)request;
-(void)SendShareRedEnvelopesoRequest:(id)request;
-(void)GenYearRedEnvelopesPayRequest:(id)request;
-(void)GenH5RedEnvelopesPayRequest:(id)request;
-(void)GenRedEnvelopesPayRequest:(id)request;
-(void)QueryRedEnvelopesUserInfoNoCache:(id)cache;
-(void)QueryRedEnvelopesUserInfo:(id)info;
-(void)GetEnterpriseHongbaoBizRequest:(id)request CMDID:(unsigned long)cmdid SendKey:(id)key OutputType:(unsigned long)type;
-(void)GetEnterpriseHongbaoBusinessRequest:(id)request CMDID:(unsigned long)cmdid SendKey:(id)key OutputType:(unsigned long)type ShouldSubscribe:(BOOL);
-(void)GetYearHongbaoRequest:(id)request CMDID:(unsigned long)cmdid OutputType:(unsigned long)type;
-(void)GetHongbaoBusinessRequest:(id)request CMDID:(unsigned long)cmdid OutputType:(unsigned long)type;
-(void)OnWCToAsyncBizSubscribeResponse:(id)asyncBizSubscribeResponse Request:(id)request;
-(void)OnWCToBizHBCommonResponse:(id)bizHBCommonResponse Request:(id)request;
-(void)OnWCToBizHBCommonSystemErrorResponse:(id)bizHBCommonSystemErrorResponse Request:(id)request;
-(void)OnWCToBizHBCommonErrorResponse:(id)bizHBCommonErrorResponse Request:(id)request;
-(void)OnWCToEnterpriseHBCommonResponse:(id)enterpriseHBCommonResponse Request:(id)request;
-(void)OnWCToEnterpriseHBCommonSystemErrorResponse:(id)enterpriseHBCommonSystemErrorResponse Request:(id)request;
-(void)OnWCToEnterpriseHBCommonErrorResponse:(id)enterpriseHBCommonErrorResponse Request:(id)request;
-(void)OnWCToHongbaoCommonResponse:(id)hongbaoCommonResponse Request:(id)request;
-(void)OnWCToHongbaoCommonErrorResponse:(id)hongbaoCommonErrorResponse Request:(id)request;
-(void)OnWCToHongbaoCommonSystemErrorResponse:(id)hongbaoCommonSystemErrorResponse Request:(id)request;
-(id)init;
@end

