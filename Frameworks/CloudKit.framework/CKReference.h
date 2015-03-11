/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class CKRecordID, NSString;

@interface CKReference : NSObject <CKRecordValue, NSSecureCoding, NSCopying> {
    CKRecordID *_recordID;
    unsigned int _referenceAction;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(copy) CKRecordID * recordID;
@property(readonly) unsigned int referenceAction;
@property(readonly) Class superclass;

+ (id)parentStructureRefForItemID:(id)arg1 zoneName:(id)arg2;
+ (BOOL)supportsSecureCoding;
+ (id)weakStructureRefForItemID:(id)arg1 zoneName:(id)arg2 forType:(BOOL)arg3;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)_initBare;
- (id)ckShortDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecord:(id)arg1 action:(unsigned int)arg2;
- (id)initWithRecordID:(id)arg1 action:(unsigned int)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)recordID;
- (unsigned int)referenceAction;
- (void)setRecordID:(id)arg1;

@end