//
//  BrightnessSliderView.h
//  PickerOverlaySample
//
//  Created by Aleksandr Nikiforov on 5/10/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "IXColorPickerView.h"

@interface BrightnessSliderView : UIView
@property (weak, nonatomic) IBOutlet IXColorPickerView *colorCircle;
@property (nonatomic) CGSize insetGradient;
@end
