KV = "3.17.8"
SRCDATE = "20150401"

EXTRAKO = "linuxtv"

SRC_URI = "http://source.mynonpublic.com/broadmedia/g300-drivers-${KV}-${SRCDATE}.zip"

require octagon-dvb-modules.inc

SRC_URI[md5sum] = "f67738e15ef737d6fc992460885234b1"
SRC_URI[sha256sum] = "22733882e41fe28c0a8f824613a88219ab7a333de76473881453c5ed61ea4886"
