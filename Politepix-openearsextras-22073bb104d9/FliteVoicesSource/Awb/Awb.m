//
//  slt.m
//  slt
//
//  A wrapper for a Flite voice to work with OpenEars' FliteController
//  Created by Halle Winkler on 8/7/12.
//  Copyright (c) 2012 Politepix. All rights reserved.
//

#import "Awb.h"

@implementation Awb

void unregister_cmu_us_awb(cst_voice *vox);
cst_voice *register_cmu_us_awb(const char *voxdir);

- (void)dealloc {
	unregister_cmu_us_awb(self.voice);
    // release stuff
    [super dealloc];
}

- (id) init {
    if (self = [super init]) {
        self.voice = register_cmu_us_awb(NULL);
        self.target_mean_default = 127.0;
		self.target_stddev_default = 15.0;
        self.duration_stretch_default = 1.0;
    }
    return self;
}

@end
