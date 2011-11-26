//
//  FlipsideViewController.h
//  DrawingPrimitives
//
//  Created by Nick Charlton on 26/11/2011.
//  Copyright (c) 2011 Nick Charlton. Licensed under the MIT license.
//

#import <UIKit/UIKit.h>

@class FlipsideViewController;

@protocol FlipsideViewControllerDelegate
- (void)flipsideViewControllerDidFinish:(FlipsideViewController *)controller;
@end

@interface FlipsideViewController : UIViewController

@property (weak, nonatomic) IBOutlet id <FlipsideViewControllerDelegate> delegate;

- (IBAction)done:(id)sender;

@end
