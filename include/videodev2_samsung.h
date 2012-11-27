/*
 * Video for Linux Two header file for samsung
 *
 * Copyright (C) 2009, Samsung Electronics
 *
 * This header file contains several v4l2 APIs to be proposed to v4l2
 * community and until bein accepted, will be used restrictly in Samsung's
 * camera interface driver FIMC.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */

#ifndef __LINUX_VIDEODEV2_SAMSUNG_H
#define __LINUX_VIDEODEV2_SAMSUNG_H

/* Values for 'capabilities' field */
/* Object detection device */
#define V4L2_CAP_OBJ_RECOGNITION	0x10000000
/* strobe control */
#define V4L2_CAP_STROBE			0x20000000

/* sensor state */
enum
{
    V4L2_MODE_PREVIEW = 0,	/*  preview mode */
    V4L2_MODE_CAPTURE	    /*  capture mode */
};

#define V4L2_CID_FOCUS_MODE			            (V4L2_CID_CAMERA_CLASS_BASE+17)
/* Focus Methods */
enum v4l2_focus_mode 
{
	V4L2_FOCUS_MODE_AUTO		= 0,
	V4L2_FOCUS_MODE_MACRO		= 1,
	V4L2_FOCUS_MODE_MANUAL		= 2,
	V4L2_FOCUS_MODE_LASTP		= 2,
};

#define V4L2_CID_ZOOM_MODE				        (V4L2_CID_CAMERA_CLASS_BASE+18)
/* Zoom Methods */
enum v4l2_zoom_mode 
{
	V4L2_ZOOM_MODE_CONTINUOUS	= 0,
	V4L2_ZOOM_MODE_OPTICAL		= 1,
	V4L2_ZOOM_MODE_DIGITAL		= 2,
	V4L2_ZOOM_MODE_LASTP		= 2,
};

/* Exposure Methods */
#define V4L2_CID_PHOTOMETRY		                (V4L2_CID_CAMERA_CLASS_BASE+19)
enum v4l2_photometry_mode 
{
	V4L2_PHOTOMETRY_MULTISEG	= 0, /* Multi Segment */
	V4L2_PHOTOMETRY_CWA		    = 1, /* Centre Weighted Average */
	V4L2_PHOTOMETRY_SPOT		= 2,
	V4L2_PHOTOMETRY_AFSPOT		= 3, /* Spot metering on focused point */
	V4L2_PHOTOMETRY_LASTP		= V4L2_PHOTOMETRY_AFSPOT,
};

/* Manual exposure control items menu type: iris, shutter, iso */
#define V4L2_CID_CAM_APERTURE	                (V4L2_CID_CAMERA_CLASS_BASE+20)
#define V4L2_CID_CAM_SHUTTER	                (V4L2_CID_CAMERA_CLASS_BASE+21)
#define V4L2_CID_CAM_ISO	                    (V4L2_CID_CAMERA_CLASS_BASE+22)

/* Following CIDs are menu type */
#define V4L2_CID_SCENEMODE	                    (V4L2_CID_CAMERA_CLASS_BASE+23)
#define V4L2_CID_CAM_STABILIZE	                (V4L2_CID_CAMERA_CLASS_BASE+24)
#define V4L2_CID_CAM_MULTISHOT	                (V4L2_CID_CAMERA_CLASS_BASE+25)

/* Control dynamic range */
#define V4L2_CID_CAM_DR		                    (V4L2_CID_CAMERA_CLASS_BASE+26)

/* White balance preset control */
#define V4L2_CID_WHITE_BALANCE_PRESET	        (V4L2_CID_CAMERA_CLASS_BASE+27)

#define V4L2_CID_CAMERA_GPS_LATITUDE		    (V4L2_CID_CAMERA_CLASS_BASE+30)
#define V4L2_CID_CAMERA_GPS_LONGITUDE	        (V4L2_CID_CAMERA_CLASS_BASE+31)
#define V4L2_CID_CAMERA_GPS_TIMESTAMP	        (V4L2_CID_CAMERA_CLASS_BASE+32)
#define V4L2_CID_CAMERA_GPS_ALTITUDE		    (V4L2_CID_CAMERA_CLASS_BASE+33)
#define V4L2_CID_CAMERA_EXIF_TIME_INFO	        (V4L2_CID_CAMERA_CLASS_BASE+34)
#define V4L2_CID_CAMERA_GPS_PROCESSINGMETHOD    (V4L2_CID_CAMERA_CLASS_BASE+35)

/* CID extensions */
#define V4L2_CID_ROTATION		                (V4L2_CID_PRIVATE_BASE+0)
#define V4L2_CID_PADDR_Y		                (V4L2_CID_PRIVATE_BASE+1)
#define V4L2_CID_PADDR_CB		                (V4L2_CID_PRIVATE_BASE+2)
#define V4L2_CID_PADDR_CR		                (V4L2_CID_PRIVATE_BASE+3)
#define V4L2_CID_PADDR_CBCR		                (V4L2_CID_PRIVATE_BASE+4)
#define V4L2_CID_OVERLAY_AUTO                   (V4L2_CID_PRIVATE_BASE+5)
#define V4L2_CID_OVERLAY_VADDR0                 (V4L2_CID_PRIVATE_BASE+6)
#define V4L2_CID_OVERLAY_VADDR1                 (V4L2_CID_PRIVATE_BASE+7)
#define V4L2_CID_OVERLAY_VADDR2                 (V4L2_CID_PRIVATE_BASE+8)
#define V4L2_CID_OVLY_MODE                      (V4L2_CID_PRIVATE_BASE+9)
#define V4L2_CID_DST_INFO                       (V4L2_CID_PRIVATE_BASE+10)

