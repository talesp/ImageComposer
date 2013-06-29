//
//  NWTMasterViewController.h
//  ImageComposer
//
//  Created by Tales Pinheiro De Andrade on 6/29/13.
//  Copyright (c) 2013 Tales Pinheiro De Andrade. All rights reserved.
//

#import <UIKit/UIKit.h>

@class NWTDetailViewController;

@interface NWTMasterViewController : UITableViewController

@property (strong, nonatomic) NWTDetailViewController *detailViewController;

@end
