// -*- Mode: objc; Coding: utf-8; indent-tabs-mode: nil; -*-

#import <Cocoa/Cocoa.h>
#import "KeyRemap4MacBookProtocol.h"

@class AppDelegate;
@class ClientForKernelspace;
@class PreferencesManager;
@class XMLCompiler;

@interface ServerForUserspace : NSObject<KeyRemap4MacBookProtocol>
{
  IBOutlet AppDelegate* appDelegate_;
  IBOutlet ClientForKernelspace* clientForKernelspace_;
  IBOutlet PreferencesManager* preferencesManager_;
  IBOutlet XMLCompiler* xmlCompiler_;
}

- (BOOL) register;

@end