/* UMP secure id control */
#define V4L2_CID_GET_PHY_SRC_YADDR 	            (V4L2_CID_PRIVATE_BASE+12)
#define V4L2_CID_GET_PHY_SRC_CADDR 	            (V4L2_CID_PRIVATE_BASE+13)
#define V4L2_CID_CAM_DATE_INFO_YEAR           	(V4L2_CID_PRIVATE_BASE+14)
#define V4L2_CID_CAM_DATE_INFO_MONTH           	(V4L2_CID_PRIVATE_BASE+15)
#define V4L2_CID_IMAGE_EFFECT_FN	            (V4L2_CID_PRIVATE_BASE+16)
#define V4L2_CID_IMAGE_EFFECT_APPLY	            (V4L2_CID_PRIVATE_BASE+17)
#define V4L2_CID_IMAGE_EFFECT_CB	            (V4L2_CID_PRIVATE_BASE+18)
#define V4L2_CID_IMAGE_EFFECT_CR	            (V4L2_CID_PRIVATE_BASE+19)
#define V4L2_CID_RESERVED_MEM_BASE_ADDR	        (V4L2_CID_PRIVATE_BASE+20)
#define V4L2_CID_FIMC_VERSION		            (V4L2_CID_PRIVATE_BASE+21)

/* CID Extensions for camera sensor operations */
#define V4L2_CID_CAM_DATE_INFO_DATE             (V4L2_CID_PRIVATE_BASE+22)
#define V4L2_CID_CAM_SENSOR_VER                 (V4L2_CID_PRIVATE_BASE+23)
#define V4L2_CID_CAM_FW_MINOR_VER               (V4L2_CID_PRIVATE_BASE+24)
#define V4L2_CID_CAM_FW_MAJOR_VER               (V4L2_CID_PRIVATE_BASE+25)
#define V4L2_CID_CAM_PRM_MINOR_VER              (V4L2_CID_PRIVATE_BASE+26)
#define V4L2_CID_CAM_PRM_MAJOR_VER              (V4L2_CID_PRIVATE_BASE+27)
#define V4L2_CID_CAM_FW_VER                     (V4L2_CID_PRIVATE_BASE+28)
#define V4L2_CID_CAM_SET_FW_ADDR                (V4L2_CID_PRIVATE_BASE+29)
#define V4L2_CID_CAM_SET_FW_SIZE                (V4L2_CID_PRIVATE_BASE+30)
#define V4L2_CID_CAM_UPDATE_FW	                (V4L2_CID_PRIVATE_BASE+31)
#define V4L2_CID_CAM_JPEG_MAIN_SIZE		        (V4L2_CID_PRIVATE_BASE+32)
#define V4L2_CID_CAM_JPEG_MAIN_OFFSET           (V4L2_CID_PRIVATE_BASE+33)
#define V4L2_CID_CAM_JPEG_THUMB_SIZE            (V4L2_CID_PRIVATE_BASE+34)
#define V4L2_CID_CAM_JPEG_THUMB_OFFSET          (V4L2_CID_PRIVATE_BASE+35)
#define V4L2_CID_CAM_JPEG_POSTVIEW_OFFSET	    (V4L2_CID_PRIVATE_BASE+36)
#define V4L2_CID_CAM_JPEG_QUALITY	            (V4L2_CID_PRIVATE_BASE+37)
enum v4l2_quality
{
    JPEG_QUALITY_SUPERFINE = 0,
    JPEG_QUALITY_FINE,
    JPEG_QUALITY_NORMAL,
    JPEG_QUALITY_ECONOMY,
    JPEG_QUALITY_MAX,
};

#define V4L2_CID_CAM_SENSOR_MAKER	            (V4L2_CID_PRIVATE_BASE+38)
#define V4L2_CID_CAM_SENSOR_OPTICAL	            (V4L2_CID_PRIVATE_BASE+39)
#define V4L2_CID_CAM_AF_VER_LOW		            (V4L2_CID_PRIVATE_BASE+40)
#define V4L2_CID_CAM_AF_VER_HIGH	            (V4L2_CID_PRIVATE_BASE+41)
#define V4L2_CID_CAM_GAMMA_RG_LOW	            (V4L2_CID_PRIVATE_BASE+42)
#define V4L2_CID_CAM_GAMMA_RG_HIGH	            (V4L2_CID_PRIVATE_BASE+43)
#define V4L2_CID_CAM_GAMMA_BG_LOW	            (V4L2_CID_PRIVATE_BASE+44)
#define V4L2_CID_CAM_GAMMA_BG_HIGH	            (V4L2_CID_PRIVATE_BASE+45)
#define V4L2_CID_CAM_DUMP_FW		            (V4L2_CID_PRIVATE_BASE+46)
#define V4L2_CID_CAM_GET_DUMP_SIZE              (V4L2_CID_PRIVATE_BASE+47)

