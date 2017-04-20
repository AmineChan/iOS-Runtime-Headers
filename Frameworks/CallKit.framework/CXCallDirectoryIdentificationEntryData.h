/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

@interface CXCallDirectoryIdentificationEntryData : CXCallDirectoryEntryData {
    NSData * _labelData;
    NSData * _phoneNumberData;
}

@property (nonatomic, retain) NSData *labelData;
@property (nonatomic, retain) NSData *phoneNumberData;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned int)count;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)labelData;
- (long long)phoneNumberAtIndex:(unsigned int)arg1;
- (id)phoneNumberData;
- (void)setLabelData:(id)arg1;
- (void)setPhoneNumberData:(id)arg1;
- (const char *)utf8LabelAtIndex:(unsigned int)arg1 length:(out unsigned short*)arg2;

@end