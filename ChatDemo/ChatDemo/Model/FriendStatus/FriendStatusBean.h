//
//  FriendStatusBean.h
//  ChatDemo
//
//  Created by acumen on 16/7/30.
//  Copyright © 2016年 acumen. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FriendStatusBean : NSObject

@property (strong,nonatomic) NSNumber *userId;
@property (strong,nonatomic) NSString *avatarUrl;
@property (strong,nonatomic) NSString *userName;
@property (strong,nonatomic) NSString *content;
@property (strong,nonatomic) NSArray *statusPics;
@property (strong,nonatomic) NSMutableArray *likes;
@property (strong,nonatomic) NSMutableArray *comments;
@property (assign,nonatomic) BOOL isOpen;
@property (assign,nonatomic) BOOL isCommentStatus;

@end