#define V4L2_CID_CAMERA_VT_MODE  	            (V4L2_CID_PRIVATE_BASE+48)
enum v4l2_vt_mode
{
    VT_MODE_OFF = 0,
    VT_MODE_ON,
    VT_MODE_MAX,
};
    
#define V4L2_CID_CAMERA_VGA_BLUR  	            (V4L2_CID_PRIVATE_BASE+49)
enum v4l2_blur
{
	BLUR_LEVEL_0 = 0,
	BLUR_LEVEL_1,
	BLUR_LEVEL_2,
	BLUR_LEVEL_3,
	BLUR_LEVEL_MAX,
};

#define V4L2_CID_CAMERA_CAPTURE  	            (V4L2_CID_PRIVATE_BASE+50)

#define V4L2_CID_STREAM_PAUSE			        (V4L2_CID_PRIVATE_BASE+53)

#define V4L2_CID_MAIN_SW_DATE_INFO_YEAR		    (V4L2_CID_PRIVATE_BASE+54)
#define V4L2_CID_MAIN_SW_DATE_INFO_MONTH	    (V4L2_CID_PRIVATE_BASE+55)
#define V4L2_CID_MAIN_SW_DATE_INFO_DATE		    (V4L2_CID_PRIVATE_BASE+56)
#define V4L2_CID_MAIN_SW_FW_MINOR_VER		    (V4L2_CID_PRIVATE_BASE+57)
#define V4L2_CID_MAIN_SW_FW_MAJOR_VER		    (V4L2_CID_PRIVATE_BASE+58)
#define V4L2_CID_MAIN_SW_PRM_MINOR_VER		    (V4L2_CID_PRIVATE_BASE+59)
#define V4L2_CID_MAIN_SW_PRM_MAJOR_VER		    (V4L2_CID_PRIVATE_BASE+60)

#define V4L2_CID_CAM_PREVIEW_ONOFF		        (V4L2_CID_PRIVATE_BASE+64)
#define V4L2_CID_CAM_CAPTURE			        (V4L2_CID_PRIVATE_BASE+65)
#define V4L2_CID_CAM_JPEG_MEMSIZE		        (V4L2_CID_PRIVATE_BASE+66)
#define V4L2_CID_CAM_CAPTURE_DONE			    (V4L2_CID_PRIVATE_BASE+67)

#define V4L2_CID_CAMERA_SCENE_MODE		        (V4L2_CID_PRIVATE_BASE+70)
enum v4l2_scene_mode
{
	SCENE_MODE_BASE,
	SCENE_MODE_NONE,
	SCENE_MODE_PORTRAIT,
	SCENE_MODE_NIGHTSHOT,
	SCENE_MODE_BACK_LIGHT,
	SCENE_MODE_LANDSCAPE,
	SCENE_MODE_SPORTS,
	SCENE_MODE_PARTY_INDOOR,
	SCENE_MODE_BEACH_SNOW,
	SCENE_MODE_SUNSET,
	SCENE_MODE_DUSK_DAWN,
	SCENE_MODE_FALL_COLOR,
	SCENE_MODE_FIREWORKS,
	SCENE_MODE_TEXT,
	SCENE_MODE_CANDLE_LIGHT,
	SCENE_MODE_MAX,
};

#define V4L2_CID_CAMERA_FLASH_MODE		        (V4L2_CID_PRIVATE_BASE+71)
enum v4l2_flash_mode
{
	FLASH_MODE_BASE,
	FLASH_MODE_OFF,
	FLASH_MODE_AUTO,
	FLASH_MODE_ON,
	FLASH_MODE_TORCH,
	FLASH_MODE_TORCH_ON,
	FLASH_MODE_TORCH_OFF,
	FLASH_MODE_BACKLIGHT_ON,
	FLASH_MODE_TORCH_ALWAYS_ON,
	FLASH_MODE_MAX,
};

#define V4L2_CID_CAMERA_BRIGHTNESS		        (V4L2_CID_PRIVATE_BASE+72)
enum v4l2_brightness_mode
{
    BRIGHTNESS_1 = 0,
    BRIGHTNESS_2,
    BRIGHTNESS_3,
    BRIGHTNESS_4,
    BRIGHTNESS_5,   // Default
    BRIGHTNESS_6,
    BRIGHTNESS_7,
    BRIGHTNESS_8,
    BRIGHTNESS_9,
};

enum v4l2_ev_mode
{
	EV_MINUS_4 = 0,
	EV_MINUS_3,
	EV_MINUS_2,
	EV_MINUS_1,
	EV_DEFAULT,
	EV_PLUS_1,
	EV_PLUS_2,
	EV_PLUS_3,
	EV_PLUS_4,
	EV_MAX,
};

