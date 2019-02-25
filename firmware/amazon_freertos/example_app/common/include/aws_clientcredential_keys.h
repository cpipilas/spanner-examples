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
"MIIDWjCCAkKgAwIBAgIVAI1jR4GQv6VZxOYLbrQa/tSKiUAMMA0GCSqGSIb3DQEB\n"\
"CwUAME0xSzBJBgNVBAsMQkFtYXpvbiBXZWIgU2VydmljZXMgTz1BbWF6b24uY29t\n"\
"IEluYy4gTD1TZWF0dGxlIFNUPVdhc2hpbmd0b24gQz1VUzAeFw0xOTAyMjUxNTE1\n"\
"MzNaFw00OTEyMzEyMzU5NTlaMB4xHDAaBgNVBAMME0FXUyBJb1QgQ2VydGlmaWNh\n"\
"dGUwggEiMA0GCSqGSIb3DQEBAQUAA4IBDwAwggEKAoIBAQCsaga/W8KAZ6QGuw3x\n"\
"ZDWyym6tCeQXgzXleY/9MOOPIG4Im7FkUkHvRRm6E1VBruwVU5X6Mc9uCOrOSCNS\n"\
"63uxHCVWFRFizKGBkAU3C97btz+OOHWYb2Sw/GD2FPBPwXGS6dGZZXahJpYXtI9H\n"\
"dkpkZab2orCbRQq9c7xda12aOIDjMrWRL7q7BA+VYLdmlW5huaJPjF5Qlxyrr4xO\n"\
"WScCK9NReVkS12pb0qGTmChbinJd5aSiMCJ3fXJ1Lt/A9lAYxkaHYBLK0nrdJeVv\n"\
"GLpNxLur/mTORLDBva//+ClmBtHg0bSRACoU+VsONN7z8PycyHaeOBQguc5RHx4L\n"\
"pl67AgMBAAGjYDBeMB8GA1UdIwQYMBaAFJpsK+QaOrYm87pJMFHkWTVgnELqMB0G\n"\
"A1UdDgQWBBR++r6WxZBHpipRlT2LBRIPy+KTHjAMBgNVHRMBAf8EAjAAMA4GA1Ud\n"\
"DwEB/wQEAwIHgDANBgkqhkiG9w0BAQsFAAOCAQEAGPhRM/AfcWgBoSxfS8mWxt5j\n"\
"T+nt2BD1N5wSIT6qBGdHefRhd2fPEvUhZsEFEzvw+tsX5DBxNQOqsNe1OiBKBkil\n"\
"LKgdiZNzhx4+4KjzqlT1aUX51o+rPL8Zp7K3Zhfj/e+hm2szX5ktrIB1z0KAODIX\n"\
"dcHgYbT7qNe14a7H6PRd0QEKa1oGgz8r5b6AHrA/3PF5rZOJ9j9RYLISP3jVTQ6n\n"\
"5u4vPrGTSi5uQAhFBQbg72E6gaHmhgl6KephjNAZhWlnfnpHUljUGUDhDx7fMTz0\n"\
"6L9nY62ok6rBdM7zx7hQ4vbR+IQ/kZWr9E2+m3X/rCuEhnp1xjKCIDDuiGRWXQ==\n"\
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
"MIIEowIBAAKCAQEArGoGv1vCgGekBrsN8WQ1sspurQnkF4M15XmP/TDjjyBuCJux\n"\
"ZFJB70UZuhNVQa7sFVOV+jHPbgjqzkgjUut7sRwlVhURYsyhgZAFNwve27c/jjh1\n"\
"mG9ksPxg9hTwT8FxkunRmWV2oSaWF7SPR3ZKZGWm9qKwm0UKvXO8XWtdmjiA4zK1\n"\
"kS+6uwQPlWC3ZpVuYbmiT4xeUJccq6+MTlknAivTUXlZEtdqW9Khk5goW4pyXeWk\n"\
"ojAid31ydS7fwPZQGMZGh2ASytJ63SXlbxi6TcS7q/5kzkSwwb2v//gpZgbR4NG0\n"\
"kQAqFPlbDjTe8/D8nMh2njgUILnOUR8eC6ZeuwIDAQABAoIBAEMJAlCak7grE7pO\n"\
"NjCZvssiK//5bYa6zFTJe/N8c62tdTrBliokVWB7ZHJVm/tq0H3GPvTFMxpcOzcz\n"\
"ExDlX/VPtTCQBm98knr2jSCG7AJPcFWSnB5FiUfLCMQFBh5sXwU5BfZ3XbVwdEEJ\n"\
"QgAN/QSmBVG1lab5JCDfA+jqmr0gAQxEeBXar4VZJ+XpQkdvVqzLkHaMq9k0oEbk\n"\
"HJOOLpLQ0OjFJSbcW7u6rBlUIcwXBRoBllD7SDSWxmN4XDUtwBQlpqHnsBztk4vT\n"\
"zwX5HnqoH1dF/KuveTRFLcGNaELounCO//ij+Anx1aspcI06eNXc6ijXwyqZhHkl\n"\
"TcIaMAECgYEA49mWMGsPB3UA/2pk7GPOJ0USKlnJeBKV5jvU862PDchSCUR1BXZ9\n"\
"TVFQ0u0tPdOtUQ9Mfj7WxZI0d8DthyBYlJMs7uxDrKh+zjyihZbh8UEcjBu+7PN/\n"\
"q7XWwXAuOznJG+vVLkfnbQ1fs1PZGGz5CgCSGF1xnCO/xPWIYxZn9rsCgYEAwbcf\n"\
"b2UDKMJfj4d99Mcva7iELAQOclMZGU5ss2AxC7kmCVRB7HikEkAAbXK+wS0fspeU\n"\
"osAf1WWm5/l/6QXylZi7CoMQ4qBqhAjGN3LxG1/Wbkfy1R8TYAMMDd6xpjw5t/5b\n"\
"B08TNLT1EvJHAHW31swtht/Que5cp3x2vhk4uAECgYEAm7LkXtHJw17A/8jEjoTl\n"\
"KxCYCTix48tPg7T/IEVJrDFnXc3Z6ZG+rkcS5BAPCmDL3siFjP+D5B60m+DKb7w6\n"\
"y8yGt/3bgPDjNitZI9CnNSU5TMTpAyKh68SmrCjsbqxeMSZG1wlrq6mn6/MwNvDA\n"\
"fYVGUEAKkpgbQ4xFVvDIumECgYAnWQsJlXsOzGycuujaz5rSRqiSSECm+Dog6c0q\n"\
"ol9UAke3nWXGorqw+k8b7DLTCldl72RBqsTMk9lTRVq1+n9L47oaaIUFg5AfQakB\n"\
"mldfOBhWTkcFA0rsNbI9Hv72xUT0GrZixa0hB6DAOHYzobW168NToiLDoacwXhfA\n"\
"hV8AAQKBgEg71ujG/PiGVNH54J/nQUr9gJKI5vN7XKFi3efa3srnTXd6I3yoT2l0\n"\
"HU9Cn29v8jQtwPAvJAY23ehcB/BwMWKmkBf+Eo043inuxDsOJGpFLNX+dXpXHiCU\n"\
"mjUBkHVPoPIvMPH+1YYGoDjgalSXpMywdEfj/uWkPNw2NTVfpwsP\n"\
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
