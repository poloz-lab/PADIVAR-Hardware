/*
Copyright or © or Copr. PST PADIVAR Hardware (2020)
contributors:
QuentinC <quclement@et.esiea.fr>
Nulan <novais@et.esiea.fr>
Mathilde <mroyer@et.esiea.fr>
Poloz <polozfr@laposte.net>
MathysG <gageot@et.esiea.fr>

This software is a computer program whose purpose is to diagnose a vehicle.

This software is governed by the CeCILL license under French law and
abiding by the rules of distribution of free software.  You can  use, 
modify and/ or redistribute the software under the terms of the CeCILL
license as circulated by CEA, CNRS and INRIA at the following URL
"http://www.cecill.info". 

As a counterpart to the access to the source code and  rights to copy,
modify and redistribute granted by the license, users are provided only
with a limited warranty  and the software's author,  the holder of the
economic rights,  and the successive licensors  have only  limited
liability. 

In this respect, the user's attention is drawn to the risks associated
with loading,  using,  modifying and/or developing or reproducing the
software by the user in light of its specific status of free software,
that may mean  that it is complicated to manipulate,  and  that  also
therefore means  that it is reserved for developers  and  experienced
professionals having in-depth computer knowledge. Users are therefore
encouraged to load and test the software's suitability as regards their
requirements in conditions enabling the security of their systems and/or 
data to be ensured and,  more generally, to use and operate it in the 
same conditions as regards security. 

The fact that you are presently reading this means that you have had
knowledge of the CeCILL license and that you accept its terms.
*/

#ifndef PID_H
#define PID_H

/*!
 * \file pid.h
 * \brief it helps to represent a PID for the human and the machine
 */

#include <string>
#include <exception>
#include <vector>
#include <iostream>
#include <sstream>
#include <string>
#include <math.h>

/*!
 * \namespace HexPids
 * \brief namespace for enum HexPid
 */
