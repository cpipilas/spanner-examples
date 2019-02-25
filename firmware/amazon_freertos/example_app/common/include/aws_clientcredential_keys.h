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
"MIIDWjCCAkKgAwIBAgIVAJ8aeslzZWZv5o7mIHPe/RHwxZXxMA0GCSqGSIb3DQEB\n"\
"CwUAME0xSzBJBgNVBAsMQkFtYXpvbiBXZWIgU2VydmljZXMgTz1BbWF6b24uY29t\n"\
"IEluYy4gTD1TZWF0dGxlIFNUPVdhc2hpbmd0b24gQz1VUzAeFw0xOTAyMjUwOTI0\n"\
"MDhaFw00OTEyMzEyMzU5NTlaMB4xHDAaBgNVBAMME0FXUyBJb1QgQ2VydGlmaWNh\n"\
"dGUwggEiMA0GCSqGSIb3DQEBAQUAA4IBDwAwggEKAoIBAQDXtT9IiZiAcx5Iq5PA\n"\
"WhC2ZUIi12PapoxiJxmH2+Gz4SmG4XwGZAFTwH72/Nfiq1JsyQ584RI72CtAKsEi\n"\
"/w14oPCU1KZKMMArcPCCCSzOhX7rwV1xjJxFZJRL1C9Fp4EY3+m33HCHxytMJQfj\n"\
"Qo/lxnrvfmVoupyQwRCB8XuhoZrSrhy4sVzefddA8pxF+VFBzgtRGUam//0uTqXa\n"\
"CFYLdLcfdFpbWwr2hBNLiD3U+7k5zhT8hoOIOnqIQ3KQN7skn+jUosd2Gsknkuux\n"\
"PixMYv0drfXOmecbkjqKlJ5C3/BzWVzZpxpjR0QZ3TUiZ/hs10FUalne8+FjkrF3\n"\
"7IaVAgMBAAGjYDBeMB8GA1UdIwQYMBaAFHW2xWTfz5dM1ngA7lV0hcIZShK7MB0G\n"\
"A1UdDgQWBBQSUKJW1G+an63o9ypa3P09FroIVTAMBgNVHRMBAf8EAjAAMA4GA1Ud\n"\
"DwEB/wQEAwIHgDANBgkqhkiG9w0BAQsFAAOCAQEAp/2p4J1Pi0lzgfByHpfjUg/A\n"\
"LVybZzbyV5va097keaRztp7sVMywYhJyFdlQvypaJfZ5AgqJCbgQVKsnK/E1c+1S\n"\
"2aU0yPmdgYfQlSUFVoBMqIDpwOKEJRAzS/JIlt4e6TwMbhWwXII+fe7ocIDHateY\n"\
"HOSblf8hlEheNltP/gjy4we7sZxYIL9NB1w6+0lfctDmyz1EbY/+rbpXK7HByOB+\n"\
"+FH2zS3fowmaAGXEQrRPjje9eCJD5m5SgbMPyc/psBkwJKUnEWBRPDDNyTvtzVxm\n"\
"pIwGFk/0PSK232/+BgC+lfV/WT1bt72J3FTAnO+JBJOnHFvrQtXCdV0oqp0lQQ==\n"\
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
"MIIEowIBAAKCAQEA17U/SImYgHMeSKuTwFoQtmVCItdj2qaMYicZh9vhs+EphuF8\n"\
"BmQBU8B+9vzX4qtSbMkOfOESO9grQCrBIv8NeKDwlNSmSjDAK3DwggkszoV+68Fd\n"\
"cYycRWSUS9QvRaeBGN/pt9xwh8crTCUH40KP5cZ6735laLqckMEQgfF7oaGa0q4c\n"\
"uLFc3n3XQPKcRflRQc4LURlGpv/9Lk6l2ghWC3S3H3RaW1sK9oQTS4g91Pu5Oc4U\n"\
"/IaDiDp6iENykDe7JJ/o1KLHdhrJJ5LrsT4sTGL9Ha31zpnnG5I6ipSeQt/wc1lc\n"\
"2acaY0dEGd01Imf4bNdBVGpZ3vPhY5Kxd+yGlQIDAQABAoIBAEIBbinuIMI9d6jZ\n"\
"B882QCLv/TrYGfAQQqjOOhu+huQaJDDn0qHJ/DX6k19Uo2Ly9bfgFhTUclXpoeJy\n"\
"ssLYtPCSnsuL/o55OHSSjKXd1N4lL19IviU+15rMWiyR8x0nUnOgIM5oH+8MXQ1h\n"\
"z3YVKh8vivK6BKH1aG9LBJgeoqwkTXIJIclL2+DRNSLQFLEfV9KkniKULeTMV7Bq\n"\
"ezJ8KbO1+hGwSolmJBMfKYH+VRsjXyxf13TjRr7cDdQ/EnmJLiGev4qSbzq/Qnc+\n"\
"VJafo0Z5Djr+pSHbS85caqcjuRlMrwUuTyB1uEozLDbzxGWNbbPVxAnIWMzj6wrV\n"\
"4DBHbEkCgYEA8dkQWN+oZAXd49jZPNRwtg4L8WYHdjuSCrjzwe8vMdOIMYZtMml5\n"\
"mPnaweAYryoAZprzZUWJtHTmOtYVRKdyL2xVN780SAP+fwlm9wUZ+4jei9rBipRE\n"\
"8h/oUtrdHW/ZFqK6hrXb1VJFGrPy2lNEWEpkvsDSIOFEjBER5uPNx9sCgYEA5FSa\n"\
"A6T7Us8dBzFlYpgPPrqVB2shIHJyj9+P5dHjEhfPV7kDhxpjyb8kKl4v63rmj99v\n"\
"VJXJrMKQaq++UYr5lRRe/+gjy+VtlyoIkmQkEGoadDjuAArDE6Z2s8mTMeuXJfnP\n"\
"hTJPdcfeabWSllSrOwPxyLdVTFpuGi7F/jNPrk8CgYBc9gmhj77jS5oB5a2DA0mb\n"\
"wQR4Mra1jKpTMsqHhg/HAD8+giRhF0flNE0Q7rmuQt/KkM7z42nOEo0YmoesTwzG\n"\
"C8cp2XYYJGjjndKVKsHU/MRGT7zLLrjdtMQRbQ1HLmHsoHpAI5EviyMC4556qzz/\n"\
"DwFwjR94Af7eNAWEkZXctwKBgQCVLl1uUiXOpfl+UJzAPT+AqaFjNnBvZbdKHzRC\n"\
"YM6ubJYQ55XReMGH9/WmJOHERglMKRzxM+iPkpOO0QJU/qsw5x1msAJrXpwqrtDo\n"\
"7LrParOcCfIeXumz9ggKUYJ1lEquCji2+vcFqi+7+2EqDWnO5jXcAUSe3Vqgirzb\n"\
"6CSAawKBgFXZFEPyr9LQ9KBtcFMjGxuvuo/XG+rD8iHGkcCqvGxmog6mVumf25iK\n"\
"klCAquw2gMwcBXhxpq8TKFDqJaVUA9Yf99nrrxmggY58ZItuNlrhkw9/r5ACa/0I\n"\
"l6b5T53t+8UkB3niuvhtR62w7+EA7KvOMNAJbCZ+X0kbHdZCTSAX\n"\
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
