/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "NSCoding.h"

@class NSDate, NSMutableArray, BakChatUploadPackageHelperStruct;

@interface BakChatUploadBreakPointStruct : XXUnknownSuperclass <NSCoding> {
	BakChatUploadPackageHelperStruct* m_bakChatUploadpackageHelperStruct;
	unsigned totalCount;
	unsigned count;
	NSDate* startDate;
	NSMutableArray* m_packageArray;
	NSMutableArray* m_uploadingPackageArray;
	int m_bakChatUploadStatus;
}
@property(assign, nonatomic) int m_bakChatUploadStatus;
@property(retain, nonatomic) NSMutableArray* m_uploadingPackageArray;
@property(retain, nonatomic) NSMutableArray* m_packageArray;
@property(retain, nonatomic) NSDate* startDate;
@property(assign, nonatomic) unsigned count;
@property(assign, nonatomic) unsigned totalCount;
@property(retain, nonatomic) BakChatUploadPackageHelperStruct* m_bakChatUploadpackageHelperStruct;
+(BOOL)removeUploadBreakPointStruct;
+(id)recoverBreakPointStruct;
+(BOOL)saveUploadBreakPointStruct:(id)aStruct;
-(void).cxx_destruct;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(void)clear;
-(void)dealloc;
-(id)init;
@end

