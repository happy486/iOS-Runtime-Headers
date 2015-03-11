/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSData;

@interface SFUMemoryDataRepresentation : SFUDataRepresentation {
    NSData *mData;
}

- (id)bufferedInputStream;
- (id)bufferedInputStreamWithBufferSize:(unsigned long)arg1;
- (id)data;
- (long long)dataLength;
- (void)dealloc;
- (BOOL)hasSameLocationAs:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithDataNoCopy:(id)arg1;
- (id)initWithDataRepresentation:(id)arg1;
- (id)inputStream;
- (BOOL)isReadable;
- (unsigned long)readIntoData:(id)arg1;

@end