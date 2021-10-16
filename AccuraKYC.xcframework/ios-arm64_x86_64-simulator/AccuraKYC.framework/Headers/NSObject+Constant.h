//
//  NSObject+Constant.h
//  AccuraOCR
//
//  Created by Technozer on 17/02/21.
//  Copyright © 2021 Technozer. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface Constant: NSObject
    
FOUNDATION_EXPORT NSString *const ACCURA_ERROR_CODE_MOTION;
FOUNDATION_EXPORT NSString *const ACCURA_ERROR_CODE_DOCUMENT_IN_FRAME;
FOUNDATION_EXPORT NSString *const ACCURA_ERROR_CODE_BRING_DOCUMENT_IN_FRAME;
FOUNDATION_EXPORT NSString *const ACCURA_ERROR_CODE_PROCESSING;
FOUNDATION_EXPORT NSString *const ACCURA_ERROR_CODE_BLUR_DOCUMENT;
FOUNDATION_EXPORT NSString *const ACCURA_ERROR_CODE_FACE_BLUR;
FOUNDATION_EXPORT NSString *const ACCURA_ERROR_CODE_GLARE_DOCUMENT;
FOUNDATION_EXPORT NSString *const ACCURA_ERROR_CODE_HOLOGRAM;
FOUNDATION_EXPORT NSString *const ACCURA_ERROR_CODE_DARK_DOCUMENT;
FOUNDATION_EXPORT NSString *const ACCURA_ERROR_CODE_PHOTO_COPY_DOCUMENT;
FOUNDATION_EXPORT NSString *const ACCURA_ERROR_CODE_FACE;
FOUNDATION_EXPORT NSString *const ACCURA_ERROR_CODE_MRZ;
FOUNDATION_EXPORT NSString *const ACCURA_ERROR_CODE_PASSPORT_MRZ;
FOUNDATION_EXPORT NSString *const ACCURA_ERROR_CODE_ID_MRZ;
FOUNDATION_EXPORT NSString *const ACCURA_ERROR_CODE_VISA_MRZ;
FOUNDATION_EXPORT NSString *const ACCURA_ERROR_CODE_UPSIDE_DOWN_SIDE;
FOUNDATION_EXPORT NSString *const ACCURA_ERROR_CODE_WRONG_SIDE;
FOUNDATION_EXPORT NSString *const ACCURA_ERROR_CODE_OMAN_ID_IN_FRAME;

FOUNDATION_EXPORT int const SCAN_TITLE_OCR_FRONT;
FOUNDATION_EXPORT int const SCAN_TITLE_OCR_BACK;
FOUNDATION_EXPORT int const SCAN_TITLE_OCR;
FOUNDATION_EXPORT int const SCAN_TITLE_MRZ_FRONT;
FOUNDATION_EXPORT int const SCAN_TITLE_MRZ_BACK;
FOUNDATION_EXPORT int const SCAN_TITLE_DLPLATE;
FOUNDATION_EXPORT int const SCAN_TITLE_BARCODE;
FOUNDATION_EXPORT int const SCAN_TITLE_BANKCARD;


FOUNDATION_EXPORT int const ACCURA_LIVENESS_FEEDBACK_CODE_MOVE_PHONE_CENTER;// "Move Phone Center";
FOUNDATION_EXPORT int const ACCURA_LIVENESS_FEEDBACK_CODE_OPEN_EYES;// "Keep Your Eyes Open";
FOUNDATION_EXPORT int const ACCURA_LIVENESS_FEEDBACK_CODE_MOVE_PHONE_AWAY;// "Move Phone Away";
FOUNDATION_EXPORT int const ACCURA_LIVENESS_FEEDBACK_CODE_MOVE_PHONE_CLOSER;// "Move Phone Closer";
FOUNDATION_EXPORT int const ACCURA_LIVENESS_FEEDBACK_CODE_FRAME_YOUR_FACE;// "Frame Your Face";
FOUNDATION_EXPORT int const ACCURA_LIVENESS_FEEDBACK_CODE_MULTIPLE_FACES;// "Multiple face detected";
FOUNDATION_EXPORT int const ACCURA_LIVENESS_FEEDBACK_CODE_HEAD_STEADY;// "Keep Your Head Straight";
FOUNDATION_EXPORT int const ACCURA_LIVENESS_FEEDBACK_CODE_LOOK_LEFT;// "Look over your \"LEFT\" shoulder";
FOUNDATION_EXPORT int const ACCURA_LIVENESS_FEEDBACK_CODE_LOOK_RIGHT;// "Look over your \"RIGHT\" shoulder";
FOUNDATION_EXPORT int const ACCURA_LIVENESS_FEEDBACK_CODE_ORAL_VERIFICATION;// "Listening...";
FOUNDATION_EXPORT int const ACCURA_LIVENESS_FEEDBACK_CODE_APPROVED;// "Active Liveness Approved";
FOUNDATION_EXPORT int const ACCURA_LIVENESS_FEEDBACK_CODE_DARK_FACE;// "-2";
FOUNDATION_EXPORT int const ACCURA_LIVENESS_FEEDBACK_CODE_BLUR_FACE;// "-2";
FOUNDATION_EXPORT int const ACCURA_LIVENESS_FEEDBACK_CODE_GLARE;// "-3";




@end


