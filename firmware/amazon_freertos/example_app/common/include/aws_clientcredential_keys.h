/*
 * Amazon FreeRTOS V1.4.1
 * Copyright (C) 2017 Amazon.com, Inc. or its affiliates.  All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of
 * this software and associated documentation files (the "Software"), to deal in
 * the Software without restriction, including without limitation the rights to
 * use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
 * the Software, and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 * http://aws.amazon.com/freertos
 * http://www.FreeRTOS.org
 */

#ifndef AWS_CLIENT_CREDENTIAL_KEYS_H
#define AWS_CLIENT_CREDENTIAL_KEYS_H

#include <stdint.h>

/*
 * PEM-encoded client certificate
 *
 * Must include the PEM header and footer:
 * "-----BEGIN CERTIFICATE-----\n"\
 * "...base64 data...\n"\
 * "-----END CERTIFICATE-----\n"
 */
#define keyCLIENT_CERTIFICATE_PEM \
"-----BEGIN CERTIFICATE-----\n"\
"MIIDWTCCAkGgAwIBAgIULb0kENRtG0dx/6Nf6892sYokPv8wDQYJKoZIhvcNAQEL\n"\
"BQAwTTFLMEkGA1UECwxCQW1hem9uIFdlYiBTZXJ2aWNlcyBPPUFtYXpvbi5jb20g\n"\
"SW5jLiBMPVNlYXR0bGUgU1Q9V2FzaGluZ3RvbiBDPVVTMB4XDTE5MDIyNTE2NDUy\n"\
"NloXDTQ5MTIzMTIzNTk1OVowHjEcMBoGA1UEAwwTQVdTIElvVCBDZXJ0aWZpY2F0\n"\
"ZTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBAJObSxnYUnUOP9CnOuyJ\n"\
"dn3nCqlpVNiuWR+OELz2A4eQgk/DfIzkDr39z96kgT4DUpzabf68oH4kktfATfVL\n"\
"uthSb8xLV7GwGva6btzd6l0pblekfb5ruaWE4z+KbOB+chS+IIVAMC5VSwZmDPs2\n"\
"reU+qA7x8ueUVgD1csbCkOnwDr6Mjp08Zy0vO3uTLd12Fn2QElzj0o1ZMFnFsa5P\n"\
"F/8tlLdEjlcCIkZQr9QDJDJ8RWHF6AAzjFlDLamOp4o2jrMlOa3UfmfxaSpcLY/Y\n"\
"ZZ89AUJiLmSIdTztPTOu0rJ4xnOZwTmJ633f0VA/1aFy8HTiet/JIC+DKqid/BKV\n"\
"Pg0CAwEAAaNgMF4wHwYDVR0jBBgwFoAUdbbFZN/Pl0zWeADuVXSFwhlKErswHQYD\n"\
"VR0OBBYEFLjedofXh8l4r5wybeEbkztQFrqRMAwGA1UdEwEB/wQCMAAwDgYDVR0P\n"\
"AQH/BAQDAgeAMA0GCSqGSIb3DQEBCwUAA4IBAQADsDQ+Yz58scNgo2M0X5ICtV3N\n"\
"wbAIh/2GJNSDJg7tF+0V2Fyl/a6YjP0DfP1Z5ltrrpQicHI9XcBRl8AdWGZL00vZ\n"\
"Ym8XMNimF2JIige2pJMk7TFYnyZA2aAv8OHqaOL3P/KTTy1NJv1LDxbseGJdPEjt\n"\
"yn5tmoGnOO2Jk11ExewH4d39YsLZyLM/Ahj92QGoCdG5jOboOwUWCq6IgDBaUco8\n"\
"TT2UhEpeFEGFj/eR0fM9SQqfn0y7oIh1MgA4wLh5WjVYKnkCiO6B4npsEtqK8IF+\n"\
"HE1+5VfUavisEQ0pP6Ne1GQTR8+LpvOUNhAnY+4me+zNFlmmsA5g19bWYZur\n"\
"-----END CERTIFICATE-----\n"

/*
 * PEM-encoded issuer certificate for AWS IoT Just In Time Registration (JITR).
 * This is required if you're using JITR, since the issuer (Certificate 
 * Authority) of the client certificate is used by the server for routing the 
 * device's initial request. (The device client certificate must always be 
 * sent as well.) For more information about JITR, see:
 *  https://docs.aws.amazon.com/iot/latest/developerguide/jit-provisioning.html, 
 *  https://aws.amazon.com/blogs/iot/just-in-time-registration-of-device-certificates-on-aws-iot/.
 *
 * If you're not using JITR, set below to NULL.
 * 
 * Must include the PEM header and footer:
 * "-----BEGIN CERTIFICATE-----\n"\
 * "...base64 data...\n"\
 * "-----END CERTIFICATE-----\n"
 */
#define keyJITR_DEVICE_CERTIFICATE_AUTHORITY_PEM  NULL

/*
 * PEM-encoded client private key.
 *
 * Must include the PEM header and footer:
 * "-----BEGIN RSA PRIVATE KEY-----\n"\
 * "...base64 data...\n"\
 * "-----END RSA PRIVATE KEY-----\n"
 */
