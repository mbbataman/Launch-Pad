//
//  DetailViewController.h
//  TestProj
//
//  Created by Mitch Bateman on 1/13/15.
//  Copyright (c) 2015 GemSide. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

