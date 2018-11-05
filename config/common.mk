# Shim libraries
PRODUCT_PACKAGES += \
    libmtkshim_log \
    libmtkshim_audio \
    libmtkshim_ui \
    libmtkshim_omx \
    libmtkshim_gps \
	libmtkshim_vtmal \
	libmtkshim_program_binary_builder

# Display
PRODUCT_PACKAGES += \
    libion

# GPS
PRODUCT_COPY_FILES += \
    vendor/mediatek/prebuilt/etc/agps_profiles_conf2.xml:system/etc/agps_profiles_conf2.xml

PRODUCT_PACKAGES += \
    libcurl

# Include explicitly to work around Facelock issues
PRODUCT_PACKAGES += \
    libprotobuf-cpp-full

# FMRadio
PRODUCT_PACKAGES += \
    libfmjni \
    FMRadio

# Filesystem management tools
PRODUCT_PACKAGES += \
    e2fsck \
    fsck.f2fs \
    mkfs.f2fs \
    make_ext4fs

# exFAT
PRODUCT_PACKAGES += \
    mount.exfat \
    fsck.exfat \
    mkfs.exfat

# NTFS
PRODUCT_PACKAGES += \
    fsck.ntfs \
    mkfs.ntfs \
    mount.ntfs

# USB
PRODUCT_PACKAGES += \
    com.android.future.usb.accessory

# WallpaperPicker
PRODUCT_PACKAGES += \
    WallpaperPicker

# Sensor Calibration
PRODUCT_PACKAGES += \
    libem_sensor_jni

# ThemeInterfacer
PRODUCT_PACKAGES += \
    ThemeInterfacer

# Granular Volume Steps
PRODUCT_PROPERTY_OVERRIDES += \
    ro.config.vc_call_vol_steps=14 \
    ro.config.media_vol_steps=30

ANDROID_VERSION = 7.1.2

# include other configs
include vendor/mediatek/config/permissions.mk
include vendor/mediatek/config/media.mk
include vendor/mediatek/config/symbols.mk
include vendor/mediatek/config/telephony.mk