#define V4L2_CID_CAMERA_WHITE_BALANCE	        (V4L2_CID_PRIVATE_BASE+73)
enum v4l2_wb_mode 
{	
	WHITE_BALANCE_BASE = 0,
	WHITE_BALANCE_AUTO,
	WHITE_BALANCE_SUNNY,
	WHITE_BALANCE_CLOUDY,
	WHITE_BALANCE_TUNGSTEN,   // WHITE_BALANCE_INCANDESCENT
	WHITE_BALANCE_FLUORESCENT,
	WHITE_BALANCE_MAX,
};

#define V4L2_CID_CAMERA_EFFECT			        (V4L2_CID_PRIVATE_BASE+74)
enum v4l2_effect_mode 
{
	IMAGE_EFFECT_BASE = 0,
	IMAGE_EFFECT_NONE,
	IMAGE_EFFECT_BNW,
	IMAGE_EFFECT_SEPIA,
	IMAGE_EFFECT_AQUA,
	IMAGE_EFFECT_ANTIQUE,
	IMAGE_EFFECT_NEGATIVE,
	IMAGE_EFFECT_SHARPEN,
	IMAGE_EFFECT_MAX,
};

#define V4L2_CID_CAMERA_ISO				        (V4L2_CID_PRIVATE_BASE+75)
enum v4l2_iso_mode 
{
	ISO_AUTO = 0,
	ISO_50,
	ISO_100,
	ISO_200,
	ISO_400,
	ISO_800,
	ISO_1600,
	ISO_SPORTS,	
	ISO_NIGHT,
	ISO_MOVIE,
	ISO_MAX,
};

#define V4L2_CID_CAMERA_METERING			    (V4L2_CID_PRIVATE_BASE+76)
enum v4l2_metering_mode 
{
	METERING_BASE = 0,
	METERING_MATRIX,
	METERING_CENTER,
	METERING_SPOT,
	METERING_MAX,
};

#define V4L2_CID_CAMERA_CONTRAST			    (V4L2_CID_PRIVATE_BASE+77)
enum v4l2_contrast_mode 
{
	CONTRAST_MINUS_2 = 0,
	CONTRAST_MINUS_1,
	CONTRAST_DEFAULT,
	CONTRAST_PLUS_1,
	CONTRAST_PLUS_2,
	CONTRAST_MAX,
};

#define V4L2_CID_CAMERA_SATURATION		        (V4L2_CID_PRIVATE_BASE+78)
enum v4l2_saturation_mode 
{
	SATURATION_MINUS_2 = 0,
	SATURATION_MINUS_1,
	SATURATION_DEFAULT,
	SATURATION_PLUS_1,
	SATURATION_PLUS_2,
	SATURATION_MAX,
};

#define V4L2_CID_CAMERA_SHARPNESS		        (V4L2_CID_PRIVATE_BASE+79)
enum v4l2_sharpness_mode 
{
	SHARPNESS_MINUS_2 = 0,
	SHARPNESS_MINUS_1,
	SHARPNESS_DEFAULT,
	SHARPNESS_PLUS_1,
	SHARPNESS_PLUS_2,
	SHARPNESS_MAX,
};

#define V4L2_CID_CAMERA_WDR				        (V4L2_CID_PRIVATE_BASE+80)
enum v4l2_wdr_mode 
{
	WDR_OFF,
	WDR_ON,	
	WDR_MAX,
};

#define V4L2_CID_CAMERA_ANTI_SHAKE		        (V4L2_CID_PRIVATE_BASE+81)
enum v4l2_anti_shake_mode 
{
	ANTI_SHAKE_OFF,
	ANTI_SHAKE_STILL_ON,	
	ANTI_SHAKE_MOVIE_ON,
	ANTI_SHAKE_MAX,
};

#define V4L2_CID_CAMERA_TOUCH_AF_START_STOP     (V4L2_CID_PRIVATE_BASE+82)
enum v4l2_touch_af 
{
	TOUCH_AF_STOP = 0,
	TOUCH_AF_START,
	TOUCH_AF_MAX,
};

#define V4L2_CID_CAMERA_SMART_AUTO		        (V4L2_CID_PRIVATE_BASE+83)
enum v4l2_smart_auto 
{
	SMART_AUTO_OFF = 0,
	SMART_AUTO_ON,
	SMART_AUTO_MAX,
};

#define V4L2_CID_CAMERA_VINTAGE_MODE		    (V4L2_CID_PRIVATE_BASE+84)
enum v4l2_vintage_mode 
{
	VINTAGE_MODE_BASE,
	VINTAGE_MODE_OFF,		
	VINTAGE_MODE_NORMAL,
	VINTAGE_MODE_WARM,
	VINTAGE_MODE_COOL,
	VINTAGE_MODE_BNW,
	VINTAGE_MODE_MAX,	
};

