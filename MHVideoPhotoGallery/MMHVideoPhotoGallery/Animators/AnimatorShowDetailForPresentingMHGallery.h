//
//  AnimatorShowDetailForPresentingMHGallery.h
//  MHVideoPhotoGallery
//
//  Created by Mario Hahn on 31.12.13.
//  Copyright (c) 2013 Mario Hahn. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MHVideoImageGalleryGlobal.h"

@interface AnimatorShowDetailForPresentingMHGallery : UIPercentDrivenInteractiveTransition<UIViewControllerAnimatedTransitioning>
@property (nonatomic,strong)    UIImageView *iv;
@property (nonatomic,assign)    CGFloat angle;
@property (nonatomic,assign)    CGFloat scale;
@property (nonatomic,assign)    CGPoint changedPoint;
@property (nonatomic,assign)    id <UIViewControllerContextTransitioning> context;
@end