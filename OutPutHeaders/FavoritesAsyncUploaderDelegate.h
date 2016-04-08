/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol FavoritesAsyncUploaderDelegate <NSObject>
-(id)getUploadCdnInfoByLocalItemDataId:(id)anId andType:(int)type;
-(BOOL)deleteCdnInfoByFavoritesItemLocalId:(unsigned long)anId;
-(BOOL)updateItemXMLInItemDB:(id)itemDB;
-(BOOL)updateCdnInfo:(id)info;
-(id)getNextAsyncUploadCdnInfoByLocalItemId:(unsigned long)anId;
-(void)onUploadFavItem:(id)item LocalDataId:(id)anId FinishedLength:(long)length TotalLength:(long)length4;
-(void)onUploadFail:(id)fail ErrCode:(int)code;
-(void)onUploadFinished:(id)finished;
@end
