//
//  PTStopDetailTableViewCell.h
//  Bus-Gogogo
//
//  Created by Weijing Liu on 3/30/14.
//  Copyright (c) 2014 Weijing Liu. All rights reserved.
//

#import <UIKit/UIKit.h>

@class PTMonitoredVehicleJourney;

@interface PTStopDetailTableViewCell : UITableViewCell

@property (nonatomic, strong) PTMonitoredVehicleJourney *vehcileJourney;

@property (nonatomic, weak) IBOutlet UIImageView *thumbnailView;

@property (nonatomic, weak) IBOutlet UILabel *distanceDetailsLabel;

@property (nonatomic, weak) IBOutlet UILabel *destinationLabel;

@end

extern NSString *kStopDetailTableViewCellClassName();
extern CGFloat kStopDetailTableViewCellHeight();