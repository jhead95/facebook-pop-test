//
//  ViewController.h
//  Facebook Pop Test
//
//  Created by Jesse Head on 22/08/2014.
//  Copyright (c) 2014 Jesse Head. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController {
    
    BOOL timerRunning;
    
}

@property (weak, nonatomic) IBOutlet UIButton *button;

- (IBAction)btn_press:(id)sender;

@end
