//
//  ShootGameAppController.h
//  ShootGame
//
//  Created by chinaspx on 12-8-30.
//  Copyright dafada 2012年. All rights reserved.
//

@class RootViewController;

@interface AppController : NSObject <UIAccelerometerDelegate, UIAlertViewDelegate, UITextFieldDelegate,UIApplicationDelegate> {
    UIWindow *window;
    RootViewController    *viewController;
}

@end

