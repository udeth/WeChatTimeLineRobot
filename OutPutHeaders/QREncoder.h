/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIImage;

@interface QREncoder : XXUnknownSuperclass {
	UIImage* _image;
}
@property(retain, nonatomic) UIImage* image;
-(id)renderDataMatrix:(id)matrix imageDimension:(int)dimension;
-(id)encodeWithECLevel:(int)eclevel version:(int)version string:(id)string;
-(id)encodeWithECLevel:(int)eclevel version:(int)version string:(id)string AESPassphrase:(id)passphrase;
-(id)encodeCStringWithECLevel:(int)eclevel version:(int)version cstring:(const char*)cstring;
-(id)AESDecryptString:(id)string withPassphrase:(id)passphrase;
-(id)AESEncryptString:(id)string withPassphrase:(id)passphrase;
-(void)dealloc;
@end
