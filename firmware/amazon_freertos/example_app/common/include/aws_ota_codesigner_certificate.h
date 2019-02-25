/*
 * Amazon FreeRTOS
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
 * copies or substantial portions of the Software. If you wish to use our Amazon
 * FreeRTOS name, please do so in a fair use way that does not cause confusion.
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


#ifndef __AWS_CODESIGN_KEYS__H__
#define __AWS_CODESIGN_KEYS__H__

/*
 * PEM-encoded code signer certificate
 *
 * Must include the PEM header and footer:
 * "-----BEGIN CERTIFICATE-----"
 * "...base64 data..."
 * "-----END CERTIFICATE-----";
 */
static const char signingcredentialSIGNING_CERTIFICATE_PEM[] = 
"-----BEGIN CERTIFICATE-----\n"
"MIIBVDCB+6ADAgECAgkA1ntnkOGWd3YwCgYIKoZIzj0EAwIwHTEbMBkGA1UEAwwS\n"
"Y3BpcGlsYXNAZ21haWwuY29tMB4XDTE5MDIyNTE1MTkzOFoXDTIwMDIyNTE1MTkz\n"
"OFowHTEbMBkGA1UEAwwSY3BpcGlsYXNAZ21haWwuY29tMFkwEwYHKoZIzj0CAQYI\n"
"KoZIzj0DAQcDQgAE0aU0y1ZbCVePHMubIND2v7goz2WtQhRe9Z9tC0YGzaBUg+NK\n"
"+mVh0YKq5Hc9CRR/BhJbECYi9Jeq/ml2/a4FfaMkMCIwCwYDVR0PBAQDAgeAMBMG\n"
"A1UdJQQMMAoGCCsGAQUFBwMDMAoGCCqGSM49BAMCA0gAMEUCIDRunrDSs1NFZWmm\n"
"71bJ2ueV+7qA3vJQ/DcA7HEzkQbxAiEAzAgR/ZcYdrffYrndoATJJJXy8eOhc14s\n"
"gIyeIUoF23Q=\n"
"-----END CERTIFICATE-----\n";

#endif
