// -*- Mode: objc -*-

#import <Cocoa/Cocoa.h>
#include "bridge.h"

@class ClientForKernelspace;
@class PreferencesController;
@class PreferencesManager;
@class ServerForUserspace;
@class StatusBar;
@class StatusWindow;
@class WorkSpaceData;
@class XMLCompiler;

@interface AppDelegate : NSObject <NSApplicationDelegate> {
  IBOutlet ClientForKernelspace* __weak clientForKernelspace;
  IBOutlet PreferencesController* preferencesController_;
  IBOutlet PreferencesManager* preferencesManager_;
  IBOutlet ServerForUserspace* serverForUserspace_;
  IBOutlet StatusBar* statusbar_;
  IBOutlet StatusWindow* statusWindow_;
  IBOutlet WorkSpaceData* workSpaceData_;
  IBOutlet XMLCompiler* xmlCompiler_;
}

@property (weak) ClientForKernelspace* clientForKernelspace;

- (void) updateFocusedUIElementInformation:(NSDictionary*)information;
- (NSDictionary*) getFocusedUIElementInformation;
- (NSDictionary*) getInputSourceInformation;

- (IBAction) launchEventViewer:(id)sender;
- (IBAction) launchMultiTouchExtension:(id)sender;
- (IBAction) launchUninstaller:(id)sender;
- (IBAction) openPreferences:(id)sender;
- (IBAction) openPrivateXML:(id)sender;
- (IBAction) quit:(id)sender;

@end