#define V4L2_CID_CAMERA_MON_MOVIE_SELECT        (V4L2_CID_PRIVATE_BASE+86)
#define V4L2_CID_CAMERA_ZOOM				    (V4L2_CID_PRIVATE_BASE+90)
enum v4l2_zoom_level 
{
	ZOOM_LEVEL_0 = 0,
	ZOOM_LEVEL_1,
	ZOOM_LEVEL_2,
	ZOOM_LEVEL_3,
	ZOOM_LEVEL_4,
	ZOOM_LEVEL_5,
	ZOOM_LEVEL_6,
	ZOOM_LEVEL_7,
	ZOOM_LEVEL_8,
	ZOOM_LEVEL_9,
	ZOOM_LEVEL_10,
	ZOOM_LEVEL_11,
	ZOOM_LEVEL_12,
	ZOOM_LEVEL_13,
	ZOOM_LEVEL_14,
	ZOOM_LEVEL_15,
	ZOOM_LEVEL_16,
	ZOOM_LEVEL_17,
	ZOOM_LEVEL_18,
	ZOOM_LEVEL_19,
	ZOOM_LEVEL_20,
	ZOOM_LEVEL_21,
	ZOOM_LEVEL_22,
	ZOOM_LEVEL_23,
	ZOOM_LEVEL_24,
	ZOOM_LEVEL_25,
	ZOOM_LEVEL_26,
	ZOOM_LEVEL_27,
	ZOOM_LEVEL_28,
	ZOOM_LEVEL_29,
	ZOOM_LEVEL_30,
	ZOOM_LEVEL_MAX,
};

#define V4L2_CID_CAMERA_FACE_DETECTION		    (V4L2_CID_PRIVATE_BASE+91)
enum v4l2_face_detection 
{
	FACE_DETECTION_OFF = 0,
	FACE_DETECTION_ON,
	FACE_DETECTION_NOLINE,
	FACE_DETECTION_ON_BEAUTY,
	FACE_DETECTION_MAX,
};

#define V4L2_CID_CAMERA_SMART_AUTO_STATUS       (V4L2_CID_PRIVATE_BASE+92)
enum v4l2_smart_auto_status 
{
	SMART_AUTO_STATUS_AUTO = 0,
	SMART_AUTO_STATUS_LANDSCAPE,
	SMART_AUTO_STATUS_PORTRAIT,
	SMART_AUTO_STATUS_MACRO,
	SMART_AUTO_STATUS_NIGHT,
	SMART_AUTO_STATUS_PORTRAIT_NIGHT,
	SMART_AUTO_STATUS_BACKLIT,
	SMART_AUTO_STATUS_PORTRAIT_BACKLIT,
	SMART_AUTO_STATUS_ANTISHAKE,
	SMART_AUTO_STATUS_PORTRAIT_ANTISHAKE,	
	SMART_AUTO_STATUS_MAX,
};

#define V4L2_CID_CAMERA_SET_AUTO_FOCUS          (V4L2_CID_PRIVATE_BASE+93)
enum v4l2_auto_focus
{
	AUTO_FOCUS_OFF = 0,
	AUTO_FOCUS_ON,
	AUTO_FOCUS_MAX,
};

#define V4L2_CID_CAMERA_BEAUTY_SHOT             (V4L2_CID_PRIVATE_BASE+94)
enum v4l2_beauty_shot 
{
	BEAUTY_SHOT_OFF = 0,
	BEAUTY_SHOT_ON,
	BEAUTY_SHOT_MAX,
};

#define V4L2_CID_CAMERA_AE_AWB_LOCKUNLOCK       (V4L2_CID_PRIVATE_BASE+95)
enum v4l2_ae_awb_lockunlock 
{
	AE_UNLOCK_AWB_UNLOCK = 0,
	AE_LOCK_AWB_UNLOCK,
	AE_UNLOCK_AWB_LOCK,
	AE_LOCK_AWB_LOCK,
	AE_AWB_MAX
};

#define V4L2_CID_CAMERA_FACEDETECT_LOCKUNLOCK   (V4L2_CID_PRIVATE_BASE+96)
enum v4l2_face_lock 
{
	FACE_LOCK_OFF = 0,
	FACE_LOCK_ON,
	FIRST_FACE_TRACKING,
	FACE_LOCK_MAX,
};

#define V4L2_CID_CAMERA_OBJECT_POSITION_X	    (V4L2_CID_PRIVATE_BASE+97)
#define V4L2_CID_CAMERA_OBJECT_POSITION_Y	    (V4L2_CID_PRIVATE_BASE+98)
#define V4L2_CID_CAMERA_FOCUS_MODE		        (V4L2_CID_PRIVATE_BASE+99)
enum v4l2_focusmode 
{
	FOCUS_MODE_AUTO = 0,
	FOCUS_MODE_MACRO,
	FOCUS_MODE_FACEDETECT,
	FOCUS_MODE_AUTO_DEFAULT,
	FOCUS_MODE_MACRO_DEFAULT,
	FOCUS_MODE_FACEDETECT_DEFAULT,
	FOCUS_MODE_INFINITY,
	FOCUS_MODE_FIXED,
	FOCUS_MODE_POWEROFF,
	FOCUS_MODE_MAX,
};

#define V4L2_CID_CAMERA_DEFAULT_FOCUS_POSITION  (V4L2_CID_PRIVATE_BASE+100)

