//
//  DetailViewController.h
//  Reader
//
//  Created by Blaise Rivet on 2/12/15.
//  Copyright (c) 2015 AppSoc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

