//
//  Ticket.h
//  FlightSearchRSN
//
//  Created by Sergey Razgulyaev on 25.01.2021.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Ticket : NSObject

@property (nonatomic, strong) NSNumber *price;
@property (nonatomic, strong) NSString *airline;
@property (nonatomic, strong) NSDate *departureDate;
@property (nonatomic, strong) NSDate *expires;
@property (nonatomic, strong) NSNumber *flightNumber;
@property (nonatomic, strong) NSDate *arrivalDate;
@property (nonatomic, strong) NSString *from;
@property (nonatomic, strong) NSString *to;

- (instancetype)initWithDictionary:(NSDictionary *)dictionary;
- (instancetype)initWithDeparturePlace:(NSString *)departurePlace ArrivalPlace:(NSString *)arrivalPlace Price: (NSNumber *)price;
    
@end

NS_ASSUME_NONNULL_END
