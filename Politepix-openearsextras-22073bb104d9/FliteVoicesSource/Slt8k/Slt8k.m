//
//  Slt8k.m
//  Slt8k
//
//  A wrapper for a Flite voice to work with OpenEars' FliteController
//  Created by Halle Winkler on 8/7/12.
//  Copyright (c) 2012 Politepix. All rights reserved.
//

#import "Slt8k.h"

@implementation Slt8k

void unregister_cmu_us_slt8k(cst_voice *vox);
cst_voice *register_cmu_us_slt8k(const char *voxdir);

- (void)dealloc {
	unregister_cmu_us_slt8k(self.voice);
    // release stuff
    [super dealloc];
}

- (id) init {
    if (self = [super init]) {
        self.voice = register_cmu_us_slt8k(NULL);
        self.target_mean_default = 270.0;
		self.target_stddev_default = 55.0;
        self.duration_stretch_default = 1.0;
    }
    return self;
}

@end