namespace HexPids
{
    /*!
     * \enum HexPid
     * \brief All PIDs supported by the program.
     * 
     * This enum helps to designate a PID for the machine
     */
    enum HexPid
    {
        h0100, /*!< Service 01 PID 00 */
        h0101, /*!< Service 01 PID 01 */
        h0102, /*!< Service 01 PID 02 */
        h0103, /*!< Service 01 PID 03 */
        h0104, /*!< Service 01 PID 04 */
        h0105, /*!< Service 01 PID 05 */
        h0106, /*!< Service 01 PID 06 */
        h0107, /*!< Service 01 PID 07 */
        h0108, /*!< Service 01 PID 08 */
        h0109, /*!< Service 01 PID 09 */
        h010A, /*!< Service 01 PID 0A */
        h010B, /*!< Service 01 PID 0B */
        h010C, /*!< Service 01 PID 0C */
        h010D, /*!< Service 01 PID 0D */
        h010E, /*!< Service 01 PID 0E */
        h010F, /*!< Service 01 PID 0F */
        h0110, /*!< Service 01 PID 10 */
        h0111, /*!< Service 01 PID 11 */
        h0112, /*!< Service 01 PID 12 */
        h0113, /*!< Service 01 PID 13 */
        h0114, /*!< Service 01 PID 14 */
        h0115, /*!< Service 01 PID 15 */
        h0116, /*!< Service 01 PID 16 */
        h0117, /*!< Service 01 PID 17 */
        h0118, /*!< Service 01 PID 18 */
        h0119, /*!< Service 01 PID 19 */
        h011A, /*!< Service 01 PID 1A */
        h011B, /*!< Service 01 PID 1B */
        h011C, /*!< Service 01 PID 1C */
        h011D, /*!< Service 01 PID 1D */
        h011E, /*!< Service 01 PID 1E */
        h011F, /*!< Service 01 PID 1F */
        h0120, /*!< Service 01 PID 20 */
        h0121, /*!< Service 01 PID 21 */
        h0122, /*!< Service 01 PID 22 */
        h0123, /*!< Service 01 PID 23 */
        h0124, /*!< Service 01 PID 24 */
        h0125, /*!< Service 01 PID 25 */
        h0126, /*!< Service 01 PID 26 */
        h0127, /*!< Service 01 PID 27 */
        h0128, /*!< Service 01 PID 28 */
        h0129, /*!< Service 01 PID 29 */
        h012A, /*!< Service 01 PID 2A */
        h012B, /*!< Service 01 PID 2B */
        h012C, /*!< Service 01 PID 2C */
        h012D, /*!< Service 01 PID 2D */
        h012E, /*!< Service 01 PID 2E */
        h012F, /*!< Service 01 PID 2F */
        h0130, /*!< Service 01 PID 30 */
        h0131, /*!< Service 01 PID 31 */
        h0132, /*!< Service 01 PID 32 */
        h0133, /*!< Service 01 PID 33 */
        h0134, /*!< Service 01 PID 34 */
        h0135, /*!< Service 01 PID 35 */
        h0136, /*!< Service 01 PID 36 */
        h0137, /*!< Service 01 PID 37 */
        h0138, /*!< Service 01 PID 38 */
        h0139, /*!< Service 01 PID 39 */
        h013A, /*!< Service 01 PID 3A */
        h013B, /*!< Service 01 PID 3B */
        h013C, /*!< Service 01 PID 3C */
        h013D, /*!< Service 01 PID 3D */
        h013E, /*!< Service 01 PID 3E */
        h013F, /*!< Service 01 PID 3F */
        h0140, /*!< Service 01 PID 40 */
        h0141, /*!< Service 01 PID 41 */
        h0142, /*!< Service 01 PID 42 */
        h0143, /*!< Service 01 PID 43 */
        h0144, /*!< Service 01 PID 44 */
        h0145, /*!< Service 01 PID 45 */
        h0146, /*!< Service 01 PID 46 */
        h0147, /*!< Service 01 PID 47 */
        h0148, /*!< Service 01 PID 48 */
        h0149, /*!< Service 01 PID 49 */
        h014A, /*!< Service 01 PID 4A */
        h014B, /*!< Service 01 PID 4B */
        h014C, /*!< Service 01 PID 4C */
        h014D, /*!< Service 01 PID 4D */
        h014E, /*!< Service 01 PID 4E */
        h014F, /*!< Service 01 PID 4F */
        h0150, /*!< Service 01 PID 50 */
        h0151, /*!< Service 01 PID 51 */
        h0152, /*!< Service 01 PID 52 */
        h0153, /*!< Service 01 PID 53 */
        h0154, /*!< Service 01 PID 54 */
        h0155, /*!< Service 01 PID 55 */
        h0156, /*!< Service 01 PID 56 */
        h0157, /*!< Service 01 PID 57 */
        h0158, /*!< Service 01 PID 58 */
        h0159, /*!< Service 01 PID 59 */
        h015A, /*!< Service 01 PID 5A */
        h015B, /*!< Service 01 PID 5B */
        h015C, /*!< Service 01 PID 5C */
        h015D, /*!< Service 01 PID 5D */
        h015E, /*!< Service 01 PID 5E */
        h015F, /*!< Service 01 PID 5F */
        h0160, /*!< Service 01 PID 60 */
        h0161, /*!< Service 01 PID 61 */
        h0162, /*!< Service 01 PID 62 */
        h0163, /*!< Service 01 PID 63 */
        h0164, /*!< Service 01 PID 64 */
        h0165, /*!< Service 01 PID 65 */
        h0166, /*!< Service 01 PID 66 */
        h0167, /*!< Service 01 PID 67 */
        h0168, /*!< Service 01 PID 68 */
        h0169, /*!< Service 01 PID 69 */
        h016A, /*!< Service 01 PID 6A */
        h016B, /*!< Service 01 PID 6B */
        h016C, /*!< Service 01 PID 6C */
        h016D, /*!< Service 01 PID 6D */
        h016E, /*!< Service 01 PID 6E */
        h016F, /*!< Service 01 PID 6F */
        h0170, /*!< Service 01 PID 70 */
        h0171, /*!< Service 01 PID 71 */
        h0172, /*!< Service 01 PID 72 */
        h0173, /*!< Service 01 PID 73 */
        h0174, /*!< Service 01 PID 74 */
        h0175, /*!< Service 01 PID 75 */
        h0176, /*!< Service 01 PID 76 */
        h0177, /*!< Service 01 PID 77 */
        h0178, /*!< Service 01 PID 78 */
        h0179, /*!< Service 01 PID 79 */
        h017A, /*!< Service 01 PID 7A */
        h017B, /*!< Service 01 PID 7B */
        h017C, /*!< Service 01 PID 7C */
        h017D, /*!< Service 01 PID 7D */
        h017E, /*!< Service 01 PID 7E */
        h017F, /*!< Service 01 PID 7F */
        h0180, /*!< Service 01 PID 80 */
        h0181, /*!< Service 01 PID 81 */
        h0182, /*!< Service 01 PID 82 */
        h0183, /*!< Service 01 PID 83 */
        h0184, /*!< Service 01 PID 84 */
        h0185, /*!< Service 01 PID 85 */
        h0186, /*!< Service 01 PID 86 */
        h0187, /*!< Service 01 PID 87 */
        h0188, /*!< Service 01 PID 88 */
        h0189, /*!< Service 01 PID 89 */
        h018A, /*!< Service 01 PID 8A */
        h018B, /*!< Service 01 PID 8B */
        h018C, /*!< Service 01 PID 8C */
        h018D, /*!< Service 01 PID 8D */
        h018E, /*!< Service 01 PID 8E */
        h018F, /*!< Service 01 PID 8F */
        h0190, /*!< Service 01 PID 90 */
        h0191, /*!< Service 01 PID 91 */
        h0192, /*!< Service 01 PID 92 */
        h0193, /*!< Service 01 PID 93 */
        h0194, /*!< Service 01 PID 94 */
        h0195, /*!< Service 01 PID 95 */
        h0196, /*!< Service 01 PID 96 */
        h0197, /*!< Service 01 PID 97 */
        h0198, /*!< Service 01 PID 98 */
        h0199, /*!< Service 01 PID 99 */
        h019A, /*!< Service 01 PID 9A */
        h019B, /*!< Service 01 PID 9B */
        h019C, /*!< Service 01 PID 9C */
        h019D, /*!< Service 01 PID 9D */
        h019E, /*!< Service 01 PID 9E */
        h019F, /*!< Service 01 PID 9F */
        h01A0, /*!< Service 01 PID A0 */
        h01A1, /*!< Service 01 PID A1 */
        h01A2, /*!< Service 01 PID A2 */
        h01A3, /*!< Service 01 PID A3 */
        h01A4, /*!< Service 01 PID A4 */
        h01A5, /*!< Service 01 PID A5 */
        h01A6, /*!< Service 01 PID A6 */
        h01C0, /*!< Service 01 PID C0 */
        h01C3, /*!< Service 01 PID C3 */
        h01C4, /*!< Service 01 PID C4 */
        h0200, /*!< Service 02 PID 00 */
        h0201, /*!< Service 02 PID 01 */
        h0202, /*!< Service 02 PID 02 */
        h0203, /*!< Service 02 PID 03 */
        h0204, /*!< Service 02 PID 04 */
        h0205, /*!< Service 02 PID 05 */
        h0206, /*!< Service 02 PID 06 */
        h0207, /*!< Service 02 PID 07 */
        h0208, /*!< Service 02 PID 08 */
        h0209, /*!< Service 02 PID 09 */
        h020A, /*!< Service 02 PID 0A */
        h020B, /*!< Service 02 PID 0B */
        h020C, /*!< Service 02 PID 0C */
        h020D, /*!< Service 02 PID 0D */
        h020E, /*!< Service 02 PID 0E */
        h020F, /*!< Service 02 PID 0F */
        h0210, /*!< Service 02 PID 10 */
        h0211, /*!< Service 02 PID 11 */
        h0212, /*!< Service 02 PID 12 */
        h0213, /*!< Service 02 PID 13 */
        h0214, /*!< Service 02 PID 14 */
        h0215, /*!< Service 02 PID 15 */
        h0216, /*!< Service 02 PID 16 */
        h0217, /*!< Service 02 PID 17 */
        h0218, /*!< Service 02 PID 18 */
        h0219, /*!< Service 02 PID 19 */
        h021A, /*!< Service 02 PID 1A */
        h021B, /*!< Service 02 PID 1B */
        h021C, /*!< Service 02 PID 1C */
        h021D, /*!< Service 02 PID 1D */
        h021E, /*!< Service 02 PID 1E */
        h021F, /*!< Service 02 PID 1F */
        h0220, /*!< Service 02 PID 20 */
        h0221, /*!< Service 02 PID 21 */
        h0222, /*!< Service 02 PID 22 */
        h0223, /*!< Service 02 PID 23 */
        h0224, /*!< Service 02 PID 24 */
        h0225, /*!< Service 02 PID 25 */
        h0226, /*!< Service 02 PID 26 */
        h0227, /*!< Service 02 PID 27 */
        h0228, /*!< Service 02 PID 28 */
        h0229, /*!< Service 02 PID 29 */
        h022A, /*!< Service 02 PID 2A */
        h022B, /*!< Service 02 PID 2B */
        h022C, /*!< Service 02 PID 2C */
        h022D, /*!< Service 02 PID 2D */
        h022E, /*!< Service 02 PID 2E */
        h022F, /*!< Service 02 PID 2F */
        h0230, /*!< Service 02 PID 30 */
        h0231, /*!< Service 02 PID 31 */
        h0232, /*!< Service 02 PID 32 */
        h0233, /*!< Service 02 PID 33 */
        h0234, /*!< Service 02 PID 34 */
        h0235, /*!< Service 02 PID 35 */
        h0236, /*!< Service 02 PID 36 */
        h0237, /*!< Service 02 PID 37 */
        h0238, /*!< Service 02 PID 38 */
        h0239, /*!< Service 02 PID 39 */
        h023A, /*!< Service 02 PID 3A */
        h023B, /*!< Service 02 PID 3B */
        h023C, /*!< Service 02 PID 3C */
        h023D, /*!< Service 02 PID 3D */
        h023E, /*!< Service 02 PID 3E */
        h023F, /*!< Service 02 PID 3F */
        h0240, /*!< Service 02 PID 40 */
        h0241, /*!< Service 02 PID 41 */
        h0242, /*!< Service 02 PID 42 */
        h0243, /*!< Service 02 PID 43 */
        h0244, /*!< Service 02 PID 44 */
        h0245, /*!< Service 02 PID 45 */
        h0246, /*!< Service 02 PID 46 */
        h0247, /*!< Service 02 PID 47 */
        h0248, /*!< Service 02 PID 48 */
        h0249, /*!< Service 02 PID 49 */
        h024A, /*!< Service 02 PID 4A */
        h024B, /*!< Service 02 PID 4B */
        h024C, /*!< Service 02 PID 4C */
        h024D, /*!< Service 02 PID 4D */
        h024E, /*!< Service 02 PID 4E */
        h024F, /*!< Service 02 PID 4F */
        h0250, /*!< Service 02 PID 50 */
        h0251, /*!< Service 02 PID 51 */
        h0252, /*!< Service 02 PID 52 */
        h0253, /*!< Service 02 PID 53 */
        h0254, /*!< Service 02 PID 54 */
        h0255, /*!< Service 02 PID 55 */
        h0256, /*!< Service 02 PID 56 */
        h0257, /*!< Service 02 PID 57 */
        h0258, /*!< Service 02 PID 58 */
        h0259, /*!< Service 02 PID 59 */
        h025A, /*!< Service 02 PID 5A */
        h025B, /*!< Service 02 PID 5B */
        h025C, /*!< Service 02 PID 5C */
        h025D, /*!< Service 02 PID 5D */
        h025E, /*!< Service 02 PID 5E */
        h025F, /*!< Service 02 PID 5F */
        h0260, /*!< Service 02 PID 60 */
        h0261, /*!< Service 02 PID 61 */
        h0262, /*!< Service 02 PID 62 */
        h0263, /*!< Service 02 PID 63 */
        h0264, /*!< Service 02 PID 64 */
        h0265, /*!< Service 02 PID 65 */
        h0266, /*!< Service 02 PID 66 */
        h0267, /*!< Service 02 PID 67 */
        h0268, /*!< Service 02 PID 68 */
        h0269, /*!< Service 02 PID 69 */
        h026A, /*!< Service 02 PID 6A */
        h026B, /*!< Service 02 PID 6B */
        h026C, /*!< Service 02 PID 6C */
        h026D, /*!< Service 02 PID 6D */
        h026E, /*!< Service 02 PID 6E */
        h026F, /*!< Service 02 PID 6F */
        h0270, /*!< Service 02 PID 70 */
        h0271, /*!< Service 02 PID 71 */
        h0272, /*!< Service 02 PID 72 */
        h0273, /*!< Service 02 PID 73 */
        h0274, /*!< Service 02 PID 74 */
        h0275, /*!< Service 02 PID 75 */
        h0276, /*!< Service 02 PID 76 */
        h0277, /*!< Service 02 PID 77 */
        h0278, /*!< Service 02 PID 78 */
        h0279, /*!< Service 02 PID 79 */
        h027A, /*!< Service 02 PID 7A */
        h027B, /*!< Service 02 PID 7B */
        h027C, /*!< Service 02 PID 7C */
        h027D, /*!< Service 02 PID 7D */
        h027E, /*!< Service 02 PID 7E */
        h027F, /*!< Service 02 PID 7F */
        h0280, /*!< Service 02 PID 80 */
        h0281, /*!< Service 02 PID 81 */
        h0282, /*!< Service 02 PID 82 */
        h0283, /*!< Service 02 PID 83 */
        h0284, /*!< Service 02 PID 84 */
        h0285, /*!< Service 02 PID 85 */
        h0286, /*!< Service 02 PID 86 */
        h0287, /*!< Service 02 PID 87 */
        h0288, /*!< Service 02 PID 88 */
        h0289, /*!< Service 02 PID 89 */
        h028A, /*!< Service 02 PID 8A */
        h028B, /*!< Service 02 PID 8B */
        h028C, /*!< Service 02 PID 8C */
        h028D, /*!< Service 02 PID 8D */
        h028E, /*!< Service 02 PID 8E */
        h028F, /*!< Service 02 PID 8F */
        h0290, /*!< Service 02 PID 90 */
        h0291, /*!< Service 02 PID 91 */
        h0292, /*!< Service 02 PID 92 */
        h0293, /*!< Service 02 PID 93 */
        h0294, /*!< Service 02 PID 94 */
        h0295, /*!< Service 02 PID 95 */
        h0296, /*!< Service 02 PID 96 */
        h0297, /*!< Service 02 PID 97 */
        h0298, /*!< Service 02 PID 98 */
        h0299, /*!< Service 02 PID 99 */
        h029A, /*!< Service 02 PID 9A */
        h029B, /*!< Service 02 PID 9B */
        h029C, /*!< Service 02 PID 9C */
        h029D, /*!< Service 02 PID 9D */
        h029E, /*!< Service 02 PID 9E */
        h029F, /*!< Service 02 PID 9F */
        h02A0, /*!< Service 02 PID A0 */
        h02A1, /*!< Service 02 PID A1 */
        h02A2, /*!< Service 02 PID A2 */
        h02A3, /*!< Service 02 PID A3 */
        h02A4, /*!< Service 02 PID A4 */
        h02A5, /*!< Service 02 PID A5 */
        h02A6, /*!< Service 02 PID A6 */
        h02C0, /*!< Service 02 PID C0 */
        h02C3, /*!< Service 02 PID C3 */
        h02C4, /*!< Service 02 PID C4 */
        h03, /*!< Service 03 */
        h04, /*!< Service 04 */
        h0900, /*!< Service 09 PID 00 */
        h0901, /*!< Service 09 PID 01 */
        h0902, /*!< Service 09 PID 02 */
        h0903, /*!< Service 09 PID 03 */
        h0904, /*!< Service 09 PID 04 */
        h0905, /*!< Service 09 PID 05 */
        h0906, /*!< Service 09 PID 06 */
        h0907, /*!< Service 09 PID 07 */
        h0908, /*!< Service 09 PID 08 */
        h0909, /*!< Service 09 PID 09 */
        h090A, /*!< Service 09 PID 0A */
        h090B /*!< Service 09 PID 0B */
    };

