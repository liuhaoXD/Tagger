//
//  TaggerAppDelegate.h
//  Tagger
//
//  Created by Bilal Syed Hussain on 05/07/2011.
//  Copyright 2011  All rights reserved.
//

#import <Cocoa/Cocoa.h>
@class MainController;

@interface VGTaggerAppDelegate : NSObject <NSApplicationDelegate> {
@private
	NSWindow *window;
	NSWindowController *_preferencesWindowController;
}

@property  IBOutlet NSWindow *window;
@property (readonly) IBOutlet MainController *mainController;
@property (nonatomic, readonly) NSWindowController *preferencesWindowController;

- (IBAction)openPreferences:(id)sender;
- (IBAction)togglePreviewPanel:(id)previewPanel;

@end
