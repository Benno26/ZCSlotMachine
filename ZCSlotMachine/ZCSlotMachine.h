
#import <UIKit/UIKit.h>

#pragma mark - ZCSlotMachine Delegate

@class ZCSlotMachine;

@protocol ZCSlotMachineDelegate <NSObject>

@required
- (CGFloat)slotWidth;

@optional
- (void)slotMachineWillStartSliding:(ZCSlotMachine *)slotMachine;
- (void)slotMachineDidEndSliding:(ZCSlotMachine *)slotMachine;
- (CGFloat)slotSpacing;

@end

#pragma mark - ZCSlotMachine

@interface ZCSlotMachine : UIView

// UI Properties
@property (nonatomic) UIEdgeInsets contentInset;
@property (nonatomic, strong) UIImage *backgroundImage;
@property (nonatomic, strong) UIImage *coverImage;

// Data Properties
@property (nonatomic) NSUInteger slotCount;
@property (nonatomic, strong) NSArray *slotIcons;
@property (nonatomic, strong) NSArray *slotResults;

@property (nonatomic, weak) id <ZCSlotMachineDelegate> delegate;

- (void)startSliding;

@end