    static const HexPid all[] = {h0100,
        h0101,
        h0102,
        h0103,
        h0104,
        h0105,
        h0106,
        h0107,
        h0108,
        h0109,
        h010A,
        h010B,
        h010C,
        h010D,
        h010E,
        h010F,
        h0110,
        h0111,
        h0112,
        h0113,
        h0114,
        h0115,
        h0116,
        h0117,
        h0118,
        h0119,
        h011A,
        h011B,
        h011C,
        h011D,
        h011E,
        h011F,
        h0120,
        h0121,
        h0122,
        h0123,
        h0124,
        h0125,
        h0126,
        h0127,
        h0128,
        h0129,
        h012A,
        h012B,
        h012C,
        h012D,
        h012E,
        h012F,
        h0130,
        h0131,
        h0132,
        h0133,
        h0134,
        h0135,
        h0136,
        h0137,
        h0138,
        h0139,
        h013A,
        h013B,
        h013C,
        h013D,
        h013E,
        h013F,
        h0140,
        h0141,
        h0142,
        h0143,
        h0144,
        h0145,
        h0146,
        h0147,
        h0148,
        h0149,
        h014A,
        h014B,
        h014C,
        h014D,
        h014E,
        h014F,
        h0150,
        h0151,
        h0152,
        h0153,
        h0154,
        h0155,
        h0156,
        h0157,
        h0158,
        h0159,
        h015A,
        h015B,
        h015C,
        h015D,
        h015E,
        h015F,
        h0160,
        h0161,
        h0162,
        h0163,
        h0164,
        h0165,
        h0166,
        h0167,
        h0168,
        h0169,
        h016A,
        h016B,
        h016C,
        h016D,
        h016E,
        h016F,
        h0170,
        h0171,
        h0172,
        h0173,
        h0174,
        h0175,
        h0176,
        h0177,
        h0178,
        h0179,
        h017A,
        h017B,
        h017C,
        h017D,
        h017E,
        h017F,
        h0180,
        h0181,
        h0182,
        h0183,
        h0184,
        h0185,
        h0186,
        h0187,
        h0188,
        h0189,
        h018A,
        h018B,
        h018C,
        h018D,
        h018E,
        h018F,
        h0190,
        h0191,
        h0192,
        h0193,
        h0194,
        h0195,
        h0196,
        h0197,
        h0198,
        h0199,
        h019A,
        h019B,
        h019C,
        h019D,
        h019E,
        h019F,
        h01A0,
        h01A1,
        h01A2,
        h01A3,
        h01A4,
        h01A5,
        h01A6,
        h01C0,
        h01C3,
        h01C4,
        h0200,
        h0201,
        h0202,
        h0203,
        h0204,
        h0205,
        h0206,
        h0207,
        h0208,
        h0209,
        h020A,
        h020B,
        h020C,
        h020D,
        h020E,
        h020F,
        h0210,
        h0211,
        h0212,
        h0213,
        h0214,
        h0215,
        h0216,
        h0217,
        h0218,
        h0219,
        h021A,
        h021B,
        h021C,
        h021D,
        h021E,
        h021F,
        h0220,
        h0221,
        h0222,
        h0223,
        h0224,
        h0225,
        h0226,
        h0227,
        h0228,
        h0229,
        h022A,
        h022B,
        h022C,
        h022D,
        h022E,
        h022F,
        h0230,
        h0231,
        h0232,
        h0233,
        h0234,
        h0235,
        h0236,
        h0237,
        h0238,
        h0239,
        h023A,
        h023B,
        h023C,
        h023D,
        h023E,
        h023F,
        h0240,
        h0241,
        h0242,
        h0243,
        h0244,
        h0245,
        h0246,
        h0247,
        h0248,
        h0249,
        h024A,
        h024B,
        h024C,
        h024D,
        h024E,
        h024F,
        h0250,
        h0251,
        h0252,
        h0253,
        h0254,
        h0255,
        h0256,
        h0257,
        h0258,
        h0259,
        h025A,
        h025B,
        h025C,
        h025D,
        h025E,
        h025F,
        h0260,
        h0261,
        h0262,
        h0263,
        h0264,
        h0265,
        h0266,
        h0267,
        h0268,
        h0269,
        h026A,
        h026B,
        h026C,
        h026D,
        h026E,
        h026F,
        h0270,
        h0271,
        h0272,
        h0273,
        h0274,
        h0275,
        h0276,
        h0277,
        h0278,
        h0279,
        h027A,
        h027B,
        h027C,
        h027D,
        h027E,
        h027F,
        h0280,
        h0281,
        h0282,
        h0283,
        h0284,
        h0285,
        h0286,
        h0287,
        h0288,
        h0289,
        h028A,
        h028B,
        h028C,
        h028D,
        h028E,
        h028F,
        h0290,
        h0291,
        h0292,
        h0293,
        h0294,
        h0295,
        h0296,
        h0297,
        h0298,
        h0299,
        h029A,
        h029B,
        h029C,
        h029D,
        h029E,
        h029F,
        h02A0,
        h02A1,
        h02A2,
        h02A3,
        h02A4,
        h02A5,
        h02A6,
        h02C0,
        h02C3,
        h02C4,
        h03,
        h04,
        h0900,
        h0901,
        h0902,
        h0903,
        h0904,
        h0905,
        h0906,
        h0907,
        h0908,
        h0909,
        h090A,
        h090B
    };
}
typedef HexPids::HexPid HexPid;

