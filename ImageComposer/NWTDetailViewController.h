//
//  NWTDetailViewController.h
//  ImageComposer
//
//  Created by Tales Pinheiro De Andrade on 6/29/13.
//  Copyright (c) 2013 Tales Pinheiro De Andrade. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NWTDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
