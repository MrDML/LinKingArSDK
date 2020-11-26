//
//  LEGoogleAdManager.h
//  LinKingArSDK
//
//  Created by leon on 2020/11/25.
//  Copyright © 2020 dml1630@163.com. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface LEGoogleAdManager : NSObject
@property (nonatomic, copy) void(^rewardAdDidEarnRewardCallBack)(void);
@property (nonatomic, copy) void(^rewardAdDidPresenCallBack)(void);
@property (nonatomic, copy) void(^rewardAdDidFailCallBack)(NSError *error);
@property (nonatomic, copy) void(^rewardAdDidDismissCallBack)(void);

@property (nonatomic, copy) void(^interstitialAdDidReceiveAdCallBack)(void);
@property (nonatomic, copy) void(^interstitialAdDidFailCallBack)(NSError *error);
@property (nonatomic, copy) void(^interstitialAdWillPresentCallBack)(void);
@property (nonatomic, copy) void(^interstitialAdWillDismissCallBack)(void);
@property (nonatomic, copy) void(^interstitialAdDidDismissCallBack)(void);
@property (nonatomic, copy) void(^interstitialAdWillLeaveCallBack)(void);

@property (nonatomic, copy) void(^bannerAdViewDidReceiveAdCallBack)(void);
@property (nonatomic, copy) void(^bannerAdViewDidFailCallBack)(NSError *error);
@property (nonatomic, copy) void(^bannerAdViewWillPresentCallBack)(void);
@property (nonatomic, copy) void(^bannerAdViewWillDismissCallBack)(void);
@property (nonatomic, copy) void(^bannerAdViewDidDismissCallBack)(void);
@property (nonatomic, copy) void(^bannerAdViewWillLeaveCallBack)(void);
+ (instancetype)shared;
/// 初始化广告
- (void)registerGoogleAd;
/// 初始化Banner广告
- (void)initializationGoogleBannerRootViewController:(UIViewController *)viewController superView:(UIView *)superView frame:(CGRect)frame;
/// 展示Banner广告
- (void)showGoogleBanner;
/// 移除Banner
- (void)removeBannerViewFromSuperView;
/// 初始化插屏广告
- (void)initializationGoogleInterstitialAd:(UIViewController *)viewController;
/// 展现插屏
- (void)showGoogleInterstitialAd;

/// 初始化激励视频广告
- (void)initializationGoogleRewardVideoAd:(UIViewController *)viewController;
/// 展示激励视频广告
- (void)showGoogleRewardVideoAd;
@end

NS_ASSUME_NONNULL_END