/*!
 * \class Pid
 * \brief Class that represents a PID.
 * 
 * It's like a database of all PID.
 * It allows us to get information about a PID and to transform the value sent by the car in a human readable value.
 */
class Pid
{
private:
    std::string pidString_; /*!< PID code (hexadecimal as string) */
    HexPid hexPid_; /*!< PID from the HexPid enum representation */
    std::string data_bytes_; /*!< Bytes of data associated to the PID after a measure */

    /*!
     * \brief Forbid access to default constructor
     */
    Pid();

    /*!
     * \brief Hexadecimal to decimal conversion
     * \param data_bytes : Data bytes in hexadecimal format (as string)
     * \return decimal
     */
    unsigned int HexaToDec(std::string data_bytes) const;

public:
    /*!
     * \brief constructor when we don't have the data bytes, only when we know which pid (as string) we have to try
     * \param pid : pid in hexadecimal format
     */
    Pid(std::string pid);

    /*!
     * \brief constructor when we have the pid and the data bytes from the vehicle associated to this pid
     * \param pid : pid in hexadecimal format (as string)
     * \param data_bytes : data bytes associated to the pid
     */
    Pid(std::string pid, std::string data_bytes);

    /*!
     * \brief constructor where the pid is from the HexPid enum representation but we don't know the data_bytes associated
     * \param pid : pid from HexPid enum
     */
    Pid(HexPid pid);

