ECHOMATICA_VERSION = afff3c2b91fb8a0c42c161e815ef5e4ddb6ba037
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
