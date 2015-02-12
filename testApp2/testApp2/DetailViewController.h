//
//  DetailViewController.h
//  testApp2
//
//  Created by Michael Belenchenko on 2/12/15.
//  Copyright (c) 2015 We Communicate. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