    /*!
     * \brief constructor where the pid is from the HexPid enum representation and we know the data_bytes associated
     * \param pid : pid from HexPid enum
     * \param data_bytes : data bytes associated to the pid
     */
    Pid(HexPid pid, std::string data_bytes);

    /*!
     * \brief Get the pid in hexadecimal (string)
     * \return pid in hexadecimal (string)
     */
    std::string getPidString() const;

    /*!
     * \brief Get the pid with the HexPid enum representation
     * \return Pid in HexPid enum
     */
    HexPid getHexPid() const;

    /*!
     * \brief Get the data bytes of the measure of this PID
     * \return data bytes as string
     */
    std::string getDataBytes() const;

    /*!
     * \brief Set the data bytes after the measure of this PID
     * \param data_bytes : data_bytes of the measure as string
     */
    void setDataBytes(std::string data_bytes);

    /*!
     * \brief Get a description to explain what the PID is about
     * \return description of the pid
     */
    std::string getDescription() const;

    /*!
     * \brief Get the units associated to the value
     * \return units
     */
    std::string getUnits() const;

    /*!
     * \brief get number of data bytes returned by the PID
     * \return number of data bytes returned by the PID
     */
    unsigned int getNumberOfDataBytes() const;

    /*!
     * \brief get the data byte at index specified
     * \param index : index where to find data byte (from left to right, begins at 0)
     * \return data byte at index transformed as unsigned int
     * 
     * If the PID returns 2 data bytes, the function returns for index 0 the first data byte (from left to right).
     */
    unsigned int getDataByteAtIndex(unsigned int index) const;

