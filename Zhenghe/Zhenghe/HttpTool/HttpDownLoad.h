//
//  HttpDownLoad.h
//  bujilvxing
//
//  Created by liuYaLin on 16/6/25.
//  Copyright © 2016年 微创软件. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AFNetworking/AFNetworking.h>

#pragma mark--网络请求
enum HTTPMETHOD{
    METHOD_GET  =0,//get请求
    METHOD_POST =1,//post请求
};


@interface HttpDownLoad : NSObject


/**
 * iOS自带网络请求框架
 */
+ (void)requestURL:(NSString *)urlstring
        httpMethod:(NSString *)method
            params:(NSMutableDictionary *)params
       complection:(void(^)(id result))block;




@end
