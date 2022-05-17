//
//  KTPDataModel.h
//  OCR
//
//  Created by MCOMM00008 on 19/04/22.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface KTPDataModel : NSObject
@property (nonatomic) NSString *provinsi;
@property (nonatomic) NSString *kabkota;
@property (nonatomic) NSString *NIK;
@property (nonatomic) NSString *nama;
@property (nonatomic) NSString *tempatLahir;
@property (nonatomic) NSString *tanggalLahir;
@property (nonatomic) NSString *jenisKelamin;
@property (nonatomic) NSString *golDarah;
@property (nonatomic) NSString *alamat;
@property (nonatomic) NSString *rt;
@property (nonatomic) NSString *rw;
@property (nonatomic) NSString *kelurahan;
@property (nonatomic) NSString *kecamatan;
@property (nonatomic) NSString *agama;
@property (nonatomic) NSString *statusPerkawinan;
@property (nonatomic) NSString *pekerjaan;
@property (nonatomic) NSString *kewarganegaraan;
@property (nonatomic) NSString *berlakuHingga;
@end

NS_ASSUME_NONNULL_END