//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDETestReport_Common-Protocol.h>

@class NSArray;
@protocol IDETestReport_Device;

@protocol IDETestReport_DeviceTestRuns <IDETestReport_Common>
@property(nonatomic, readonly) NSArray *ide_testReport_deviceTestRuns_testRuns;
@property(nonatomic, readonly) id <IDETestReport_Device> ide_testReport_deviceTestRuns_device;

@optional
@property(nonatomic, readonly) BOOL ide_testReport_deviceTestRuns_mixedStatus;
@end
