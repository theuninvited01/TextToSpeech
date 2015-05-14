//
//  ViewController.h
//  OpenEarzz
//
//  Created by Nathaniel Warren on 5/13/15.
//  Copyright (c) 2015 3rd Street Apps. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Slt/Slt.h>
#import <Awb/Awb.h>
#import <Awb8k/Awb8k.h>
#import <Kal/Kal.h>
#import <Slt8k/Slt8k.h>
#import <Rms/Rms.h>
#import <Rms8k/Rms8k.h>
#import <Kal16/Kal16.h>
#import <OpenEars/OEFliteController.h>
#import <OpenEars/OEEventsObserver.h>
@interface ViewController : UIViewController <OEEventsObserverDelegate>{
    OEEventsObserver *openEarsEventsObserver;
}
@property (strong, nonatomic) IBOutlet UIButton *speakButton;
@property (weak, nonatomic) IBOutlet UISegmentedControl *segControl;
@property (strong, nonatomic) IBOutlet UITextField *spch;
@property(nonatomic, copy) NSString *text;
@property (strong, nonatomic) OEEventsObserver *openEarsEventsObserver;
@property(nonatomic, assign) id< UITextFieldDelegate > delegate;
@end

