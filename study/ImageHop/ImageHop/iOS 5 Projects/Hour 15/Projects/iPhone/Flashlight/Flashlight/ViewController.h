//
//  ViewController.h
//  Flashlight
//
//  Created by John Ray on 9/15/11.
//  Copyright (c) 2011 John E. Ray. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (strong, nonatomic) IBOutlet UISwitch *toggleSwitch;
@property (strong, nonatomic) IBOutlet UISlider *brightnessSlider;
@property (strong, nonatomic) IBOutlet UIView *lightSource;

- (IBAction)setLightSourceAlphaValue:(id)sender;

@end