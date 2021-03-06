/*
 *
 *  ZDKAttachmentCache.h
 *  ZendeskSDK
 *
 *  Created by Zendesk on 26/01/2015.
 *
 *  Copyright (c) 2015 Zendesk. All rights reserved.
 *
 *  By downloading or using the Zendesk Mobile SDK, You agree to the Zendesk Terms
 *  of Service https://www.zendesk.com/company/terms and Application Developer and API License
 *  Agreement https://www.zendesk.com/company/application-developer-and-api-license-agreement and
 *  acknowledge that such terms govern Your use of and access to the Mobile SDK.
 *
 */

#import <ZendeskSDK/ZendeskSDK.h>

@interface ZDKAttachmentCache : NSObject

/**
 *  Get an attachment from the cache with an attachment filename.
 *
 *  @param filename an attachment.
 *
 *  @return a UIIamge.
 */
+ (UIImage *) imageWithFilename:(NSString *)filename;

/**
 *  Cache an attachment.
 *
 *  @param image        the UIImage to be cached.
 *  @param filename     the id of the attachment being cached.
 */
+ (void) cacheImage:(UIImage *)image withFilename:(NSString *)filename;

/**
 *  Clears the attachment cache.
 */
+ (void) clearCache;

@end
