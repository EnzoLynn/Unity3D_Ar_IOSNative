//
//  HomeViewController.h
//  Unity-iPhone
//
//  Created by Forever.H on 15/12/23.
//
//

#import <UIKit/UIKit.h>
#import "EnterUnityViewController.h"

@interface HomeViewController : UIViewController
{
    UIButton *scanButton;
}
@property(nonatomic,retain)IBOutlet UIButton *scanButton;
- (IBAction)jumpToEnterUnityVC:(id)sender;
- (IBAction)jumpToAboutUs:(id)sender;

@end
