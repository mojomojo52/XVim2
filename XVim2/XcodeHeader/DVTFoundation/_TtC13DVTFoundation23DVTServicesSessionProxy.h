//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class DVTLogAspect, NSNumber, NSString;

@interface _TtC13DVTFoundation23DVTServicesSessionProxy : _TtCs12_SwiftObject
{
    // Error parsing type: , name: executionContext
    // Error parsing type: , name: portalServiceEndpoint
    // Error parsing type: , name: logAspect
    // Error parsing type: , name: defaults
}

- (id)sessionWithAdditionalLogAspect:(id)arg1;
- (void)updateWithResponseHeaders:(id)arg1;
- (id)authenticationHeadersForRequest:(id)arg1;
@property(nonatomic, readonly) NSString *portalServiceScheme;
@property(nonatomic, readonly) NSNumber *portalServicePort;
@property(nonatomic, readonly) NSString *portalServiceHostname;
@property(nonatomic, retain) DVTLogAspect *logAspect; // @synthesize logAspect;
@property(nonatomic) long long executionContext; // @synthesize executionContext;

@end

