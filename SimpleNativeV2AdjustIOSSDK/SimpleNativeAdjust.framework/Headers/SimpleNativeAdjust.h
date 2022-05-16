//
//  SimpleNativeAdjust.h
//  SimpleNativeAdjust
//
//  Created by qus on 2021/6/30.
//

#import <Foundation/Foundation.h>
#import <Adjust/Adjust.h>
#import <SimpleNativeBase/SimpleNativeBase.h>


@interface SimpleNativeAdjust<SimpleSDKAttributionProtocol, AdjustDelegate, ThirdUploadLoggerProtocol> : NSObject

@property (nonatomic,strong) NSString * iosAdjustGameStart;
@property (nonatomic,strong) NSString * iosAdjustRegister;
@property (nonatomic,strong) NSString * iosAdjustLogin;
@property (nonatomic,strong) NSString * iosAdjustAddToCart;
@property (nonatomic,strong) NSString * iosAdjustInitCheckout;
@property (nonatomic,strong) NSString * iosAdjustPurchase;
@property (nonatomic,strong) NSString * iosAdjustSubscription;

@end
//! Project version number for SimpleNativeAdjust.
FOUNDATION_EXPORT double SimpleNativeAdjustVersionNumber;

//! Project version string for SimpleNativeAdjust.
FOUNDATION_EXPORT const unsigned char SimpleNativeAdjustVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <SimpleNativeAdjust/PublicHeader.h>


