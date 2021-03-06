/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPFileStorageManager : NSObject {
    BOOL  _hasClearedLegacyStorage;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic) BOOL hasClearedLegacyStorage;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)clearLegacyStorageIfNecessary;
- (void)dealloc;
- (void)deleteStorageAtURL:(id)arg1;
- (BOOL)hasClearedLegacyStorage;
- (id)imageWithName:(id)arg1;
- (id)init;
- (void)localeChanged;
- (id)queue;
- (void)saveImage:(id)arg1 withName:(id)arg2;
- (void)setHasClearedLegacyStorage:(BOOL)arg1;
- (void)setQueue:(id)arg1;
- (id)urlForFileSystem;
- (id)urlForLegacyFileSystem;

@end
