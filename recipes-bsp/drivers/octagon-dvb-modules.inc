SUMMARY = "Hardware drivers for ${MACHINE}"
SECTION = "base"
PRIORITY = "required"
LICENSE = "CLOSED"

PV = "${KV}+${SRCDATE}"
PR = "r0"

S = "${WORKDIR}"

INHIBIT_PACKAGE_STRIP = "1"

inherit module

do_compile() {
}

do_install() {
    install -d ${D}/lib/modules/${KV}/extra
    install -d ${D}/${sysconfdir}/modules-load.d
    install -m 0755 ${WORKDIR}/${EXTRAKO}.ko ${D}/lib/modules/${KV}/extra
    echo ${EXTRAKO} >> ${D}/${sysconfdir}/modules-load.d/_${MACHINE}.conf
}

FILES_${PN} += "${sysconfdir}/modules-load.d/_${MACHINE}.conf"