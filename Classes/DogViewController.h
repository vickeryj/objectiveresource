//
//  DogViewController.h
//  active_resource
//
//  Created by vickeryj on 8/21/08.
//  Copyright 2008 Joshua Vickery. All rights reserved.
//

#import <UIKit/UIKit.h>

@class AddDogViewController;


@interface DogViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {

	NSArray *dogs;
	AddDogViewController *addController;
	IBOutlet UITableView *tableView;
	
}

@property(nonatomic,retain) NSArray *dogs;
@property(nonatomic,retain) AddDogViewController *addController;
@property(nonatomic,retain) UITableView *tableView;

- (IBAction) addDogButtonClicked:(id) sender;

@end