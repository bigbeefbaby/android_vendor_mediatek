LOCAL_PATH := $(call my-dir)

# mtk log symbols (xlog)
ifeq ($(TARGET_INCLUDE_XLOG_SYMBOLS),true)
    include $(CLEAR_VARS)
    LOCAL_SRC_FILES := xlog.c
    LOCAL_SHARED_LIBRARIES := liblog
    LOCAL_MODULE := libmtkshim_log
    LOCAL_PROPRIETARY_MODULE := true
    include $(BUILD_SHARED_LIBRARY)
endif

# audio symbols
ifeq ($(TARGET_INCLUDE_AUDIO_SYMBOLS),true)
    include $(CLEAR_VARS)
    LOCAL_SRC_FILES := audio.cpp
    LOCAL_MODULE := libmtkshim_audio
    LOCAL_PROPRIETARY_MODULE := true
    include $(BUILD_SHARED_LIBRARY)
endif

# ui symbols
ifeq ($(TARGET_INCLUDE_UI_SYMBOLS),true)
    include $(CLEAR_VARS)
    LOCAL_SRC_FILES := ui.cpp
    LOCAL_SHARED_LIBRARIES := libui
    LOCAL_MODULE := libmtkshim_ui
    LOCAL_PROPRIETARY_MODULE := true
    include $(BUILD_SHARED_LIBRARY)
endif

# gui symbols
ifeq ($(TARGET_INCLUDE_GUI_SYMBOLS),true)
    include $(CLEAR_VARS)
    LOCAL_SRC_FILES := gui.cpp
    LOCAL_SHARED_LIBRARIES := libgui
    LOCAL_MODULE := libmtkshim_gui
    LOCAL_PROPRIETARY_MODULE := true
    include $(BUILD_SHARED_LIBRARY)
endif

# omx symbols
ifeq ($(TARGET_INCLUDE_OMX_SYMBOLS),true)
    include $(CLEAR_VARS)
    LOCAL_SRC_FILES := omx.cpp
    LOCAL_MODULE := libmtkshim_omx
    LOCAL_PROPRIETARY_MODULE := true
    include $(BUILD_SHARED_LIBRARY)
endif

# gps symbols
ifeq ($(TARGET_INCLUDE_GPS_SYMBOLS),true)
    include $(CLEAR_VARS)
    LOCAL_SRC_FILES := \
        agps/icu53.c \
        agps/ssl.c
    LOCAL_SHARED_LIBRARIES := libicuuc libssl
    LOCAL_MODULE := libmtkshim_gps
    LOCAL_PROPRIETARY_MODULE := true
    include $(BUILD_SHARED_LIBRARY)
endif

ifeq ($(TARGET_INCLUDE_VTMAL_SYMBOLS),true)
    include $(CLEAR_VARS)
    LOCAL_SRC_FILES := vtmal.cpp
    LOCAL_MODULE := libmtkshim_vtmal
    LOCAL_PROPRIETARY_MODULE := true
    include $(BUILD_SHARED_LIBRARY)
endif

ifeq ($(TARGET_INCLUDE_PBBUILDER_SYMBOLS),true)
  include $(CLEAR_VARS)
  LOCAL_SRC_FILES := pbbuilder.cpp
  LOCAL_MODULE := libmtkshim_program_binary_builder
  LOCAL_PROPRIETARY_MODULE := true
  include $(BUILD_SHARED_LIBRARY)
endif

ifeq ($(TARGET_INCLUDE_PARCEL_SYMBOLS),true)
  include $(CLEAR_VARS)
  LOCAL_SRC_FILES := parcel.cpp
  LOCAL_MODULE := libmtkshim_parcel
  LOCAL_PROPRIETARY_MODULE := true
  include $(BUILD_SHARED_LIBRARY)
endif

ifeq ($(TARGET_INCLUDE_FENCE_SYMBOLS),true)
  include $(CLEAR_VARS)
  LOCAL_SRC_FILES := rilproxy.cpp
  LOCAL_MODULE := libmtkshim_rilproxy
  LOCAL_PROPRIETARY_MODULE := true
  include $(BUILD_SHARED_LIBRARY)
endif

ifeq ($(TARGET_INCLUDE_FENCE_SYMBOLS),true)
  include $(CLEAR_VARS)
  LOCAL_SRC_FILES := fence.cpp
  LOCAL_MODULE := libmtkshim_fence
  LOCAL_PROPRIETARY_MODULE := true
  include $(BUILD_SHARED_LIBRARY)
endif

ifeq ($(TARGET_INCLUDE_CAMERA_SYMBOLS),true)
    include $(CLEAR_VARS)
    LOCAL_SRC_FILES := camera.cpp
    LOCAL_SHARED_LIBRARIES := libdpframework
    LOCAL_MODULE := libmtkshim_camera
    LOCAL_PROPRIETARY_MODULE := true
    include $(BUILD_SHARED_LIBRARY)
endif

