//
//  MPAdImpressionTimer+Testing.h
//
//  Copyright 2018 Twitter, Inc.
//  Licensed under the MoPub SDK License Agreement
//  http://www.mopub.com/legal/sdk-license-agreement/
//

#import "MPAdImpressionTimer.h"

@interface MPAdImpressionTimer (Testing)

@property (nonatomic) CGFloat pixelsRequiredForViewVisibility;
@property (nonatomic) CGFloat percentageRequiredForViewVisibility;
@property (nonatomic) NSTimeInterval requiredSecondsForImpression;

@end
