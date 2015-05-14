//
//  ViewController.m
//  OpenEarzz
//
//  Created by Nathaniel Warren on 5/13/15.
//  Copyright (c) 2015 3rd Street Apps. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()
@property (strong, nonatomic) OEFliteController *fliteController;
@property (strong, nonatomic) Slt *slt;
@property (strong, nonatomic) Awb *awb;
@property (strong, nonatomic) Awb8k *awb8k;
@property (strong, nonatomic) Kal *kal;
@property (strong, nonatomic) Kal16 *kal16;
@property (strong, nonatomic) Rms *rms;
@property (strong, nonatomic) Rms8k *rms8k;
@property (strong, nonatomic) Slt8k *slt8k;

@end
#import <OpenEars/OELanguageModelGenerator.h>
#import <OpenEars/OEPocketsphinxController.h>
#import <OpenEars/OEAcousticModel.h>
#import <OpenEars/OEEventsObserver.h>

@implementation ViewController

@synthesize segControl;
int voiceType;

- (void)viewDidLoad {
    [super viewDidLoad];
    self.spch.delegate = self;
    self.fliteController = [[OEFliteController alloc] init];
    self.slt = [[Slt alloc] init];
    self.awb = [[Awb alloc] init];
    self.awb8k = [[Awb8k alloc] init];
    self.kal = [[Kal alloc] init];
    self.kal16 = [[Kal16 alloc] init];
    self.slt8k = [[Slt8k alloc] init];
    self.rms = [[Rms alloc] init];
    self.rms8k = [[Rms8k alloc] init];
    self.openEarsEventsObserver = [[OEEventsObserver alloc] init];
    [self.openEarsEventsObserver setDelegate:self];
    OELanguageModelGenerator *lmGenerator = [[OELanguageModelGenerator alloc] init];
    if(_text == NULL)
    {
        _text = @"I am speaking";
    }
    NSArray *words = [NSArray arrayWithObjects:@"PAIN", @"STATEMENT", @"OTHER WORD", @"I HURT", nil];
    NSString *name = @"NameIWantForMyLanguageModelFiles";
    NSError *err = [lmGenerator generateLanguageModelFromArray:words withFilesNamed:name forAcousticModelAtPath:[OEAcousticModel pathToModel:@"AcousticModelEnglish"]]; // Change "AcousticModelEnglish" to "AcousticModelSpanish" to create a Spanish language model instead of an English one.
    
    NSString *lmPath = nil;
    NSString *dicPath = nil;
    
    if(err == nil) {
        
        lmPath = [lmGenerator pathToSuccessfullyGeneratedLanguageModelWithRequestedName:@"NameIWantForMyLanguageModelFiles"];
        dicPath = [lmGenerator pathToSuccessfullyGeneratedDictionaryWithRequestedName:@"NameIWantForMyLanguageModelFiles"];
        
    } else {
        NSLog(@"Error: %@",[err localizedDescription]);
    }
    
    [[OEPocketsphinxController sharedInstance] setActive:TRUE error:nil];
    [[OEPocketsphinxController sharedInstance] startListeningWithLanguageModelAtPath:lmPath dictionaryAtPath:dicPath acousticModelAtPath:[OEAcousticModel pathToModel:@"AcousticModelEnglish"] languageModelIsJSGF:NO]; // Change "AcousticModelEnglish" to "AcousticModelSpanish" to perform Spanish recognition instead of English.
    // Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

//myVariable = [[imageNode getAttributeName:@"value] retain];
//voiceType = [[]]

- (IBAction)valueChanged:(id)sender {
    
    
    voiceType = segControl.selectedSegmentIndex;
    
}

- (IBAction)UITextFieldTextDidEndEditing:(id)sender {
    
         _text = _spch.text;

}

- (IBAction)speak:(id)sender {
    
    
    switch (voiceType) {
        case 0:
            [self.fliteController say:_spch.text withVoice:self.awb];
            break;
        case 1:
            [self.fliteController say:_spch.text withVoice:self.awb8k];
            break;
        case 2:
            [self.fliteController say:_spch.text withVoice:self.kal];
            break;
        case 3:
            [self.fliteController say:_spch.text withVoice:self.kal16];
            break;
        case 4:
            [self.fliteController say:_spch.text withVoice:self.rms];
            break;
        case 5:
            [self.fliteController say:_spch.text withVoice:self.rms8k];
            break;
        case 6:
            [self.fliteController say:_spch.text withVoice:self.slt];
            break;
        case 7:
            [self.fliteController say:_spch.text withVoice:self.slt8k];
            break;
        default:
            break;
    }
    //[self.fliteController say:@"I am speaking" withVoice:self.awb8k];
    
}

- (void) pocketsphinxDidChangeLanguageModelToFile:(NSString *)newLanguageModelPathAsString andDictionary:(NSString *)newDictionaryPathAsString {
    NSLog(@"Pocketsphinx is now using the following language model: \n%@ and the following dictionary: %@",newLanguageModelPathAsString,newDictionaryPathAsString);
}


@end
