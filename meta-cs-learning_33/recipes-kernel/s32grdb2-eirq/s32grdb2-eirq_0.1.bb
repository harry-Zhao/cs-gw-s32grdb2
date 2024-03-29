# Copyright 2021 NXP

SUMMARY = "Linux driver for LED on the S32G-VNP-RDB2"
LICENSE = "BSD-3-Clause"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/BSD-3-Clause;md5=550794465ba0ec5312d6919e203a55f9"

inherit module

SRC_URI = "file://source/"

S = "${WORKDIR}/source"
EXTRA_OEMAKE_append = " KDIR=${STAGING_KERNEL_DIR} "

KERNEL_NAME = "s32grdb2-eirq"

module_do_install() {
	install -D ${KERNEL_NAME}.ko ${D}/lib/modules/${KERNEL_VERSION}/${KERNEL_NAME}.ko
}

KERNEL_MODULE_AUTOLOAD += "${KERNEL_NAME}"

FILES_${PN} += "${base_libdir}/*"
FILES_${PN} += "${sysconfdir}/modules-load.d/*"

PROVIDES = "kernel-module-${KERNEL_NAME}${KERNEL_MODULE_PACKAGE_SUFFIX}"
RPROVIDES_${PN} = "kernel-module-${KERNEL_NAME}${KERNEL_MODULE_PACKAGE_SUFFIX}"

COMPATIBLE_MACHINE = "gen1"