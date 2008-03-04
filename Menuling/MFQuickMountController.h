//
//  MFQuickMountController.h
//  MacFusion2
//
//  Created by Michael Gorbach on 2/25/08.
//  Copyright 2008 Michael Gorbach. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "MFClientFSDelegateProtocol.h";

@class MFClientFS, MFClient;

@interface MFQuickMountController : NSWindowController <MFClientFSDelegateProtocol> 
{
	
	NSTextField* qmTextField;
	NSTabView* qmTabView;
	NSProgressIndicator* qmProgress;
	MFClientFS* fs;
	MFClient* client;
}

- (IBAction)quickMount:(id)sender;
- (IBAction)recentClicked:(id)sender;

@property(readonly, retain) MFClient* client;
@end
