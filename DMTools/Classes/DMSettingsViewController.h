//
//  DMSettingsViewController.h
//  DM Tools
//
//  Created by hamouras on 4/3/11.
//  Copyright 2011 Score Studios. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SESettingsViewController.h"

@interface DMSettingsViewController : SESettingsViewController<DBRestClientDelegate, UIAlertViewDelegate> {
	NSURL*			_iTunesURL;
	DBRestClient*	_restClient;
    NSDictionary*	_xmlPaths;	// paths, revisions
    NSArray*		_iconPaths;
    NSString*		_syncHash;
	NSUInteger		_pendingCount;
	enum
	{
		StatusIdle	= 0,
		StatusImporting,
		StatusExporting,
		StatusDBImporting,
		StatusDBExporting
	} _status;
}

- (void) updateDropboxButtons;

@end
