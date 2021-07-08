SUMMARY = "LED test program for S32G-VNP-RDB2"
LICENSE = "BSD-3-Clause"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/BSD-3-Clause;md5=550794465ba0ec5312d6919e203a55f9"

DEPENDS = "s32grdb2-rgb"

SRC_URI = " \
	file://source \
	"

S = "${WORKDIR}/source"
do_compile() {
    oe_runmake
}

do_install() {
    install -d ${D}${bindir}
    install -m 0755 ledAPP ${D}${bindir}
}

FILES_${PN} = "${bindir}/* ${sysconfdir}"
INSANE_SKIP_${PN} = "ldflags"
