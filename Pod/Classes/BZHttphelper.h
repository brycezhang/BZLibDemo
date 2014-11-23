//
//  BZHttphelper.h
//  Pods
//
//  Created by 创想 on 14/11/23.
//
//

#import <Foundation/Foundation.h>

@interface BZHttphelper : NSObject

- (void)getWithUrl:(NSString *)url withCompletion:(void (^)(id responseObject))completion failed:(void (^)(NSError *error))failed;

@end
