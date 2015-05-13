//
//  ViewController.h
//  OpenEarzz
//
//  Created by Nathaniel Warren on 5/13/15.
//  Copyright (c) 2015 3rd Street Apps. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Slt/Slt.h>
#import <OpenEars/OEFliteController.h>
#import <OpenEars/OEEventsObserver.h>
@interface ViewController : UIViewController <OEEventsObserverDelegate>{
    OEEventsObserver *openEarsEventsObserver;
}
@property (strong, nonatomic) IBOutlet UIButton *speakButton;
@property (strong, nonatomic) OEEventsObserver *openEarsEventsObserver;
@end

