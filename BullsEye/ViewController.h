//
//  ViewController.h
//  BullsEye
//
//  Created by 朱里达 on 14/9/5.
//  Copyright (c) 2014年 朱里达. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UIAlertViewDelegate>

@property (nonatomic, weak) IBOutlet UISlider *slider;
@property (nonatomic, weak) IBOutlet UILabel *targetLabel;
@property (nonatomic, weak) IBOutlet UILabel *scoreLabel;
@property (nonatomic, weak) IBOutlet UILabel *roundLabel;

- (IBAction)showAlert;

- (IBAction)sliderMoved:(UISlider *)slider;

- (IBAction)startOver;

@end

