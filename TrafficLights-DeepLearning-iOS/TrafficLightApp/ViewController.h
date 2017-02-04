//
//  ViewController.h
//  CaffeApp
//
//  Created by Kai Lu on 7/11/16.
//  Copyright (c) 2016 Kai Lu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

#import "Classifier.h"

@interface ViewController : UIViewController <AVCaptureVideoDataOutputSampleBufferDelegate>

@property (weak, nonatomic) IBOutlet UIImageView *lightImage;

@end

