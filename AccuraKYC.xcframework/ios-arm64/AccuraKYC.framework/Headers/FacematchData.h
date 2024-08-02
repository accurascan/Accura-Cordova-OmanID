//
//  LivenessData.h
//  AccuraOCR
//
//  Created by Technozer on 17/02/21.
//  Copyright © 2021 Technozer. All rights reserved.
//

#import <Foundation/Foundation.h>



@protocol FacematchData <NSObject>
-(void) FacematchData:(UIImage*)FaceImage;
-(void) FacematchData:(UIImage*)FaceImage FaceImage2:(UIImage*)FaceImage2 FaceImage3:(UIImage*)FaceImage3;
-(void) FacematchViewDisappear;
@end

