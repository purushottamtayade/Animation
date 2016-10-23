//
//  ViewController.h
//  Animation
//
//  Created by Student P_06 on 01/01/01.
//  Copyright © 2001 Purushottam Tayade. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef enum : NSUInteger
{
    Up,
    Down,
    Left,
    Right,
}TransformObject;

typedef enum : NSUInteger
{
    Scale,
    Shrink,
}ScaleObject;

@interface ViewController : UIViewController{
    CGRect originalFrame;
}
- (IBAction)upButton:(id)sender;
- (IBAction)rightButton:(id)sender;
- (IBAction)downButton:(id)sender;
- (IBAction)leftButton:(id)sender;

- (IBAction)plusScale:(id)sender;
- (IBAction)minusScale:(id)sender;

@end

