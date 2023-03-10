//
//  IMChannelListViewModel.h
//  IMSdk
//
//  Created by oceanMAC on 2022/10/20.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^TMChatListDataEventBlock)(void);

@class IMConversationViewModel;
@interface IMChannelListViewModel : NSObject

+ (NSArray *)dataWithChangeLocation:(NSArray *)dataArray RefreshArr:(NSArray*)refreshArr conversionViewModel:(IMConversationViewModel *)conversionViewModel;


//remove chatId
+ (NSArray *)dataWithRemoveChatId:(NSArray *)dataArray ChatIdArr:(NSArray*)chatIdArr;


+ (void)handleConversationMessage:(NSArray *)dataArray;

+ (void)handleConversationMessage:(NSArray *)dataArray oldData: (NSMutableDictionary *)oldDataArray;

+ (NSArray *)conversionListFillter: (NSArray *)originalList targetList:(NSArray *)targetList targetChatIds:(NSArray *)targetChatIds conversionViewModel:(IMConversationViewModel *)conversionViewModel;

@end

NS_ASSUME_NONNULL_END
