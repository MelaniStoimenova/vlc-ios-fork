/*****************************************************************************
 * VLCMediaFileDownloader.h
 * VLC for iOS
 *****************************************************************************
 * Copyright (c) 2020 VideoLAN. All rights reserved.
 * $Id$
 *
 * Authors: Felix Paul Kühne <fkuehne # videolan.org>
 *
 * Refer to the COPYING file of the official project for license.
 *****************************************************************************/

@class VLCMedia;

@protocol VLCMediaFileDownloader <NSObject>
@required
- (void)downloadStartedWithIdentifier:(NSString *)identifier;
- (void)downloadEndedWithIdentifier:(NSString *)identifier;

@optional
- (void)downloadFailedWithIdentifier:(NSString *)identifier errorDescription:(NSString *)description;
- (void)progressUpdatedTo:(CGFloat)percentage receivedDataSize:(CGFloat)receivedDataSize  expectedDownloadSize:(CGFloat)expectedDownloadSize identifier:(NSString *)identifier;

@end

@interface VLCMediaFileDownloader : NSObject

@property (nonatomic, readonly) BOOL downloadInProgress;
@property (nonatomic, retain) id delegate;

- (void)cancelDownload;
- (NSString *)downloadFileFromVLCMedia:(VLCMedia *)media withName:(NSString *)name expectedDownloadSize:(unsigned long long)expectedDownloadSize;

@end
