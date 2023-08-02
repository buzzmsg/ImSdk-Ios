//
//  IMChannelListViewController.h
//  TMM
//
//  Created by tmm on 2019/11/4.
//  Copyright © 2019 TMM. All rights reserved.
//

#import <UIKit/UIKit.h>


NS_ASSUME_NONNULL_BEGIN

@class IMChannelListViewController;
@class IMShowUserInfo;
@class IMMessageInfoModel;

@protocol TMMChannelListCheckDelegate <NSObject>

- (void)didSelectAchatId:(NSString *)aChatId;
- (void)setGroupMemberInfoWithController:(IMChannelListViewController *)controller datas:(NSArray<IMShowUserInfo *> *)datas;
- (void)tableViewDidScroll:(UIScrollView *)tableView;
- (void)tableViewDidEndDecelerating:(UIScrollView *)tableView;
- (void)tableViewDidEndDragging:(UIScrollView *)tableView willDecelerate:(BOOL)decelerate;
- (void)showMarkerWithAChatIds:(NSArray <NSString *> *)aChatIds;
- (void)showSubTitleWithAChatIds:(NSArray <NSString *> *)aChatIds;
- (void)showConversationInfoWithAChatIds:(NSArray <NSString *> *)aChatIds;

- (void)showDeleteConversationWithAChatIds:(NSArray <NSString *> *)aChatIds;

//- (void)showSaveTempMessages:(NSArray <IMMessageInfoModel *> *)messageModels chatId:(NSString *)chatId;

//- (void)isEnterToChatList:(BOOL)enterToChatList;

- (void)firstDataComplete;

@end

@class IMConversationInfo,IMConversationViewModel;

@interface IMChannelListViewController : UIViewController

//@property (nonatomic, strong) NSArray *aChatId;

//@property (nonatomic, strong) NSArray *conversationInfos;

- (void)refreshListWhenReseletTabBar;
@property (nonatomic,weak) id<TMMChannelListCheckDelegate> delegate;

//- (void)getConversions:(NSArray *)chatIds isAll:(BOOL)isAll folderInfo:(IMConversationInfo *)folderInfo;

- (void)getViewModel:(IMConversationViewModel *)conversionViewModel;
- (void)setTableHeaderView:(UIView *)headerView;
- (void)setTableViewContentInset:(UIEdgeInsets)inset;
- (void)setTableViewScrollIndicatorInsets:(UIEdgeInsets)inset;
- (void)setTableViewContentOffset:(CGPoint)offset animated:(BOOL)animated;

- (void)setTableEmpytView:(UIView * _Nullable)empty;
- (void)clearDataSource;

@end



NS_ASSUME_NONNULL_END
