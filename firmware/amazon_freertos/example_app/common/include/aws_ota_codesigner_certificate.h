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
"MIIBUzCB+6ADAgECAgkA3A9/MyeXH2QwCgYIKoZIzj0EAwIwHTEbMBkGA1UEAwwS\n"
"Y3BpcGlsYXNAZ21haWwuY29tMB4XDTE5MDIyNTE2MzkyN1oXDTIwMDIyNTE2Mzky\n"
"N1owHTEbMBkGA1UEAwwSY3BpcGlsYXNAZ21haWwuY29tMFkwEwYHKoZIzj0CAQYI\n"
"KoZIzj0DAQcDQgAElGatnT1DgUchL5611DlFm/ntq6nd4eh4ke0Ihs6YNZ3Shdf5\n"
"O/jIai5LMiLjG4RUsLq08chxcVu3WXZuz2urvKMkMCIwCwYDVR0PBAQDAgeAMBMG\n"
"A1UdJQQMMAoGCCsGAQUFBwMDMAoGCCqGSM49BAMCA0cAMEQCIGdV9crtGDhSYTi+\n"
"h1S9LfiBf14BcshtTU3KbkmFApMFAiAfu6+XJeToNpHfiB3YHU55y/0s9GAaC1wh\n"
"4ZV56k/rig==\n"
"-----END CERTIFICATE-----\n";

#endif
