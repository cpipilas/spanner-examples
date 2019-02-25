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
static const char signingcredentialSIGNING_CERTIFICATE_PEM[] = "-----BEGIN CERTIFICATE-----\nMIIBVDCB+6ADAgECAgkA1oRCbkfyjngwCgYIKoZIzj0EAwIwHTEbMBkGA1UEAwwS\nY3BpcGlsYXNAZ21haWwuY29tMB4XDTE5MDIyNTA5MTUxM1oXDTIwMDIyNTA5MTUx\nM1owHTEbMBkGA1UEAwwSY3BpcGlsYXNAZ21haWwuY29tMFkwEwYHKoZIzj0CAQYI\nKoZIzj0DAQcDQgAET0TcXsyDqe8AGE5EQQTfTvR7Ggzj12rnW/rbNGGko2iRRoS7\ncdZoKu/UgH+w4QN7nDdR6Ez6HCm7Ht8ABHdh+6MkMCIwCwYDVR0PBAQDAgeAMBMG\nA1UdJQQMMAoGCCsGAQUFBwMDMAoGCCqGSM49BAMCA0gAMEUCIBEspAU4to7aBO8N\nE7htK8f7sEk7m/02dj7qYnzMDKmuAiEAsGG5PJySXTqNWKSwbJ+RDWeCNlEarb+B\nD4u3EOBuChg=\n-----END CERTIFICATE-----\n";

#endif
