ECHOMATICA_VERSION = a356b8391c1d07840940b48f5778bebd5172cd4e
ECHOMATICA_SITE = https://github.com/Mondomod/Echomatica
ECHOMATICA_SITE_METHOD = git

ECHOMATICA_DEPENDENCIES = lv2
ECHOMATICA_BUNDLES = Echomatica.lv2




define ECHOMATICA_BUILD_CMDS
	$(TARGET_MAKE_ENV) $(MAKE) -C $(@D)/plugin/source \
		CC="$(TARGET_CC)" \
		CXX="$(TARGET_CXX)" \
		AR="$(TARGET_AR)" \
		STRIP="$(TARGET_STRIP)" \
		CROSS_COMPILING=true \
		all

	cp -a $(@D)/lv2/. $(@D)/bin/Echomatica.lv2/
endef

define ECHOMATICA_INSTALL_TARGET_CMDS
	$(INSTALL) -d $(TARGET_DIR)/usr/lib/lv2

	cp -a $(@D)/bin/Echomatica.lv2 \
		$(TARGET_DIR)/usr/lib/lv2/
endef

$(eval $(generic-package))
