# Configs
PRODUCT_COPY_FILES += \
    vendor/mediatek/prebuilt/etc/apns-conf.xml:system/etc/apns-conf.xml \
    vendor/mediatek/prebuilt/etc/ecc_list.xml:system/etc/ecc_list.xml \
    vendor/mediatek/prebuilt/etc/spn-conf.xml:system/etc/spn-conf.xml

# Messaging
PRODUCT_PACKAGES += \
    messaging
