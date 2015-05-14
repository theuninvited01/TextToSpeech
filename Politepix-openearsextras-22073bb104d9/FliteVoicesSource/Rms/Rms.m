//
//  Rms.m
//  Rms
//
//  A wrapper for a Flite voice to work with OpenEars' FliteController
//  Created by Halle Winkler on 8/7/12.
//  Copyright (c) 2012 Politepix. All rights reserved.
//

#import "Rms.h"

@implementation Rms

void unregister_cmu_us_rms(cst_voice *vox);
cst_voice *register_cmu_us_rms(const char *voxdir);

- (void)dealloc {
	unregister_cmu_us_rms(self.voice);
    // release stuff
    [super dealloc];
}

- (id) init {
    if (self = [super init]) {
        self.voice = register_cmu_us_rms(NULL);
        self.target_mean_default = 100.0;
		self.target_stddev_default = 15.0;
        self.duration_stretch_default = 1.0;
    }
    return self;
}

@end

