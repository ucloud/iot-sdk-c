final-out : ${COMP_LIB} ${PLATFORM_LIB}
	$(TOP_Q) \
	mkdir -p ${FINAL_DIR}  ${DIST_DIR}  ${FINAL_DIR}/lib \
			 ${FINAL_DIR}/include  ${FINAL_DIR}/bin \
			 ${FINAL_DIR}/unittest
	
	$(TOP_Q) \
	mv ${COMP_LIB} ${FINAL_DIR}/lib/ && \
	mv ${PLATFORM_LIB} ${FINAL_DIR}/lib
	
ifneq (,$(filter -DSUPPORT_TLS,$(CFLAGS)))
	$(TOP_Q) \
	mv ${TEMP_DIR}/*.a ${FINAL_DIR}/lib/
endif

	$(TOP_Q) \
	rm -rf ${TEMP_DIR}
	
.PHONY: mqtt_sample dynamic_auth_sample ota_sample
	
final : mqtt_sample dynamic_auth_sample ota_sample