//
//  HBHistoryViewController.h
//  Health Beat
//
//  Created by Mason Mei on 10/14/12.
//  Copyright (c) 2012 Mason Mei. All rights reserved.
//

#import <UIKit/UIKit.h>

@class HBWeightHistory;

@interface HBHistoryViewController : UITableViewController
@property(nonatomic, strong) HBWeightHistory* weightHistory;

@end
