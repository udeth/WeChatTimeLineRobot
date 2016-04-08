/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class SKBuiltinBuffer_t, NSString, BaseRequest;

@interface MassSendRequest : WXPBGeneratedMessage {
}
@property(retain, nonatomic) NSString* videoAeskey;
@property(retain, nonatomic) NSString* thumbAeskey;
@property(assign, nonatomic) unsigned thumbHeight;
@property(assign, nonatomic) unsigned thumbWidth;
@property(retain, nonatomic) NSString* thumbUrl;
@property(retain, nonatomic) NSString* videoUrl;
@property(assign, nonatomic) unsigned voiceFormat;
@property(assign, nonatomic) unsigned compressType;
@property(assign, nonatomic) unsigned isSendAgain;
@property(assign, nonatomic) unsigned toListCount;
@property(assign, nonatomic) unsigned videoSource;
@property(assign, nonatomic) unsigned cameraType;
@property(retain, nonatomic) SKBuiltinBuffer_t* thumbData;
@property(assign, nonatomic) unsigned thumbStartPos;
@property(assign, nonatomic) unsigned thumbTotalLen;
@property(assign, nonatomic) unsigned dataTotalLen;
@property(assign, nonatomic) unsigned dataStartPos;
@property(retain, nonatomic) SKBuiltinBuffer_t* dataBuffer;
@property(assign, nonatomic) unsigned mediaTime;
@property(assign, nonatomic) unsigned msgType;
@property(retain, nonatomic) NSString* clientId;
@property(retain, nonatomic) NSString* toListMd5;
@property(retain, nonatomic) NSString* toList;
@property(retain, nonatomic) BaseRequest* baseRequest;
+(void)initialize;
@end