#define V4L2_CID_CAMERA_OBJ_TRACKING_STATUS	    (V4L2_CID_PRIVATE_BASE+101)
enum v4l2_obj_tracking_status 
{
	OBJECT_TRACKING_STATUS_BASE,
	OBJECT_TRACKING_STATUS_PROGRESSING,
	OBJECT_TRACKING_STATUS_SUCCESS, 	
	OBJECT_TRACKING_STATUS_FAIL,
	OBJECT_TRACKING_STATUS_MISSING,
	OBJECT_TRACKING_STATUS_MAX,
};

#define V4L2_CID_CAMERA_OBJ_TRACKING_START_STOP	(V4L2_CID_PRIVATE_BASE+102)
enum v4l2_ot_start_stop 
{
	OT_STOP = 0,
	OT_START,
	OT_MAX,
};

#define V4L2_CID_CAMERA_CAF_START_STOP	        (V4L2_CID_PRIVATE_BASE+103)
enum v4l2_caf_start_stop 
{
	CAF_STOP = 0,
	CAF_START,
	CAF_MAX,
};

#define V4L2_CID_CAMERA_AUTO_FOCUS_RESULT	    (V4L2_CID_PRIVATE_BASE+104)
#define V4L2_CID_CAMERA_FRAME_RATE			    (V4L2_CID_PRIVATE_BASE+105)
enum v4l2_frame_rate 
{
	FRAME_RATE_AUTO	= 0,
	FRAME_RATE_7	= 7,
	FRAME_RATE_10	= 10,
	FRAME_RATE_15	= 15,
	FRAME_RATE_20	= 20,
	FRAME_RATE_30	= 30,
	FRAME_RATE_60	= 60,
	FRAME_RATE_120	= 120,
	FRAME_RATE_MAX
};

#define V4L2_CID_CAMERA_ANTI_BANDING		    (V4L2_CID_PRIVATE_BASE+106)
enum v4l2_anti_banding 
{
	ANTI_BANDING_AUTO	= 0,
	ANTI_BANDING_50HZ	= 1,
	ANTI_BANDING_60HZ	= 2,
	ANTI_BANDING_OFF	= 3,
};

#define V4L2_CID_CAMERA_SET_GAMMA	            (V4L2_CID_PRIVATE_BASE+107)
enum v4l2_gamma_mode 
{
	GAMMA_OFF	= 0,
	GAMMA_ON	= 1,
	GAMMA_MAX,
};

#define V4L2_CID_CAMERA_SET_SLOW_AE	            (V4L2_CID_PRIVATE_BASE+108)
enum v4l2_slow_ae_mode 
{
	SLOW_AE_OFF,
	SLOW_AE_ON,
	SLOW_AE_MAX,
};

#define V4L2_CID_CAMERA_BATCH_REFLECTION        (V4L2_CID_PRIVATE_BASE+109)
#define V4L2_CID_CAMERA_EXIF_ORIENTATION        (V4L2_CID_PRIVATE_BASE+110)

#define V4L2_CID_CAMERA_RESET                   (V4L2_CID_PRIVATE_BASE+111)
#define V4L2_CID_CAMERA_CHECK_DATALINE          (V4L2_CID_PRIVATE_BASE+112)
enum v4l2_check_dataline
{
    CHK_DATALINE_OFF,
    CHK_DATALINE_ON,
    CHK_DATALINE_MAX,
};
    
#define V4L2_CID_CAMERA_CHECK_DATALINE_STOP     (V4L2_CID_PRIVATE_BASE+113)

#define V4L2_CID_CAMERA_THUMBNAIL_NULL          (V4L2_CID_PRIVATE_BASE+115)
#define V4L2_CID_CAMERA_GET_ISO					(V4L2_CID_PRIVATE_BASE+116) 
#define V4L2_CID_CAMERA_GET_SHT_TIME			(V4L2_CID_PRIVATE_BASE+117) 
#define V4L2_CID_CAMERA_SENSOR_MODE             (V4L2_CID_PRIVATE_BASE+118) 
enum v4l2_sensor_mode
{
    SENSOR_MODE_CAMERA = 0,
    SENSOR_MODE_MOVIE,
};
    
#define V4L2_CID_CAMERA_FLASH_CHECK             (V4L2_CID_PRIVATE_BASE+119)

#define V4L2_CID_CAMERA_POSTVIEW_WIDTH          (V4L2_CID_PRIVATE_BASE+120) 
#define V4L2_CID_CAMERA_POSTVIEW_HEIGHT         (V4L2_CID_PRIVATE_BASE+121) 

#define V4L2_CID_CAMERA_SENSOR_ID               (V4L2_CID_PRIVATE_BASE+122) 
enum v4l2_sensor_id
{
    SYSTEMLSI_S5K5CCGX      = 0,
    SILICONFILE_SR130PC10   = 1,
};

