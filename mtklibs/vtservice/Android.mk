LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)
LOCAL_IS_HOST_MODULE =
LOCAL_MODULE = vtservice
LOCAL_MODULE_CLASS = EXECUTABLES
LOCAL_MODULE_PATH_64 = /system/vendor/bin
LOCAL_SHARED_LIBRARIES = libbinder libmtk_vt_service libc++
LOCAL_MULTILIB = 64
LOCAL_SRC_FILES_64 = vtservice
include $(BUILD_PREBUILT)
