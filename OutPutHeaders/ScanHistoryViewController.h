/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMUIViewController.h"
#import "WeChat-Structs.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "WCActionSheetDelegate.h"

@class MMTableView, ScanHistoryLogicHelper, NSString;

@interface ScanHistoryViewController : MMUIViewController <WCActionSheetDelegate, UITableViewDelegate, UITableViewDataSource> {
	MMTableView* _tableView;
	ScanHistoryLogicHelper* _helperLogic;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)tableView:(id)view commitEditingStyle:(int)style forRowAtIndexPath:(id)indexPath;
-(BOOL)tableView:(id)view canEditRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)realCleanAll;
-(void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;
-(void)onCleanAction:(id)action;
-(void)showEmptyView;
-(void)OnReturn;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(id)init;
@end