#define V4L2_CID_CAMERA_FLASH_CONTROL           (V4L2_CID_PRIVATE_BASE+123)
enum v4l2_flash_control_mode
{
	FLASH_CONTROL_OFF,
	FLASH_CONTROL_MAX_LEVEL,        // Normal Usage : Camera Flash
	FLASH_CONTROL_HIGH_LEVEL,       // Normal Usage : Camera Flash
	FLASH_CONTROL_MIDDLE_LEVEL,     // Normal Usage : Af Pre-Flash(Torch mode)
	FLASH_CONTROL_LOW_LEVEL,        // Normal Usage : Camcorder Flash(Torch mode)
	FLASH_CONTROL_MAX,
};

#define V4L2_CID_CAMERA_LIGHT_CONDITION         (V4L2_CID_PRIVATE_BASE+124)
enum v4l2_camera_light_mode
{
    CAM_NORMAL_LIGHT = 0,
    CAM_LOW_LIGHT,
    CAM_HIGH_LIGHT
};

#define V4L2_CID_CAMERA_SET_AF_PREFLASH         (V4L2_CID_PRIVATE_BASE+125)
enum v4l2_af_preflash_mode
{
    PREFLASH_OFF = 0,
    PREFLASH_ON,
};

#define V4L2_CID_CAMERA_AE_STABLE_RESULT        (V4L2_CID_PRIVATE_BASE+126)
enum v4l2_ae_stable_mode
{
    AE_UNSTABLE = 0,
    AE_STABLE,
};

#define V4L2_CID_CAMERA_CAPTURE_MODE            (V4L2_CID_PRIVATE_BASE+127)

#define V4L2_CID_ESD_INT                        (V4L2_CID_PRIVATE_BASE+128)
#define V4L2_CID_CAMERA_GET_FLASH_ONOFF         (V4L2_CID_PRIVATE_BASE+129)

#define V4L2_CID_FW_UPDATE                      (V4L2_CID_PRIVATE_BASE+130)
#define V4L2_CID_CAM_DATE_INFO_DATE1            (V4L2_CID_PRIVATE_BASE+133)
#define V4L2_CID_CAM_DATE_INFO_DATE2            (V4L2_CID_PRIVATE_BASE+134)
#define V4L2_CID_CAM_MODULE_VER                 (V4L2_CID_PRIVATE_BASE+135)
#define V4L2_CID_CAM_MODULE_COMP                (V4L2_CID_PRIVATE_BASE+136)
#define V4L2_CID_CAMERA_GET_SHT_TIME_NUM        (V4L2_CID_PRIVATE_BASE+139)
#define V4L2_CID_CAMERA_GET_SHT_TIME_DEN        (V4L2_CID_PRIVATE_BASE+140)
#define V4L2_CID_CAMERA_GET_TV_NUM              (V4L2_CID_PRIVATE_BASE+141)
#define V4L2_CID_CAMERA_GET_TV_DEN              (V4L2_CID_PRIVATE_BASE+142)
#define V4L2_CID_CAMERA_GET_AV_NUM              (V4L2_CID_PRIVATE_BASE+143)
#define V4L2_CID_CAMERA_GET_AV_DEN              (V4L2_CID_PRIVATE_BASE+144)
#define V4L2_CID_CAMERA_GET_BV_NUM              (V4L2_CID_PRIVATE_BASE+145)
#define V4L2_CID_CAMERA_GET_BV_DEN              (V4L2_CID_PRIVATE_BASE+146)
#define V4L2_CID_CAMERA_GET_EBV_NUM             (V4L2_CID_PRIVATE_BASE+147)
#define V4L2_CID_CAMERA_GET_EBV_DEN             (V4L2_CID_PRIVATE_BASE+148)
#define V4L2_CID_CAMERA_EV_PROGRAM_MODE         (V4L2_CID_PRIVATE_BASE+149) 
#define V4L2_CID_CAMERA_MCC_MODE                (V4L2_CID_PRIVATE_BASE+150) 

#define V4L2_CID_CAMCORER_MODE                  (V4L2_CID_PRIVATE_BASE+151) 
#define V4L2_CID_CAM_S_FW_VER                   (V4L2_CID_PRIVATE_BASE+152)

#define V4L2_CID_CAMERA_POWER_CONTROL           (V4L2_CID_PRIVATE_BASE+153)

#define V4L2_CID_CAMERA_RETURN_FOCUS		(V4L2_CID_PRIVATE_BASE + 154)
#define V4L2_CID_CAMERA_FINISH_AUTO_FOCUS	(V4L2_CID_PRIVATE_BASE + 155)

/* Pixel format FOURCC depth Description */
/* 12  Y/CbCr 4:2:0 64x32 macroblocks */
#define V4L2_PIX_FMT_NV12T    v4l2_fourcc('T', 'V', '1', '2')

/*
 *  * V4L2 extention for digital camera
 *   */
/* Strobe flash light */
enum v4l2_strobe_control 
{
	/* turn off the flash light */
	V4L2_STROBE_CONTROL_OFF		= 0,
	/* turn on the flash light */
	V4L2_STROBE_CONTROL_ON		= 1,
	/* act guide light before splash */
	V4L2_STROBE_CONTROL_AFGUIDE	= 2,
	/* charge the flash light */
	V4L2_STROBE_CONTROL_CHARGE	= 3,
};

