/*
* Copyright (C) 2012-2019 UCloud. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#ifdef __cplusplus
extern "C" {
#endif

#include "ca.h"

#include <stdlib.h>

#ifdef SUPPORT_TLS
static const char *iot_ca_crt = \
{
    "-----BEGIN CERTIFICATE-----\r\n"
    "MIIDLDCCAhQCCQCnVOYTQCyIGjANBgkqhkiG9w0BAQsFADBYMQswCQYDVQQGEwJD\r\n"
    "TjELMAkGA1UECAwCU0gxCzAJBgNVBAcMAlNIMQ8wDQYDVQQKDAZVQ0xPVUQxDTAL\r\n"
    "BgNVBAsMBFBBQVMxDzANBgNVBAMMBlVDTE9VRDAeFw0yMDEyMTYwNTI2MzVaFw00\r\n"
    "MDEyMTEwNTI2MzVaMFgxCzAJBgNVBAYTAkNOMQswCQYDVQQIDAJTSDELMAkGA1UE\r\n"
    "BwwCU0gxDzANBgNVBAoMBlVDTE9VRDENMAsGA1UECwwEUEFBUzEPMA0GA1UEAwwG\r\n"
    "VUNMT1VEMIIBIjANBgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKCAQEA312YPHXmEEP/\r\n"
    "PaPdSB4+jFQGHRE+BbOme5NOOL9AmFi+jxJb/4UHD6WBdl4nb0fOuw2dfbqv4Qrl\r\n"
    "Vh/ZwOQoQdzIZJTHMQNZoOd/5nwa/WPBAldNzWH/IqjFrhCD9tfA0rldH0QTE1s2\r\n"
    "vQ8WpNi5pyJJMGoBs7q1QY0GqIRJc3iTIqsNADZhNJ4zLRa05nBzXgKQRIz1Rumx\r\n"
    "MpRNuKFz4EHLDkRUZCYqw5SmtpaW4ja/sSC4UzGfTEkXmNyN9UrteyvUMPbN6vTz\r\n"
    "igymgHyES3ygm+sEHJXFvpvZVfq8anwyNs0uUlHhWcx+MqF93vd+T1RRAq+s0BmK\r\n"
    "YobbIrhCuQIDAQABMA0GCSqGSIb3DQEBCwUAA4IBAQBvvBmgA2IjcKca0mTZ9uvM\r\n"
    "EyskZMTnywGuYaSu0JrgY063RsoB/p9z86TqYzLxWR0en4S4VuBWERxuaYATHs6f\r\n"
    "sKhSq9W9RqRj8PAhjLbLPKbhp6hM/VdpcIgJNrqlmFrAcZvddiozb2U832qp65/M\r\n"
    "1m2Tq9i1/NosoIoolirCiK4iEotK0zYsUig1dgRTvSGVbkrmIaFesQGU503dYct/\r\n"
    "Uz2jEmg8o36cMk011PcbkcTV6Way2g0zXs5PJu3PsJkFgL9jsBFlF1/6sHRan2V9\r\n"
    "7HFkvgolP7RSYFSJT2Hx1NQ71NoK18lnQpvjn2bZndGOACAadpWKvDAIouaB8v8w\r\n"
    "-----END CERTIFICATE-----\r\n"
};
#endif

const char *iot_ca_get() {
#ifdef SUPPORT_TLS
    return iot_ca_crt;
#else
    return NULL;
#endif
}

#ifdef __cplusplus
}
#endif


