//
//  PRGeneralPrefsController.h
//  Pandorita
//
//  Created by Chris O'Neill on 2/22/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface PRGeneralPrefsController : NSViewController
{
	IBOutlet NSButton *autoLoginCheckbox;
	IBOutlet NSButton *useGrowlCheckbox;
}

- (IBAction)autoLoginChanged:(id)sender;
- (IBAction)useGrowlChanged:(id)sender;

@end
