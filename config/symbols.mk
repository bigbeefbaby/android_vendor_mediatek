# Include symbols
ifeq ($(TARGET_INCLUDE_XLOG_SYMBOLS),true)
LINKER_FORCED_SHIM_LIBS := /system/lib/liblog.so|libmtkshim_log.so:/system/lib64/liblog.so|libmtkshim_log.so
endif
ifeq ($(TARGET_INCLUDE_AUDIO_SYMBOLS),true)
LINKER_FORCED_SHIM_LIBS := $(LINKER_FORCED_SHIM_LIBS):/system/vendor/lib/hw/audio.primary.$(TARGET_BOARD_PLATFORM).so|libmtkshim_audio.so:/system/vendor/lib64/hw/audio.primary.$(TARGET_BOARD_PLATFORM).so|libmtkshim_audio.so
endif
ifeq ($(TARGET_INCLUDE_UI_SYMBOLS),true)
LINKER_FORCED_SHIM_LIBS := $(LINKER_FORCED_SHIM_LIBS):/system/lib/libui.so|libmtkshim_ui.so:/system/lib64/libui.so|libmtkshim_ui.so
endif
ifeq ($(TARGET_INCLUDE_GUI_SYMBOLS),true)
LINKER_FORCED_SHIM_LIBS := $(LINKER_FORCED_SHIM_LIBS):/system/lib/libgui.so|libmtkshim_gui.so:/system/lib64/libgui.so|libmtkshim_gui.so
endif
ifeq ($(TARGET_INCLUDE_OMX_SYMBOLS),true)
LINKER_FORCED_SHIM_LIBS := $(LINKER_FORCED_SHIM_LIBS):/system/vendor/lib/libMtkOmxVdec.so|libmtkshim_omx.so
endif
ifeq ($(TARGET_INCLUDE_GPS_SYMBOLS),true)
LINKER_FORCED_SHIM_LIBS := $(LINKER_FORCED_SHIM_LIBS):/system/vendor/bin/mtk_agpsd|libmtkshim_gps.so
endif
ifeq ($(TARGET_INCLUDE_PBBUILDER_SYMBOLS),true)
LINKER_FORCED_SHIM_LIBS := $(LINKER_FORCED_SHIM_LIBS):/system/vendor/bin/program_binary_builder|libmtkshim_pbbuilder.so:/system/vendor/lib/libprogrambinary.so:libmtkshim_pbbuilder.so:/system/vendor/lib64/libprogrambinary.so:libmtkshim_pbbuilder.so
endif
ifeq ($(TARGET_INCLUDE_VTMAL_SYMBOLS),true)
LINKER_FORCED_SHIM_LIBS := $(LINKER_FORCED_SHIM_LIBS):/system/vendor/lib/libvtmal.so|libmtkshim_vtmal.so:/system/vendor/bin/vtservice|libmtkshim_vtmal.so
endif
ifeq ($(TARGET_INCLUDE_MEDIAJNI_SYMBOLS),true)
LINKER_FORCED_SHIM_LIBS := $(LINKER_FORCED_SHIM_LIBS):/system/lib/libmedia_jni.so|libmtkshim_mediajni.so:/system/lib64/libmedia_jni.so|libmtkshim_mediajni.so
endif
ifeq ($(TARGET_INCLUDE_CAMERA_SYMBOLS),true)
LINKER_FORCED_SHIM_LIBS := $(LINKER_FORCED_SHIM_LIBS):/system/vendor/lib/libfeatureio.so|libmtkshim_camera.so:/system/vendor/lib64/libfeatureio.so|libmtkshim_camera.so:/system/vendor/lib/libcam.camnode.so|libmtkshim_camera.so:/system/vendor/lib64/libcam.camnode.so|libmtkshim_camera.so
endif
#LINKER_FORCED_SHIM_LIBS := $(LINKER_FORCED_SHIM_LIBS):/system/vendor/lib/libmal_rilproxy.so|mtk-rilproxy.so:/system/vendor/lib64/libmal_rilproxy.so|mtk-rilproxy.so
