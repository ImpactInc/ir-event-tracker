//
//  Event.h
//
//  Created by Tyler Thomas
//  Copyright (c) 2017 Impact Radius. All rights reserved.
//

#ifndef Event_h
#define Event_h
#import <Foundation/Foundation.h>




@interface Event : NSObject

@property (nonatomic, strong) NSMutableArray *itemArray;

- (NSMutableDictionary*) getEventParamTable;

- (id)init:(NSString *)eventName;
- (void) setActionTrackerId: (NSString *)actionTrackerId;
- (void) setCurrency: (NSString*)currency;
- (void) setClickId: (NSString*)clickId;
- (void) setCustomerId: (NSString*)customerId;
- (void) setCustomerEmail: (NSString *) customerEmail;
- (void) setCustomerStatus: (NSString*)status;
- (void) setCustomerCity: (NSString *)customerCity;
- (void) setCustomerCountry: (NSString *)customerCountry;
- (void) setCustomerRegion: (NSString *)customerRegion;
- (void) setCallerId: (NSString *)callerId;
- (void) setPhoneNumber: (NSString *) phoneNumber;
- (void) setDisposition: (NSString*)disp;
- (void) setExchangeRate: (NSString*)exchangeRate;
- (void) setEvent: (NSString*)event;
- (void) setNote: (NSString*)note;
- (void) setPostalCode: (NSString*)postalCode;
- (void) setPromoCode: (NSString*)promoCode;
- (void) setStatus: (NSString*)status;
- (void) setUserAgent: (NSString*)userAgent;
- (void) setRebate: (NSString*)rebate;
- (void) setSharedId: (NSString*)sharedId;
- (void) setText1: (NSString*)txt1;
- (void) setText2: (NSString*)txt2;
- (void) setText3: (NSString*)txt3;
- (void) setDate1: (NSString*)date1;
- (void) setDate2: (NSString*)date2;
- (void) setDate3: (NSString *)date3;
- (void) setMoney1: (NSString *)money1;
- (void) setMoney2: (NSString *)money2;
- (void) setMoney3: (NSString *)money3;
- (void) setNumeric1: (NSString *)numeric1;
- (void) setNumeric2: (NSString *)numeric2;
- (void) setNumeric3: (NSString *)numeric3;
- (void) setHearAboutUs: (NSString *)hearAboutUs;
- (void) setLocationId: (NSString *)locationId;
- (void) setLocationName: (NSString *)locationName;
- (void) setLocationType: (NSString *)locationType;
- (void) setDisplayDense: (NSString*)displayDense;
- (void) setConnType: (NSString*) connType;
- (void) setPayable: (BOOL)payable;
- (void) setPaymentType: (NSString *)paymentType;
- (void) setIpAddressCarrier: (NSString*)ipAddressCarrier;
- (void) setIpAddressWifi: (NSString*)ipAddressWifi;
- (void) setArmAbi: (NSString*)armAbi;
- (void) setCountryCode: (NSString*)countryCode;
- (void) setOrderId: (NSString *)orderId;
- (void) setOrderSubTotalPreDiscount: (NSString *)orderSubTotalPreDiscount;
- (void) setOrderSubTotalPostDiscount: (NSString *)orderSubTotalPostDiscount;
- (void) setOrderDiscount: (NSString *)orderDiscount;
- (void) setOrderPromoCodeDescription: (NSString *)orderPromoCodeDescription;
- (void) setOrderShipping: (NSString *)orderShipping;
- (void) setOrderTax: (NSString *)orderTax;
- (void) setGiftPurchase: (NSString *)giftPurchase;


- (BOOL)isSession;
- (BOOL)isInstall;
- (BOOL)isUpdate;
- (void)changeToUpdate;
- (void)changeToOpen;
- (void)changeToInstall;

@end

#endif //Event_h