    /*!
     * \brief get the number of values returned by the Pid
     * \return number of values returned by the Pid
     * 
     * Sometimes a PID gives two informations, for example PID 0129 that gives Air-Fuel equivalence ratio (lambda) & voltage
     */
    unsigned int getNumberOfValues() const;

    /*!
     * \brief Get minimum value possible for this PID
     * \return minimum values as vector in case of multiple values
     * 
     * The size of the vector depends of the number of values returned by the PID.
     */
    std::vector<float> getMin() const;

    /*!
     * \brief Get maximum value possible for this PID
     * \return maximum values as vector in case of multiple values
     * 
     * The size of the vector depends of the number of values returned by the PID.
     */
    std::vector<float> getMax() const;

    /*!
     * \brief Get the value associated to the data bytes. Sometimes, a calculation may be necessary
     * \return values associated to data_bytes as vector in case of multiple values
     * 
     * The size of the vector depends of the number of values returned by the PID.
     */
    std::vector<float> getValue() const;
};

/*!
 * \namespace ExceptionPidTypes
 * \brief namespace for enum ExceptionPidType
 */
namespace ExceptionPidTypes
{
    /*!
     * \enum ExceptionPidType
     * \brief Give the type of error
     */
    enum ExceptionPidType
    {
        NoError, /*!< No error */
        UnknownPidString, /*!< The PID as a string is unknown by the program */
        UnknownHexPid, /*!< The PID as a HexPid is unknown by the program */
        NoDataBytes, /*!< Can't get the data bytes of the PID, it hasn't been set before */
        NoDescription, /*!< No description available for this PID */
        NoUnits, /*!< No units available for this PID */
        NoMin,/*!< No minimum value available for this PID */
        NoMax,/*!< No maximum value available for this PID */
        BadDataBytes, /*!< Data bytes aren't valid */
        NoValue /*!< No value available for this PID */
    };
}
typedef ExceptionPidTypes::ExceptionPidType ExceptionPidType;

/*!
 * \class ExceptionPid
 * \brief Specific class to handle error in Pid class
 */
class ExceptionPid : public std::exception
{
public:
    /*!
     * \brief constructor with no details, only the type of the error
     * \param type : type of error
     */
    ExceptionPid(ExceptionPidType type) throw();

    /*!
     * \brief constructor with type and details about the error
     * \param type : type of the error
     * \param option : additionnal details
     */
    ExceptionPid(ExceptionPidType type, std::string option) throw();

    /*!
     * \brief give the explaination of the error
     * \return string to give explaination
     */
    virtual const char* what() const throw();
private:
    ExceptionPidType type_; /*!< type of the error */
    std::string explaination_; /*!< explaination of the error */
};

#endif
