//
//  PRUtils.h
//  Pandorita
//
//  Created by Chris O'Neill on 2/2/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>

#import "PRUserDefaults.h"


NSString *PRSongDurationFromInterval(NSTimeInterval interval);

@interface NSView (PRUtils_Additions)

- (BOOL)containsView:(NSView *)subview;

@end


@interface NSSearchField (PRUtils_Additions)

- (IBAction)endEditingAndClear:(id)sender;

@end


@interface QTMovie (PRUtils_Additions)

- (NSTimeInterval)durationAsInterval;
- (NSTimeInterval)currentTimeAsInterval;

@end

