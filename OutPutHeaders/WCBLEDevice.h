/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface WCBLEDevice : XXUnknownSuperclass {
	NSString* _m_bleName;
	NSString* _m_mac;
	long long _m_did;
	long long _m_bleSimpleProto;
	long long _m_profileID;
}
@property(assign, nonatomic) long long m_profileID;
@property(copy, nonatomic) NSString* m_mac;
@property(assign, nonatomic) long long m_bleSimpleProto;
@property(assign, nonatomic) long long m_did;
@property(copy, nonatomic) NSString* m_bleName;
-(void).cxx_destruct;
@end
