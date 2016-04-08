/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class WCPayOrderDetailSubscribeBrandInfo, WCPayOrderDetailActivityInfo, NSMutableArray, NSString, NSArray;

@interface WCPayOrderDetail : XXUnknownSuperclass {
	int m_eWCPayOrderDetailSituationType;
	NSString* m_productName;
	NSString* m_discountName;
	NSString* m_productRemark;
	unsigned long m_productCount;
	long long m_totalMoney;
	long long m_oldTotalMoney;
	BOOL m_bNeedShowProductDetailMoneyInfo;
	NSString* m_nsProductTotalMoney;
	NSString* m_nsTransportMoney;
	NSString* m_nsPreferentialMoney;
	NSString* m_totalFeeString;
	NSString* m_feeType;
	unsigned long m_cardBankTag;
	unsigned long m_payStatus;
	unsigned long m_uiCreateTime;
	NSString* m_sellerID;
	NSString* m_sellerName;
	NSString* m_createTime;
	NSString* m_transcationID;
	NSString* m_arrivedTime;
	NSString* m_preArriveTime;
	NSString* m_payStatusName;
	NSString* m_payBankType;
	NSString* m_payBankName;
	NSString* m_payCardTail;
	NSString* m_paySituation;
	BOOL m_isOpenFeeProtocal;
	WCPayOrderDetailSubscribeBrandInfo* m_oWCPayOrderDetailSubscribeBrandInfo;
	NSArray* m_arrWCPayOrderDetailActivityInfo;
	WCPayOrderDetailActivityInfo* m_oLinkedAtivityInfo;
	unsigned long m_uiAfterPaidErrorQueryOrderTime;
	BOOL m_bNeedAfterPaidErrorQueryOrder;
	NSString* m_nsBankTypeLimitWording;
	NSString* m_nsRefundBankType;
	NSString* m_nsInvoice;
	NSString* m_nsMerchantGuarantee;
	int m_eWCPayOrderDetailMessageType;
	NSString* m_nsLatestProductStatusHeaderIcon;
	NSString* m_nsLatestProductStatusName;
	NSString* m_nsLatestProductStatusDesc;
	NSString* m_nsLatestProductStatusUpdateTime;
	NSString* m_nsLatestProductStatusClickedJumpUrl;
	NSString* m_nsPanelAlertTitle;
	NSString* m_nsPanelAlertBody;
	NSArray* m_arrPanelButtonInfo;
	NSString* m_sellerPhone;
	NSString* m_sellerUserName;
	NSString* m_sellerFrom;
	NSArray* m_arrOrderProductInfo;
	NSArray* m_arrCustomNormalCellInfo;
	NSString* m_nsProtectRightsUrl;
	NSString* m_nsSharedUrl;
	NSString* m_nsImgIcon;
	NSMutableArray* m_arrProductImg;
	BOOL m_bShowEvaluateCell;
	BOOL m_bEvaluated;
	long long m_uiEvaluateValue;
	unsigned long m_uiInsertEvaluateCellIndex;
	int m_eWCPayTransferMoneyOrderStatus;
	int m_eWCPayTransferMoneySituationSubType;
	NSString* m_nsTransferID;
	long long m_chargeFeeMoney;
	long long m_transferFeeMoney;
	NSString* m_nsReceiverUserName;
	NSString* m_nsSenderUserName;
	NSString* m_nsTruthName;
	BOOL m_bAllowedRetrySendMsg;
	NSString* m_receiveMoneyTime;
	NSString* m_refusedMoneyTime;
	NSString* m_nsRebackMoneyStatusName;
	int m_touchIDType;
	NSString* m_nsWapPayTips;
	NSArray* m_arrDiscountArray;
	NSString* m_nsOriginalInfo;
	NSString* m_nsRateInfo;
	BOOL m_bTouchIDAuthFailed;
	NSString* m_preArriveTimeWording;
}
@property(retain, nonatomic) NSString* m_nsOriginalInfo;
@property(retain, nonatomic) NSString* m_nsRateInfo;
@property(retain, nonatomic) NSArray* m_arrDiscountArray;
@property(retain, nonatomic) NSString* m_nsRefundBankType;
@property(retain, nonatomic) NSString* m_nsWapPayTips;
@property(assign, nonatomic) BOOL m_bTouchIDAuthFailed;
@property(assign, nonatomic) BOOL m_bNeedAfterPaidErrorQueryOrder;
@property(assign, nonatomic) unsigned long m_uiAfterPaidErrorQueryOrderTime;
@property(assign, nonatomic) int m_touchIDType;
@property(retain, nonatomic) NSString* m_nsRebackMoneyStatusName;
@property(retain, nonatomic) NSString* m_refusedMoneyTime;
@property(retain, nonatomic) NSString* m_receiveMoneyTime;
@property(retain, nonatomic) NSString* m_nsTruthName;
@property(retain, nonatomic) NSString* m_nsSenderUserName;
@property(retain, nonatomic) NSString* m_nsTransferID;
@property(assign, nonatomic) int m_eWCPayTransferMoneySituationSubType;
@property(assign, nonatomic) int m_eWCPayTransferMoneyOrderStatus;
@property(assign, nonatomic) BOOL m_bAllowedRetrySendMsg;
@property(retain, nonatomic) NSString* m_nsReceiverUserName;
@property(assign, nonatomic) long long m_transferFeeMoney;
@property(assign, nonatomic) long long m_chargeFeeMoney;
@property(assign, nonatomic) unsigned long m_uiInsertEvaluateCellIndex;
@property(assign, nonatomic) long long m_uiEvaluateValue;
@property(assign, nonatomic) BOOL m_bEvaluated;
@property(assign, nonatomic) BOOL m_bShowEvaluateCell;
@property(retain, nonatomic) NSMutableArray* m_arrProductImg;
@property(retain, nonatomic) NSString* m_nsLatestProductStatusDesc;
@property(retain, nonatomic) NSString* m_nsImgIcon;
@property(retain, nonatomic) NSString* m_nsMerchantGuarantee;
@property(retain, nonatomic) NSString* m_nsInvoice;
@property(retain, nonatomic) NSString* m_nsSharedUrl;
@property(retain, nonatomic) NSString* m_nsProtectRightsUrl;
@property(retain, nonatomic) NSArray* m_arrCustomNormalCellInfo;
@property(retain, nonatomic) NSArray* m_arrOrderProductInfo;
@property(retain, nonatomic) NSArray* m_arrPanelButtonInfo;
@property(retain, nonatomic) NSString* m_nsPanelAlertBody;
@property(retain, nonatomic) NSString* m_nsPanelAlertTitle;
@property(retain, nonatomic) NSString* m_nsLatestProductStatusClickedJumpUrl;
@property(retain, nonatomic) NSString* m_nsLatestProductStatusUpdateTime;
@property(retain, nonatomic) NSString* m_nsLatestProductStatusName;
@property(retain, nonatomic) NSString* m_nsLatestProductStatusHeaderIcon;
@property(assign, nonatomic) BOOL m_isOpenFeeProtocal;
@property(retain, nonatomic) NSString* m_paySituation;
@property(assign, nonatomic) int m_eWCPayOrderDetailSituationType;
@property(assign, nonatomic) int m_eWCPayOrderDetailMessageType;
@property(retain, nonatomic) WCPayOrderDetailActivityInfo* m_oLinkedAtivityInfo;
@property(retain, nonatomic) NSArray* m_arrWCPayOrderDetailActivityInfo;
@property(retain, nonatomic) WCPayOrderDetailSubscribeBrandInfo* m_oWCPayOrderDetailSubscribeBrandInfo;
@property(retain, nonatomic) NSString* m_totalFeeString;
@property(retain, nonatomic) NSString* m_sellerPhone;
@property(retain, nonatomic) NSString* m_payCardTail;
@property(retain, nonatomic) NSString* m_payBankName;
@property(retain, nonatomic) NSString* m_nsBankTypeLimitWording;
@property(retain, nonatomic) NSString* m_payBankType;
@property(retain, nonatomic) NSString* m_payStatusName;
@property(retain, nonatomic) NSString* m_transcationID;
@property(retain, nonatomic) NSString* m_createTime;
@property(retain, nonatomic) NSString* m_sellerUserName;
@property(retain, nonatomic) NSString* m_sellerFrom;
@property(retain, nonatomic) NSString* m_sellerName;
@property(retain, nonatomic) NSString* m_sellerID;
@property(assign, nonatomic) unsigned long m_uiCreateTime;
@property(assign, nonatomic) unsigned long m_payStatus;
@property(assign, nonatomic) unsigned long m_cardBankTag;
@property(retain, nonatomic) NSString* m_preArriveTimeWording;
@property(retain, nonatomic) NSString* m_preArriveTime;
@property(retain, nonatomic) NSString* m_arrivedTime;
@property(retain, nonatomic) NSString* m_feeType;
@property(retain, nonatomic) NSString* m_nsPreferentialMoney;
@property(retain, nonatomic) NSString* m_nsTransportMoney;
@property(retain, nonatomic) NSString* m_nsProductTotalMoney;
@property(assign, nonatomic) BOOL m_bNeedShowProductDetailMoneyInfo;
@property(assign, nonatomic) long long m_oldTotalMoney;
@property(assign, nonatomic) long long m_totalMoney;
@property(assign, nonatomic) unsigned long m_productCount;
@property(retain, nonatomic) NSString* m_productRemark;
@property(retain, nonatomic) NSString* m_discountName;
@property(retain, nonatomic) NSString* m_productName;
-(void).cxx_destruct;
-(void)dealloc;
@end
