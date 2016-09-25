/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCPrivateZoneController : NSObject {
    unsigned int  _changeCount;
    FCCommandQueue * _commandQueue;
    FCCloudContext * _context;
    BOOL  _dirty;
    unsigned int  _dirtyCount;
    FCKeyValueStore * _localStore;
    NSHashTable * _observers;
    BOOL  _preparedForUse;
    FCPushNotificationCenter * _pushNotificationCenter;
    FCCKRecordZone * _recordZone;
    NSHashTable * _stateObservers;
    NSString * _storeDirectory;
    FCAsyncSerialQueue * _syncQueue;
    BOOL  _syncingEnabled;
}

@property (nonatomic) unsigned int changeCount;
@property (nonatomic, retain) FCCommandQueue *commandQueue;
@property (nonatomic, readonly) FCCloudContext *context;
@property (getter=isDirty, nonatomic) BOOL dirty;
@property (nonatomic) unsigned int dirtyCount;
@property (nonatomic, retain) NSDate *lastSyncDate;
@property (nonatomic, readonly) FCKeyValueStore *localStore;
@property (nonatomic, readonly) NSHashTable *observers;
@property (getter=hasBeenPreparedForUse, nonatomic) BOOL preparedForUse;
@property (nonatomic, retain) FCPushNotificationCenter *pushNotificationCenter;
@property (nonatomic, retain) FCCKRecordZone *recordZone;
@property (nonatomic, retain) NSHashTable *stateObservers;
@property (nonatomic, copy) NSString *storeDirectory;
@property (nonatomic, retain) FCAsyncSerialQueue *syncQueue;
@property (getter=isSyncingEnabled, nonatomic) BOOL syncingEnabled;
@property (getter=isSyncingEnabled, nonatomic, readonly) BOOL syncingEnabled;

+ (int)commandQueueUrgency;
+ (id)commandStoreFileName;
+ (id)commandsToMergeLocalDataToCloud:(id)arg1;
+ (id)desiredKeys;
+ (id)internalLocalStoreKeys;
+ (BOOL)isLocalStoreKeyInternal:(id)arg1;
+ (id)localStoreFilename;
+ (id)localStoreMigrator;
+ (unsigned int)localStoreVersion;
+ (void)populateLocalStoreClassRegistry:(id)arg1;
+ (id)recordIDsToSync;
+ (BOOL)requiresBatchedSync;
+ (BOOL)requiresHighPriorityFirstSync;
+ (BOOL)requiresPushNotificationSupport;

- (void).cxx_destruct;
- (void)_markAsClean;
- (void)_markAsDirty;
- (void)_serialSyncWithCompletion:(id /* block */)arg1;
- (void)addCommandToCommandQueue:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)addStateObserver:(id)arg1;
- (unsigned int)changeCount;
- (id)commandQueue;
- (id)context;
- (void)createLocalStore;
- (void)dealloc;
- (unsigned int)dirtyCount;
- (void)disableSyncing;
- (void)enableSyncing;
- (void)forceSyncWithCompletion:(id /* block */)arg1;
- (void)handleSyncWithChangedRecords:(id)arg1 deletedRecordIDs:(id)arg2;
- (BOOL)hasBeenPreparedForUse;
- (id)init;
- (id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 recordZone:(id)arg3 storeDirectory:(id)arg4;
- (BOOL)isDirty;
- (BOOL)isSyncingEnabled;
- (id)lastSyncDate;
- (void)loadLocalCachesFromStore;
- (id)localStore;
- (void)manualDirty;
- (void)mergeLocalStoreWithCloud;
- (id)observers;
- (void)prepareForUse;
- (id)pushNotificationCenter;
- (id)recordZone;
- (void)removeObserver:(id)arg1;
- (void)removeStateObserver:(id)arg1;
- (void)saveWithCompletion:(id /* block */)arg1;
- (void)setChangeCount:(unsigned int)arg1;
- (void)setCommandQueue:(id)arg1;
- (void)setDirty:(BOOL)arg1;
- (void)setDirtyCount:(unsigned int)arg1;
- (void)setLastSyncDate:(id)arg1;
- (void)setPreparedForUse:(BOOL)arg1;
- (void)setPushNotificationCenter:(id)arg1;
- (void)setRecordZone:(id)arg1;
- (void)setStateObservers:(id)arg1;
- (void)setStoreDirectory:(id)arg1;
- (void)setSyncQueue:(id)arg1;
- (void)setSyncingEnabled:(BOOL)arg1;
- (id)stateObservers;
- (id)storeDirectory;
- (id)syncQueue;
- (void)syncWithCompletion:(id /* block */)arg1;

@end