enum v4l2_strobe_conf 
{
	V4L2_STROBE_OFF			= 0,	/* Always off */
	V4L2_STROBE_ON			= 1,	/* Always splashes */
	/* Auto control presets */
	V4L2_STROBE_AUTO		= 2,
	V4L2_STROBE_REDEYE_REDUCTION	= 3,
	V4L2_STROBE_SLOW_SYNC		= 4,
	V4L2_STROBE_FRONT_CURTAIN	= 5,
	V4L2_STROBE_REAR_CURTAIN	= 6,
	/* Extra manual control presets */
	/* keep turned on until turning off */
	V4L2_STROBE_PERMANENT		= 7,
	V4L2_STROBE_EXTERNAL		= 8,
};

enum v4l2_strobe_status 
{
	V4L2_STROBE_STATUS_OFF		= 0,
	/* while processing configurations */
	V4L2_STROBE_STATUS_BUSY		= 1,
	V4L2_STROBE_STATUS_ERR		= 2,
	V4L2_STROBE_STATUS_CHARGING	= 3,
	V4L2_STROBE_STATUS_CHARGED	= 4,
};

/* capabilities field */
/* No strobe supported */
#define V4L2_STROBE_CAP_NONE		    0x0000
/* Always flash off mode */
#define V4L2_STROBE_CAP_OFF		        0x0001
/* Always use flash light mode */
#define V4L2_STROBE_CAP_ON		        0x0002
/* Flashlight works automatic */
#define V4L2_STROBE_CAP_AUTO		    0x0004
/* Red-eye reduction */
#define V4L2_STROBE_CAP_REDEYE		    0x0008
/* Slow sync */
#define V4L2_STROBE_CAP_SLOWSYNC	    0x0010
/* Front curtain */
#define V4L2_STROBE_CAP_FRONT_CURTAIN	0x0020
/* Rear curtain */
#define V4L2_STROBE_CAP_REAR_CURTAIN	0x0040
/* keep turned on until turning off */
#define V4L2_STROBE_CAP_PERMANENT	    0x0080
/* use external strobe */
#define V4L2_STROBE_CAP_EXTERNAL	    0x0100

/* Set mode and Get status */
struct v4l2_strobe 
{
	/* off/on/charge:0/1/2 */
	enum	v4l2_strobe_control control;
	/* supported strobe capabilities */
	__u32	capabilities;
	enum	v4l2_strobe_conf mode;
	enum 	v4l2_strobe_status status;	/* read only */
	/* default is 0 and range of value varies from each models */
	__u32	flash_ev;
	__u32	reserved[4];
};

#define VIDIOC_S_STROBE     _IOWR('V', 83, struct v4l2_strobe)
#define VIDIOC_G_STROBE     _IOR('V', 84, struct v4l2_strobe)

/* Object recognition and collateral actions */
enum v4l2_recog_mode 
{
	V4L2_RECOGNITION_MODE_OFF	= 0,
	V4L2_RECOGNITION_MODE_ON	= 1,
	V4L2_RECOGNITION_MODE_LOCK	= 2,
};

enum v4l2_recog_action 
{
	V4L2_RECOGNITION_ACTION_NONE	= 0,	/* only recognition */
	V4L2_RECOGNITION_ACTION_BLINK	= 1,	/* Capture on blinking */
	V4L2_RECOGNITION_ACTION_SMILE	= 2,	/* Capture on smiling */
};

enum v4l2_recog_pattern 
{
	V4L2_RECOG_PATTERN_FACE		= 0, /* Face */
	V4L2_RECOG_PATTERN_HUMAN	= 1, /* Human */
	V4L2_RECOG_PATTERN_CHAR		= 2, /* Character */
};

struct v4l2_recog_rect 
{
	enum v4l2_recog_pattern p;	/* detected pattern */
	struct v4l2_rect o;		/* detected area */
	__u32 reserved[4];
};

struct v4l2_recog_data 
{
	__u8 detect_cnt;	/* detected object counter */
	struct v4l2_rect o;	/* detected area */
	__u32 reserved[4];
};

struct v4l2_recognition 
{
	enum v4l2_recog_mode mode;

	/* Which pattern to detect */
	enum v4l2_recog_pattern pattern;

	/* How many object to detect */
	__u8 obj_num;

	/* select detected object */
	__u32 detect_idx;

	/* read only :Get object coordination */
	struct v4l2_recog_data data;

	enum v4l2_recog_action action;
	__u32 reserved[4];
};

#define VIDIOC_S_RECOGNITION	_IOWR('V', 85, struct v4l2_recognition)
#define VIDIOC_G_RECOGNITION	_IOR('V', 86, struct v4l2_recognition)

/* We use this struct as the v4l2_streamparm raw_data for
 * VIDIOC_G_PARM and VIDIOC_S_PARM
 */
struct sec_cam_parm 
{
	struct v4l2_captureparm capture;
	int contrast;
	int effects;
	int brightness;
	int flash_mode;
	int focus_mode;
	int iso;
	int metering;
	int saturation;
	int scene_mode;
	int sharpness;
	int white_balance;
	int fps;
	int sensor_mode;
};

#endif /* __LINUX_VIDEODEV2_SAMSUNG_H */
