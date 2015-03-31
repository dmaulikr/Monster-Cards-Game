//
//  MLoginViewController.h
//  IOS-Game
//
//  Created by JETS on 3/30/15.
//  Copyright (c) 2015 Mad. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MRegisterViewController.h"
#import "MHomeViewController.h"

@interface MLoginViewController : UIViewController

// email textfield
@property (nonatomic, strong) IBOutlet UITextField *txtf_email;

// password textfield
@property (nonatomic, strong) IBOutlet UITextField *txtf_password;

// sign in button
@property (nonatomic, strong) IBOutlet UIButton *btn_sigin;

// register button
@property (nonatomic, strong) IBOutlet UIButton *btn_register;


// signin button pressed method
- (IBAction)signinButtonPressed:(id)sender;


@end
