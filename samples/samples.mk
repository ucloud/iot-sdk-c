DEPENDS             := platform
LDFLAGS             := $(FINAL_DIR)/lib/libiot_sdk.a
LDFLAGS             += $(FINAL_DIR)/lib/libiot_platform.a
ifneq (,$(filter -DSUPPORT_TLS,$(CFLAGS)))
LDFLAGS             += $(FINAL_DIR)/lib/libmbedtls.a $(FINAL_DIR)/lib/libmbedx509.a $(FINAL_DIR)/lib/libmbedcrypto.a
endif
CFLAGS              := $(filter-out -ansi,$(CFLAGS))

ifneq (,$(filter -DMQTT_COMM_ENABLED,$(CFLAGS)))
mqtt_sample:
	$(TOP_Q) \
	$(PLATFORM_CC) $(CFLAGS) $(SAMPLE_DIR)/mqtt/$@.c $(LDFLAGS) -o $@

	mv $@ $(FINAL_DIR)/bin
endif

ifneq (,$(filter -DAUTH_MODE_DYNAMIC,$(CFLAGS)))
dynamic_auth_sample:
	$(TOP_Q) \
	$(PLATFORM_CC) $(CFLAGS) $(SAMPLE_DIR)/dynamic_auth/$@.c $(LDFLAGS) -o $@

	$(TOP_Q) \
	mv $@ $(FINAL_DIR)/bin
endif

samples_final:
	$(TOP_Q) \
	cp -rf $(TOP_DIR)/src/sdk-impl/*port*.h $(FINAL_DIR)/include/

	$(TOP_Q) \
	cp -rf $(TOP_DIR)/platform/os/$(PLATFORM_OS)/*.h $(FINAL_DIR)/include/