#define keyCLIENT_PRIVATE_KEY_PEM \
"-----BEGIN RSA PRIVATE KEY-----\n"\
"MIIEogIBAAKCAQEAk5tLGdhSdQ4/0Kc67Il2fecKqWlU2K5ZH44QvPYDh5CCT8N8\n"\
"jOQOvf3P3qSBPgNSnNpt/rygfiSS18BN9Uu62FJvzEtXsbAa9rpu3N3qXSluV6R9\n"\
"vmu5pYTjP4ps4H5yFL4ghUAwLlVLBmYM+zat5T6oDvHy55RWAPVyxsKQ6fAOvoyO\n"\
"nTxnLS87e5Mt3XYWfZASXOPSjVkwWcWxrk8X/y2Ut0SOVwIiRlCv1AMkMnxFYcXo\n"\
"ADOMWUMtqY6nijaOsyU5rdR+Z/FpKlwtj9hlnz0BQmIuZIh1PO09M67SsnjGc5nB\n"\
"OYnrfd/RUD/VoXLwdOJ638kgL4MqqJ38EpU+DQIDAQABAoIBAHattKt6D4pIQ6zq\n"\
"2GiYeanvGtZtdyekvsmtOu4DS4EzAmNJhRnuv5+os/qJ/9QxbbnpsejQFqZ1l49a\n"\
"8hNYqUkGtxbmOQMH2hYofbydvLLc/ff/rI5vJNvdRa2wCaxSXj0pRRJ+Mn7+Ww0w\n"\
"/hz5sMWSJCOoCyqBTMkGkBsZEtTT0x643kQu0vNnR8AXK8CorJGErS6TLo5NFaiR\n"\
"L2//AP16C6hQblVLaTorDDRd/VRSfqeRV17j67WEc8VP4ekXDnIQNDIQjb4YNGCw\n"\
"QI5xSEtjNVWo4PFtYbkDWfCk81GtoHOjYObwA5o5c3bZSGgMZ9AMNHFHS6xROC6w\n"\
"3DTF8yECgYEAw2vYSS74/di4RBx5Pk7T4zWkSU4VFU6hP5QSf+6aHRiOpL3HA3Ub\n"\
"ISNolhYLMz3cIk7090OpTQCVvAl+m7xvJx/TDQsV/eFkmlLrSNWP+FxjEAA94I0s\n"\
"EPWVLApB0cuanzdMzoFKcndk4mo1yLKEa60fM2pFeUA3Go55NDIv2ykCgYEAwVz+\n"\
"guwfb1LyomSDjUEpHDUyIq2hJeVcaiUPXxS/+D2zjjVpoULgOXr/HhVZeUOkbBMQ\n"\
"YDqrq3shy2sFZ8CyEuxgOm6cUdzvrrMKENLHhuA4TWC4F2+pwoiCKOtIjnc1g992\n"\
"rHd7YNHob8Yo/fLZM3RcGbNwl9UDmnQHBiSHTEUCgYBcOPjJELHQmgXbntRY4zp7\n"\
"b0UokwDAHWtbZbWVSjTQplYqyKSyrQEwklU4/w4qEHdieYCBcBzlifEf3Bszw6lw\n"\
"/UPMU/784PFpItiGdsKKoo7dbj/FSNoS5tKPBggpybwehypoCfvoKRAjCZx4Kkbz\n"\
"ya9/xBclMXjPv4zTZRvQgQKBgFjBWMm7nIo65siHnqK94CLkgAjO7gM5DnxiWnXo\n"\
"Tl2h5MNH3R56VfXMcUHbxuAUnmpFLeUdySLDODXo/+gp2RM6kMkBcJta8GGeKOaj\n"\
"+ZX9YZqS5K1NQfzbL/OcXAeYzGWlsxFjHqzIbQqxSKuYRv6JUKUzamEnE6pXy8mU\n"\
"Bs6JAoGAQAyfMQhf7kWruiiI3wr/Md6uRKZySG9f/rZCFeEAB0zBz4MHzQp03KkP\n"\
"MKddIgRE3EtexZCkeRcWYm2qpmcnFZjDziEgVv+LgqZZSsHn7T2RaPx2YkwRT1z7\n"\
"IUft37whNVO11/Shs5Qo8rMcSRRvjz3zJCJC4nUdggdnz4cE0Dc=\n"\
"-----END RSA PRIVATE KEY-----\n"

/* The constants above are set to const char * pointers defined in aws_demo_runner.c,
 * and externed here for use in C files.  NOTE!  THIS IS DONE FOR CONVENIENCE
 * DURING AN EVALUATION PHASE AND IS NOT GOOD PRACTICE FOR PRODUCTION SYSTEMS 
 * WHICH MUST STORE KEYS SECURELY. */
extern const char clientcredentialCLIENT_CERTIFICATE_PEM[];
extern const char* clientcredentialJITR_DEVICE_CERTIFICATE_AUTHORITY_PEM;
extern const char clientcredentialCLIENT_PRIVATE_KEY_PEM[];
extern const uint32_t clientcredentialCLIENT_CERTIFICATE_LENGTH;
extern const uint32_t clientcredentialCLIENT_PRIVATE_KEY_LENGTH;

#endif /* AWS_CLIENT_CREDENTIAL_KEYS_H */
