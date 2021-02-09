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

#include "pid.h"
#include <exception>
#include <stdexcept>
#include <string>

Pid::Pid(std::string pid)
{
    if (pid == "0100")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0100;
    }
    else if (pid == "0101")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0101;
    }
    else if (pid == "0102")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0102;
    }
    else if (pid == "0103")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0103;
    }
    else if (pid == "0104")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0104;
    }
    else if (pid == "0105")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0105;
    }
    else if (pid == "0106")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0106;
    }
    else if (pid == "0107")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0107;
    }
    else if (pid == "0108")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0108;
    }
    else if (pid == "0109")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0109;
    }
    else if (pid == "010A")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h010A;
    }
    else if (pid == "010B")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h010B;
    }
    else if (pid == "010C")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h010C;
    }
    else if (pid == "010D")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h010D;
    }
    else if (pid == "010E")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h010E;
    }
    else if (pid == "010F")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h010F;
    }
    else if (pid == "0110")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0110;
    }
    else if (pid == "0111")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0111;
    }
    else if (pid == "0112")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0112;
    }
    else if (pid == "0113")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0113;
    }
    else if (pid == "0114")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0114;
    }
    else if (pid == "0115")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0115;
    }
    else if (pid == "0116")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0116;
    }
    else if (pid == "0117")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0117;
    }
    else if (pid == "0118")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0118;
    }
    else if (pid == "0119")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0119;
    }
    else if (pid == "011A")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h011A;
    }
    else if (pid == "011B")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h011B;
    }
    else if (pid == "011C")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h011C;
    }
    else if (pid == "011D")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h011D;
    }
    else if (pid == "011E")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h011E;
    }
    else if (pid == "011F")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h011F;
    }
    else if (pid == "0120")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0120;
    }
    else if (pid == "0121")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0121;
    }
    else if (pid == "0122")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0122;
    }
    else if (pid == "0123")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0123;
    }
    else if (pid == "0124")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0124;
    }
    else if (pid == "0125")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0125;
    }
    else if (pid == "0126")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0126;
    }
    else if (pid == "0127")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0127;
    }
    else if (pid == "0128")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0128;
    }
    else if (pid == "0129")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0129;
    }
    else if (pid == "012A")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h012A;
    }
    else if (pid == "012B")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h012B;
    }
    else if (pid == "012C")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h012C;
    }
    else if (pid == "012D")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h012D;
    }
    else if (pid == "012E")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h012E;
    }
    else if (pid == "012F")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h012F;
    }
    else if (pid == "0130")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0130;
    }
    else if (pid == "0131")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0131;
    }
    else if (pid == "0132")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0132;
    }
    else if (pid == "0133")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0133;
    }
    else if (pid == "0134")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0134;
    }
    else if (pid == "0135")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0135;
    }
    else if (pid == "0136")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0136;
    }
    else if (pid == "0137")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0137;
    }
    else if (pid == "0138")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0138;
    }
    else if (pid == "0139")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0139;
    }
    else if (pid == "013A")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h013A;
    }
    else if (pid == "013B")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h013B;
    }
    else if (pid == "013C")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h013C;
    }
    else if (pid == "013D")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h013D;
    }
    else if (pid == "013E")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h013E;
    }
    else if (pid == "013F")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h013F;
    }
    else if (pid == "0140")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0140;
    }
    else if (pid == "0141")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0141;
    }
    else if (pid == "0142")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0142;
    }
    else if (pid == "0143")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0143;
    }
    else if (pid == "0144")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0144;
    }
    else if (pid == "0145")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0145;
    }
    else if (pid == "0146")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0146;
    }
    else if (pid == "0147")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0147;
    }
    else if (pid == "0148")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0148;
    }
    else if (pid == "0149")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0149;
    }
    else if (pid == "014A")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h014A;
    }
    else if (pid == "014B")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h014B;
    }
    else if (pid == "014C")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h014C;
    }
    else if (pid == "014D")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h014D;
    }
    else if (pid == "014E")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h014E;
    }
    else if (pid == "014F")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h014F;
    }
    else if (pid == "0150")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0150;
    }
    else if (pid == "0151")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0151;
    }
    else if (pid == "0152")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0152;
    }
    else if (pid == "0153")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0153;
    }
    else if (pid == "0154")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0154;
    }
    else if (pid == "0155")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0155;
    }
    else if (pid == "0156")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0156;
    }
    else if (pid == "0157")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0157;
    }
    else if (pid == "0158")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0158;
    }
    else if (pid == "0159")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0159;
    }
    else if (pid == "015A")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h015A;
    }
    else if (pid == "015B")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h015B;
    }
    else if (pid == "015C")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h015C;
    }
    else if (pid == "015D")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h015D;
    }
    else if (pid == "015E")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h015E;
    }
    else if (pid == "015F")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h015F;
    }
    else if (pid == "0160")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0160;
    }
    else if (pid == "0161")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0161;
    }
    else if (pid == "0162")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0162;
    }
    else if (pid == "0163")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0163;
    }
    else if (pid == "0164")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0164;
    }
    else if (pid == "0165")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0165;
    }
    else if (pid == "0166")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0166;
    }
    else if (pid == "0167")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0167;
    }
    else if (pid == "0168")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0168;
    }
    else if (pid == "0169")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0169;
    }
    else if (pid == "016A")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h016A;
    }
    else if (pid == "016B")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h016B;
    }
    else if (pid == "016C")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h016C;
    }
    else if (pid == "016D")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h016D;
    }
    else if (pid == "016E")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h016E;
    }
    else if (pid == "016F")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h016F;
    }
    else if (pid == "0170")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0170;
    }
    else if (pid == "0171")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0171;
    }
    else if (pid == "0172")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0172;
    }
    else if (pid == "0173")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0173;
    }
    else if (pid == "0174")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0174;
    }
    else if (pid == "0175")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0175;
    }
    else if (pid == "0176")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0176;
    }
    else if (pid == "0177")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0177;
    }
    else if (pid == "0178")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0178;
    }
    else if (pid == "0179")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0179;
    }
    else if (pid == "017A")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h017A;
    }
    else if (pid == "017B")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h017B;
    }
    else if (pid == "017C")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h017C;
    }
    else if (pid == "017D")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h017D;
    }
    else if (pid == "017E")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h017E;
    }
    else if (pid == "017F")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h017F;
    }
    else if (pid == "0180")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0180;
    }
    else if (pid == "0181")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0181;
    }
    else if (pid == "0182")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0182;
    }
    else if (pid == "0183")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0183;
    }
    else if (pid == "0184")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0184;
    }
    else if (pid == "0185")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0185;
    }
    else if (pid == "0186")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0186;
    }
    else if (pid == "0187")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0187;
    }
    else if (pid == "0188")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0188;
    }
    else if (pid == "0189")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0189;
    }
    else if (pid == "018A")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h018A;
    }
    else if (pid == "018B")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h018B;
    }
    else if (pid == "018C")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h018C;
    }
    else if (pid == "018D")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h018D;
    }
    else if (pid == "018E")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h018E;
    }
    else if (pid == "018F")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h018F;
    }
    else if (pid == "0190")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0190;
    }
    else if (pid == "0191")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0191;
    }
    else if (pid == "0192")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0192;
    }
    else if (pid == "0193")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0193;
    }
    else if (pid == "0194")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0194;
    }
    else if (pid == "0195")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0195;
    }
    else if (pid == "0196")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0196;
    }
    else if (pid == "0197")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0197;
    }
    else if (pid == "0198")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0198;
    }
    else if (pid == "0199")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0199;
    }
    else if (pid == "019A")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h019A;
    }
    else if (pid == "019B")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h019B;
    }
    else if (pid == "019C")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h019C;
    }
    else if (pid == "019D")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h019D;
    }
    else if (pid == "019E")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h019E;
    }
    else if (pid == "019F")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h019F;
    }
    else if (pid == "01A0")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h01A0;
    }
    else if (pid == "01A1")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h01A1;
    }
    else if (pid == "01A2")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h01A2;
    }
    else if (pid == "01A3")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h01A3;
    }
    else if (pid == "01A4")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h01A4;
    }
    else if (pid == "01A5")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h01A5;
    }
    else if (pid == "01A6")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h01A6;
    }
    else if (pid == "01C0")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h01C0;
    }
    else if (pid == "01C3")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h01C3;
    }
    else if (pid == "01C4")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h01C4;
    }
    else if (pid == "0200")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0200;
    }
    else if (pid == "0201")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0201;
    }
    else if (pid == "0202")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0202;
    }
    else if (pid == "0203")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0203;
    }
    else if (pid == "0204")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0204;
    }
    else if (pid == "0205")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0205;
    }
    else if (pid == "0206")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0206;
    }
    else if (pid == "0207")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0207;
    }
    else if (pid == "0208")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0208;
    }
    else if (pid == "0209")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0209;
    }
    else if (pid == "020A")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h020A;
    }
    else if (pid == "020B")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h020B;
    }
    else if (pid == "020C")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h020C;
    }
    else if (pid == "020D")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h020D;
    }
    else if (pid == "020E")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h020E;
    }
    else if (pid == "020F")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h020F;
    }
    else if (pid == "0210")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0210;
    }
    else if (pid == "0211")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0211;
    }
    else if (pid == "0212")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0212;
    }
    else if (pid == "0213")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0213;
    }
    else if (pid == "0214")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0214;
    }
    else if (pid == "0215")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0215;
    }
    else if (pid == "0216")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0216;
    }
    else if (pid == "0217")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0217;
    }
    else if (pid == "0218")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0218;
    }
    else if (pid == "0219")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0219;
    }
    else if (pid == "021A")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h021A;
    }
    else if (pid == "021B")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h021B;
    }
    else if (pid == "021C")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h021C;
    }
    else if (pid == "021D")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h021D;
    }
    else if (pid == "021E")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h021E;
    }
    else if (pid == "021F")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h021F;
    }
    else if (pid == "0220")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0220;
    }
    else if (pid == "0221")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0221;
    }
    else if (pid == "0222")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0222;
    }
    else if (pid == "0223")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0223;
    }
    else if (pid == "0224")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0224;
    }
    else if (pid == "0225")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0225;
    }
    else if (pid == "0226")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0226;
    }
    else if (pid == "0227")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0227;
    }
    else if (pid == "0228")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0228;
    }
    else if (pid == "0229")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0229;
    }
    else if (pid == "022A")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h022A;
    }
    else if (pid == "022B")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h022B;
    }
    else if (pid == "022C")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h022C;
    }
    else if (pid == "022D")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h022D;
    }
    else if (pid == "022E")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h022E;
    }
    else if (pid == "022F")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h022F;
    }
    else if (pid == "0230")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0230;
    }
    else if (pid == "0231")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0231;
    }
    else if (pid == "0232")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0232;
    }
    else if (pid == "0233")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0233;
    }
    else if (pid == "0234")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0234;
    }
    else if (pid == "0235")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0235;
    }
    else if (pid == "0236")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0236;
    }
    else if (pid == "0237")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0237;
    }
    else if (pid == "0238")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0238;
    }
    else if (pid == "0239")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0239;
    }
    else if (pid == "023A")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h023A;
    }
    else if (pid == "023B")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h023B;
    }
    else if (pid == "023C")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h023C;
    }
    else if (pid == "023D")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h023D;
    }
    else if (pid == "023E")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h023E;
    }
    else if (pid == "023F")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h023F;
    }
    else if (pid == "0240")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0240;
    }
    else if (pid == "0241")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0241;
    }
    else if (pid == "0242")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0242;
    }
    else if (pid == "0243")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0243;
    }
    else if (pid == "0244")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0244;
    }
    else if (pid == "0245")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0245;
    }
    else if (pid == "0246")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0246;
    }
    else if (pid == "0247")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0247;
    }
    else if (pid == "0248")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0248;
    }
    else if (pid == "0249")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0249;
    }
    else if (pid == "024A")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h024A;
    }
    else if (pid == "024B")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h024B;
    }
    else if (pid == "024C")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h024C;
    }
    else if (pid == "024D")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h024D;
    }
    else if (pid == "024E")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h024E;
    }
    else if (pid == "024F")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h024F;
    }
    else if (pid == "0250")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0250;
    }
    else if (pid == "0251")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0251;
    }
    else if (pid == "0252")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0252;
    }
    else if (pid == "0253")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0253;
    }
    else if (pid == "0254")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0254;
    }
    else if (pid == "0255")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0255;
    }
    else if (pid == "0256")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0256;
    }
    else if (pid == "0257")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0257;
    }
    else if (pid == "0258")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0258;
    }
    else if (pid == "0259")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0259;
    }
    else if (pid == "025A")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h025A;
    }
    else if (pid == "025B")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h025B;
    }
    else if (pid == "025C")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h025C;
    }
    else if (pid == "025D")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h025D;
    }
    else if (pid == "025E")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h025E;
    }
    else if (pid == "025F")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h025F;
    }
    else if (pid == "0260")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0260;
    }
    else if (pid == "0261")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0261;
    }
    else if (pid == "0262")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0262;
    }
    else if (pid == "0263")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0263;
    }
    else if (pid == "0264")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0264;
    }
    else if (pid == "0265")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0265;
    }
    else if (pid == "0266")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0266;
    }
    else if (pid == "0267")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0267;
    }
    else if (pid == "0268")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0268;
    }
    else if (pid == "0269")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0269;
    }
    else if (pid == "026A")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h026A;
    }
    else if (pid == "026B")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h026B;
    }
    else if (pid == "026C")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h026C;
    }
    else if (pid == "026D")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h026D;
    }
    else if (pid == "026E")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h026E;
    }
    else if (pid == "026F")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h026F;
    }
    else if (pid == "0270")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0270;
    }
    else if (pid == "0271")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0271;
    }
    else if (pid == "0272")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0272;
    }
    else if (pid == "0273")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0273;
    }
    else if (pid == "0274")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0274;
    }
    else if (pid == "0275")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0275;
    }
    else if (pid == "0276")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0276;
    }
    else if (pid == "0277")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0277;
    }
    else if (pid == "0278")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0278;
    }
    else if (pid == "0279")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0279;
    }
    else if (pid == "027A")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h027A;
    }
    else if (pid == "027B")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h027B;
    }
    else if (pid == "027C")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h027C;
    }
    else if (pid == "027D")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h027D;
    }
    else if (pid == "027E")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h027E;
    }
    else if (pid == "027F")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h027F;
    }
    else if (pid == "0280")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0280;
    }
    else if (pid == "0281")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0281;
    }
    else if (pid == "0282")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0282;
    }
    else if (pid == "0283")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0283;
    }
    else if (pid == "0284")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0284;
    }
    else if (pid == "0285")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0285;
    }
    else if (pid == "0286")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0286;
    }
    else if (pid == "0287")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0287;
    }
    else if (pid == "0288")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0288;
    }
    else if (pid == "0289")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0289;
    }
    else if (pid == "028A")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h028A;
    }
    else if (pid == "028B")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h028B;
    }
    else if (pid == "028C")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h028C;
    }
    else if (pid == "028D")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h028D;
    }
    else if (pid == "028E")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h028E;
    }
    else if (pid == "028F")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h028F;
    }
    else if (pid == "0290")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0290;
    }
    else if (pid == "0291")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0291;
    }
    else if (pid == "0292")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0292;
    }
    else if (pid == "0293")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0293;
    }
    else if (pid == "0294")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0294;
    }
    else if (pid == "0295")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0295;
    }
    else if (pid == "0296")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0296;
    }
    else if (pid == "0297")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0297;
    }
    else if (pid == "0298")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0298;
    }
    else if (pid == "0299")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0299;
    }
    else if (pid == "029A")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h029A;
    }
    else if (pid == "029B")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h029B;
    }
    else if (pid == "029C")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h029C;
    }
    else if (pid == "029D")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h029D;
    }
    else if (pid == "029E")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h029E;
    }
    else if (pid == "029F")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h029F;
    }
    else if (pid == "02A0")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h02A0;
    }
    else if (pid == "02A1")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h02A1;
    }
    else if (pid == "02A2")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h02A2;
    }
    else if (pid == "02A3")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h02A3;
    }
    else if (pid == "02A4")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h02A4;
    }
    else if (pid == "02A5")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h02A5;
    }
    else if (pid == "02A6")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h02A6;
    }
    else if (pid == "02C0")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h02C0;
    }
    else if (pid == "02C3")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h02C3;
    }
    else if (pid == "02C4")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h02C4;
    }
    else if (pid == "03")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h03;
    }
    else if (pid == "04")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h04;
    }
    else if (pid == "0900")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0900;
    }
    else if (pid == "0901")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0901;
    }
    else if (pid == "0902")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0902;
    }
    else if (pid == "0903")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0903;
    }
    else if (pid == "0904")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0904;
    }
    else if (pid == "0905")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0905;
    }
    else if (pid == "0906")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0906;
    }
    else if (pid == "0907")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0907;
    }
    else if (pid == "0908")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0908;
    }
    else if (pid == "0909")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h0909;
    }
    else if (pid == "090A")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h090A;
    }
    else if (pid == "090B")
    {
        pidString_ = pid;
        hexPid_ = HexPid::h090B;
    }
    else
    {
        throw ExceptionPid(ExceptionPidType::UnknownPidString, pid);
    }
    
}

Pid::Pid(HexPid pid)
{
    switch(pid)
    {
    case HexPid::h0100:
        pidString_ = "0100";
        break;
    case HexPid::h0101:
        pidString_ = "0101";
        break;
    case HexPid::h0102:
        pidString_ = "0102";
        break;
    case HexPid::h0103:
        pidString_ = "0103";
        break;
    case HexPid::h0104:
        pidString_ = "0104";
        break;
    case HexPid::h0105:
        pidString_ = "0105";
        break;
    case HexPid::h0106:
        pidString_ = "0106";
        break;
    case HexPid::h0107:
        pidString_ = "0107";
        break;
    case HexPid::h0108:
        pidString_ = "0108";
        break;
    case HexPid::h0109:
        pidString_ = "0109";
        break;
    case HexPid::h010A:
        pidString_ = "010A";
        break;
    case HexPid::h010B:
        pidString_ = "010B";
        break;
    case HexPid::h010C:
        pidString_ = "010C";
        break;
    case HexPid::h010D:
        pidString_ = "010D";
        break;
    case HexPid::h010E:
        pidString_ = "010E";
        break;
    case HexPid::h010F:
        pidString_ = "010F";
        break;
    case HexPid::h0110:
        pidString_ = "0110";
        break;
    case HexPid::h0111:
        pidString_ = "0111";
        break;
    case HexPid::h0112:
        pidString_ = "0112";
        break;
    case HexPid::h0113:
        pidString_ = "0113";
        break;
    case HexPid::h0114:
        pidString_ = "0114";
        break;
    case HexPid::h0115:
        pidString_ = "0115";
        break;
    case HexPid::h0116:
        pidString_ = "0116";
        break;
    case HexPid::h0117:
        pidString_ = "0117";
        break;
    case HexPid::h0118:
        pidString_ = "0118";
        break;
    case HexPid::h0119:
        pidString_ = "0119";
        break;
    case HexPid::h011A:
        pidString_ = "011A";
        break;
    case HexPid::h011B:
        pidString_ = "011B";
        break;
    case HexPid::h011C:
        pidString_ = "011C";
        break;
    case HexPid::h011D:
        pidString_ = "011D";
        break;
    case HexPid::h011E:
        pidString_ = "011E";
        break;
    case HexPid::h011F:
        pidString_ = "011F";
        break;
    case HexPid::h0120:
        pidString_ = "0120";
        break;
    case HexPid::h0121:
        pidString_ = "0121";
        break;
    case HexPid::h0122:
        pidString_ = "0122";
        break;
    case HexPid::h0123:
        pidString_ = "0123";
        break;
    case HexPid::h0124:
        pidString_ = "0124";
        break;
    case HexPid::h0125:
        pidString_ = "0125";
        break;
    case HexPid::h0126:
        pidString_ = "0126";
        break;
    case HexPid::h0127:
        pidString_ = "0127";
        break;
    case HexPid::h0128:
        pidString_ = "0128";
        break;
    case HexPid::h0129:
        pidString_ = "0129";
        break;
    case HexPid::h012A:
        pidString_ = "012A";
        break;
    case HexPid::h012B:
        pidString_ = "012B";
        break;
    case HexPid::h012C:
        pidString_ = "012C";
        break;
    case HexPid::h012D:
        pidString_ = "012D";
        break;
    case HexPid::h012E:
        pidString_ = "012E";
        break;
    case HexPid::h012F:
        pidString_ = "012F";
        break;
    case HexPid::h0130:
        pidString_ = "0130";
        break;
    case HexPid::h0131:
        pidString_ = "0131";
        break;
    case HexPid::h0132:
        pidString_ = "0132";
        break;
    case HexPid::h0133:
        pidString_ = "0133";
        break;
    case HexPid::h0134:
        pidString_ = "0134";
        break;
    case HexPid::h0135:
        pidString_ = "0135";
        break;
    case HexPid::h0136:
        pidString_ = "0136";
        break;
    case HexPid::h0137:
        pidString_ = "0137";
        break;
    case HexPid::h0138:
        pidString_ = "0138";
        break;
    case HexPid::h0139:
        pidString_ = "0139";
        break;
    case HexPid::h013A:
        pidString_ = "013A";
        break;
    case HexPid::h013B:
        pidString_ = "013B";
        break;
    case HexPid::h013C:
        pidString_ = "013C";
        break;
    case HexPid::h013D:
        pidString_ = "013D";
        break;
    case HexPid::h013E:
        pidString_ = "013E";
        break;
    case HexPid::h013F:
        pidString_ = "013F";
        break;
    case HexPid::h0140:
        pidString_ = "0140";
        break;
    case HexPid::h0141:
        pidString_ = "0141";
        break;
    case HexPid::h0142:
        pidString_ = "0142";
        break;
    case HexPid::h0143:
        pidString_ = "0143";
        break;
    case HexPid::h0144:
        pidString_ = "0144";
        break;
    case HexPid::h0145:
        pidString_ = "0145";
        break;
    case HexPid::h0146:
        pidString_ = "0146";
        break;
    case HexPid::h0147:
        pidString_ = "0147";
        break;
    case HexPid::h0148:
        pidString_ = "0148";
        break;
    case HexPid::h0149:
        pidString_ = "0149";
        break;
    case HexPid::h014A:
        pidString_ = "014A";
        break;
    case HexPid::h014B:
        pidString_ = "014B";
        break;
    case HexPid::h014C:
        pidString_ = "014C";
        break;
    case HexPid::h014D:
        pidString_ = "014D";
        break;
    case HexPid::h014E:
        pidString_ = "014E";
        break;
    case HexPid::h014F:
        pidString_ = "014F";
        break;
    case HexPid::h0150:
        pidString_ = "0150";
        break;
    case HexPid::h0151:
        pidString_ = "0151";
        break;
    case HexPid::h0152:
        pidString_ = "0152";
        break;
    case HexPid::h0153:
        pidString_ = "0153";
        break;
    case HexPid::h0154:
        pidString_ = "0154";
        break;
    case HexPid::h0155:
        pidString_ = "0155";
        break;
    case HexPid::h0156:
        pidString_ = "0156";
        break;
    case HexPid::h0157:
        pidString_ = "0157";
        break;
    case HexPid::h0158:
        pidString_ = "0158";
        break;
    case HexPid::h0159:
        pidString_ = "0159";
        break;
    case HexPid::h015A:
        pidString_ = "015A";
        break;
    case HexPid::h015B:
        pidString_ = "015B";
        break;
    case HexPid::h015C:
        pidString_ = "015C";
        break;
    case HexPid::h015D:
        pidString_ = "015D";
        break;
    case HexPid::h015E:
        pidString_ = "015E";
        break;
    case HexPid::h015F:
        pidString_ = "015F";
        break;
    case HexPid::h0160:
        pidString_ = "0160";
        break;
    case HexPid::h0161:
        pidString_ = "0161";
        break;
    case HexPid::h0162:
        pidString_ = "0162";
        break;
    case HexPid::h0163:
        pidString_ = "0163";
        break;
    case HexPid::h0164:
        pidString_ = "0164";
        break;
    case HexPid::h0165:
        pidString_ = "0165";
        break;
    case HexPid::h0166:
        pidString_ = "0166";
        break;
    case HexPid::h0167:
        pidString_ = "0167";
        break;
    case HexPid::h0168:
        pidString_ = "0168";
        break;
    case HexPid::h0169:
        pidString_ = "0169";
        break;
    case HexPid::h016A:
        pidString_ = "016A";
        break;
    case HexPid::h016B:
        pidString_ = "016B";
        break;
    case HexPid::h016C:
        pidString_ = "016C";
        break;
    case HexPid::h016D:
        pidString_ = "016D";
        break;
    case HexPid::h016E:
        pidString_ = "016E";
        break;
    case HexPid::h016F:
        pidString_ = "016F";
        break;
    case HexPid::h0170:
        pidString_ = "0170";
        break;
    case HexPid::h0171:
        pidString_ = "0171";
        break;
    case HexPid::h0172:
        pidString_ = "0172";
        break;
    case HexPid::h0173:
        pidString_ = "0173";
        break;
    case HexPid::h0174:
        pidString_ = "0174";
        break;
    case HexPid::h0175:
        pidString_ = "0175";
        break;
    case HexPid::h0176:
        pidString_ = "0176";
        break;
    case HexPid::h0177:
        pidString_ = "0177";
        break;
    case HexPid::h0178:
        pidString_ = "0178";
        break;
    case HexPid::h0179:
        pidString_ = "0179";
        break;
    case HexPid::h017A:
        pidString_ = "017A";
        break;
    case HexPid::h017B:
        pidString_ = "017B";
        break;
    case HexPid::h017C:
        pidString_ = "017C";
        break;
    case HexPid::h017D:
        pidString_ = "017D";
        break;
    case HexPid::h017E:
        pidString_ = "017E";
        break;
    case HexPid::h017F:
        pidString_ = "017F";
        break;
    case HexPid::h0180:
        pidString_ = "0180";
        break;
    case HexPid::h0181:
        pidString_ = "0181";
        break;
    case HexPid::h0182:
        pidString_ = "0182";
        break;
    case HexPid::h0183:
        pidString_ = "0183";
        break;
    case HexPid::h0184:
        pidString_ = "0184";
        break;
    case HexPid::h0185:
        pidString_ = "0185";
        break;
    case HexPid::h0186:
        pidString_ = "0186";
        break;
    case HexPid::h0187:
        pidString_ = "0187";
        break;
    case HexPid::h0188:
        pidString_ = "0188";
        break;
    case HexPid::h0189:
        pidString_ = "0189";
        break;
    case HexPid::h018A:
        pidString_ = "018A";
        break;
    case HexPid::h018B:
        pidString_ = "018B";
        break;
    case HexPid::h018C:
        pidString_ = "018C";
        break;
    case HexPid::h018D:
        pidString_ = "018D";
        break;
    case HexPid::h018E:
        pidString_ = "018E";
        break;
    case HexPid::h018F:
        pidString_ = "018F";
        break;
    case HexPid::h0190:
        pidString_ = "0190";
        break;
    case HexPid::h0191:
        pidString_ = "0191";
        break;
    case HexPid::h0192:
        pidString_ = "0192";
        break;
    case HexPid::h0193:
        pidString_ = "0193";
        break;
    case HexPid::h0194:
        pidString_ = "0194";
        break;
    case HexPid::h0195:
        pidString_ = "0195";
        break;
    case HexPid::h0196:
        pidString_ = "0196";
        break;
    case HexPid::h0197:
        pidString_ = "0197";
        break;
    case HexPid::h0198:
        pidString_ = "0198";
        break;
    case HexPid::h0199:
        pidString_ = "0199";
        break;
    case HexPid::h019A:
        pidString_ = "019A";
        break;
    case HexPid::h019B:
        pidString_ = "019B";
        break;
    case HexPid::h019C:
        pidString_ = "019C";
        break;
    case HexPid::h019D:
        pidString_ = "019D";
        break;
    case HexPid::h019E:
        pidString_ = "019E";
        break;
    case HexPid::h019F:
        pidString_ = "019F";
        break;
    case HexPid::h01A0:
        pidString_ = "01A0";
        break;
    case HexPid::h01A1:
        pidString_ = "01A1";
        break;
    case HexPid::h01A2:
        pidString_ = "01A2";
        break;
    case HexPid::h01A3:
        pidString_ = "01A3";
        break;
    case HexPid::h01A4:
        pidString_ = "01A4";
        break;
    case HexPid::h01A5:
        pidString_ = "01A5";
        break;
    case HexPid::h01A6:
        pidString_ = "01A6";
        break;
    case HexPid::h01C0:
        pidString_ = "01C0";
        break;
    case HexPid::h01C3:
        pidString_ = "01C3";
        break;
    case HexPid::h01C4:
        pidString_ = "01C4";
        break;
    case HexPid::h0200:
        pidString_ = "0200";
        break;
    case HexPid::h0201:
        pidString_ = "0201";
        break;
    case HexPid::h0202:
        pidString_ = "0202";
        break;
    case HexPid::h0203:
        pidString_ = "0203";
        break;
    case HexPid::h0204:
        pidString_ = "0204";
        break;
    case HexPid::h0205:
        pidString_ = "0205";
        break;
    case HexPid::h0206:
        pidString_ = "0206";
        break;
    case HexPid::h0207:
        pidString_ = "0207";
        break;
    case HexPid::h0208:
        pidString_ = "0208";
        break;
    case HexPid::h0209:
        pidString_ = "0209";
        break;
    case HexPid::h020A:
        pidString_ = "020A";
        break;
    case HexPid::h020B:
        pidString_ = "020B";
        break;
    case HexPid::h020C:
        pidString_ = "020C";
        break;
    case HexPid::h020D:
        pidString_ = "020D";
        break;
    case HexPid::h020E:
        pidString_ = "020E";
        break;
    case HexPid::h020F:
        pidString_ = "020F";
        break;
    case HexPid::h0210:
        pidString_ = "0210";
        break;
    case HexPid::h0211:
        pidString_ = "0211";
        break;
    case HexPid::h0212:
        pidString_ = "0212";
        break;
    case HexPid::h0213:
        pidString_ = "0213";
        break;
    case HexPid::h0214:
        pidString_ = "0214";
        break;
    case HexPid::h0215:
        pidString_ = "0215";
        break;
    case HexPid::h0216:
        pidString_ = "0216";
        break;
    case HexPid::h0217:
        pidString_ = "0217";
        break;
    case HexPid::h0218:
        pidString_ = "0218";
        break;
    case HexPid::h0219:
        pidString_ = "0219";
        break;
    case HexPid::h021A:
        pidString_ = "021A";
        break;
    case HexPid::h021B:
        pidString_ = "021B";
        break;
    case HexPid::h021C:
        pidString_ = "021C";
        break;
    case HexPid::h021D:
        pidString_ = "021D";
        break;
    case HexPid::h021E:
        pidString_ = "021E";
        break;
    case HexPid::h021F:
        pidString_ = "021F";
        break;
    case HexPid::h0220:
        pidString_ = "0220";
        break;
    case HexPid::h0221:
        pidString_ = "0221";
        break;
    case HexPid::h0222:
        pidString_ = "0222";
        break;
    case HexPid::h0223:
        pidString_ = "0223";
        break;
    case HexPid::h0224:
        pidString_ = "0224";
        break;
    case HexPid::h0225:
        pidString_ = "0225";
        break;
    case HexPid::h0226:
        pidString_ = "0226";
        break;
    case HexPid::h0227:
        pidString_ = "0227";
        break;
    case HexPid::h0228:
        pidString_ = "0228";
        break;
    case HexPid::h0229:
        pidString_ = "0229";
        break;
    case HexPid::h022A:
        pidString_ = "022A";
        break;
    case HexPid::h022B:
        pidString_ = "022B";
        break;
    case HexPid::h022C:
        pidString_ = "022C";
        break;
    case HexPid::h022D:
        pidString_ = "022D";
        break;
    case HexPid::h022E:
        pidString_ = "022E";
        break;
    case HexPid::h022F:
        pidString_ = "022F";
        break;
    case HexPid::h0230:
        pidString_ = "0230";
        break;
    case HexPid::h0231:
        pidString_ = "0231";
        break;
    case HexPid::h0232:
        pidString_ = "0232";
        break;
    case HexPid::h0233:
        pidString_ = "0233";
        break;
    case HexPid::h0234:
        pidString_ = "0234";
        break;
    case HexPid::h0235:
        pidString_ = "0235";
        break;
    case HexPid::h0236:
        pidString_ = "0236";
        break;
    case HexPid::h0237:
        pidString_ = "0237";
        break;
    case HexPid::h0238:
        pidString_ = "0238";
        break;
    case HexPid::h0239:
        pidString_ = "0239";
        break;
    case HexPid::h023A:
        pidString_ = "023A";
        break;
    case HexPid::h023B:
        pidString_ = "023B";
        break;
    case HexPid::h023C:
        pidString_ = "023C";
        break;
    case HexPid::h023D:
        pidString_ = "023D";
        break;
    case HexPid::h023E:
        pidString_ = "023E";
        break;
    case HexPid::h023F:
        pidString_ = "023F";
        break;
    case HexPid::h0240:
        pidString_ = "0240";
        break;
    case HexPid::h0241:
        pidString_ = "0241";
        break;
    case HexPid::h0242:
        pidString_ = "0242";
        break;
    case HexPid::h0243:
        pidString_ = "0243";
        break;
    case HexPid::h0244:
        pidString_ = "0244";
        break;
    case HexPid::h0245:
        pidString_ = "0245";
        break;
    case HexPid::h0246:
        pidString_ = "0246";
        break;
    case HexPid::h0247:
        pidString_ = "0247";
        break;
    case HexPid::h0248:
        pidString_ = "0248";
        break;
    case HexPid::h0249:
        pidString_ = "0249";
        break;
    case HexPid::h024A:
        pidString_ = "024A";
        break;
    case HexPid::h024B:
        pidString_ = "024B";
        break;
    case HexPid::h024C:
        pidString_ = "024C";
        break;
    case HexPid::h024D:
        pidString_ = "024D";
        break;
    case HexPid::h024E:
        pidString_ = "024E";
        break;
    case HexPid::h024F:
        pidString_ = "024F";
        break;
    case HexPid::h0250:
        pidString_ = "0250";
        break;
    case HexPid::h0251:
        pidString_ = "0251";
        break;
    case HexPid::h0252:
        pidString_ = "0252";
        break;
    case HexPid::h0253:
        pidString_ = "0253";
        break;
    case HexPid::h0254:
        pidString_ = "0254";
        break;
    case HexPid::h0255:
        pidString_ = "0255";
        break;
    case HexPid::h0256:
        pidString_ = "0256";
        break;
    case HexPid::h0257:
        pidString_ = "0257";
        break;
    case HexPid::h0258:
        pidString_ = "0258";
        break;
    case HexPid::h0259:
        pidString_ = "0259";
        break;
    case HexPid::h025A:
        pidString_ = "025A";
        break;
    case HexPid::h025B:
        pidString_ = "025B";
        break;
    case HexPid::h025C:
        pidString_ = "025C";
        break;
    case HexPid::h025D:
        pidString_ = "025D";
        break;
    case HexPid::h025E:
        pidString_ = "025E";
        break;
    case HexPid::h025F:
        pidString_ = "025F";
        break;
    case HexPid::h0260:
        pidString_ = "0260";
        break;
    case HexPid::h0261:
        pidString_ = "0261";
        break;
    case HexPid::h0262:
        pidString_ = "0262";
        break;
    case HexPid::h0263:
        pidString_ = "0263";
        break;
    case HexPid::h0264:
        pidString_ = "0264";
        break;
    case HexPid::h0265:
        pidString_ = "0265";
        break;
    case HexPid::h0266:
        pidString_ = "0266";
        break;
    case HexPid::h0267:
        pidString_ = "0267";
        break;
    case HexPid::h0268:
        pidString_ = "0268";
        break;
    case HexPid::h0269:
        pidString_ = "0269";
        break;
    case HexPid::h026A:
        pidString_ = "026A";
        break;
    case HexPid::h026B:
        pidString_ = "026B";
        break;
    case HexPid::h026C:
        pidString_ = "026C";
        break;
    case HexPid::h026D:
        pidString_ = "026D";
        break;
    case HexPid::h026E:
        pidString_ = "026E";
        break;
    case HexPid::h026F:
        pidString_ = "026F";
        break;
    case HexPid::h0270:
        pidString_ = "0270";
        break;
    case HexPid::h0271:
        pidString_ = "0271";
        break;
    case HexPid::h0272:
        pidString_ = "0272";
        break;
    case HexPid::h0273:
        pidString_ = "0273";
        break;
    case HexPid::h0274:
        pidString_ = "0274";
        break;
    case HexPid::h0275:
        pidString_ = "0275";
        break;
    case HexPid::h0276:
        pidString_ = "0276";
        break;
    case HexPid::h0277:
        pidString_ = "0277";
        break;
    case HexPid::h0278:
        pidString_ = "0278";
        break;
    case HexPid::h0279:
        pidString_ = "0279";
        break;
    case HexPid::h027A:
        pidString_ = "027A";
        break;
    case HexPid::h027B:
        pidString_ = "027B";
        break;
    case HexPid::h027C:
        pidString_ = "027C";
        break;
    case HexPid::h027D:
        pidString_ = "027D";
        break;
    case HexPid::h027E:
        pidString_ = "027E";
        break;
    case HexPid::h027F:
        pidString_ = "027F";
        break;
    case HexPid::h0280:
        pidString_ = "0280";
        break;
    case HexPid::h0281:
        pidString_ = "0281";
        break;
    case HexPid::h0282:
        pidString_ = "0282";
        break;
    case HexPid::h0283:
        pidString_ = "0283";
        break;
    case HexPid::h0284:
        pidString_ = "0284";
        break;
    case HexPid::h0285:
        pidString_ = "0285";
        break;
    case HexPid::h0286:
        pidString_ = "0286";
        break;
    case HexPid::h0287:
        pidString_ = "0287";
        break;
    case HexPid::h0288:
        pidString_ = "0288";
        break;
    case HexPid::h0289:
        pidString_ = "0289";
        break;
    case HexPid::h028A:
        pidString_ = "028A";
        break;
    case HexPid::h028B:
        pidString_ = "028B";
        break;
    case HexPid::h028C:
        pidString_ = "028C";
        break;
    case HexPid::h028D:
        pidString_ = "028D";
        break;
    case HexPid::h028E:
        pidString_ = "028E";
        break;
    case HexPid::h028F:
        pidString_ = "028F";
        break;
    case HexPid::h0290:
        pidString_ = "0290";
        break;
    case HexPid::h0291:
        pidString_ = "0291";
        break;
    case HexPid::h0292:
        pidString_ = "0292";
        break;
    case HexPid::h0293:
        pidString_ = "0293";
        break;
    case HexPid::h0294:
        pidString_ = "0294";
        break;
    case HexPid::h0295:
        pidString_ = "0295";
        break;
    case HexPid::h0296:
        pidString_ = "0296";
        break;
    case HexPid::h0297:
        pidString_ = "0297";
        break;
    case HexPid::h0298:
        pidString_ = "0298";
        break;
    case HexPid::h0299:
        pidString_ = "0299";
        break;
    case HexPid::h029A:
        pidString_ = "029A";
        break;
    case HexPid::h029B:
        pidString_ = "029B";
        break;
    case HexPid::h029C:
        pidString_ = "029C";
        break;
    case HexPid::h029D:
        pidString_ = "029D";
        break;
    case HexPid::h029E:
        pidString_ = "029E";
        break;
    case HexPid::h029F:
        pidString_ = "029F";
        break;
    case HexPid::h02A0:
        pidString_ = "02A0";
        break;
    case HexPid::h02A1:
        pidString_ = "02A1";
        break;
    case HexPid::h02A2:
        pidString_ = "02A2";
        break;
    case HexPid::h02A3:
        pidString_ = "02A3";
        break;
    case HexPid::h02A4:
        pidString_ = "02A4";
        break;
    case HexPid::h02A5:
        pidString_ = "02A5";
        break;
    case HexPid::h02A6:
        pidString_ = "02A6";
        break;
    case HexPid::h02C0:
        pidString_ = "02C0";
        break;
    case HexPid::h02C3:
        pidString_ = "02C3";
        break;
    case HexPid::h02C4:
        pidString_ = "02C4";
        break;
    case HexPid::h03:
        pidString_ = "03";
        break;
    case HexPid::h04:
        pidString_ = "04";
        break;
    case HexPid::h0900:
        pidString_ = "0900";
        break;
    case HexPid::h0901:
        pidString_ = "0901";
        break;
    case HexPid::h0902:
        pidString_ = "0902";
        break;
    case HexPid::h0903:
        pidString_ = "0903";
        break;
    case HexPid::h0904:
        pidString_ = "0904";
        break;
    case HexPid::h0905:
        pidString_ = "0905";
        break;
    case HexPid::h0906:
        pidString_ = "0906";
        break;
    case HexPid::h0907:
        pidString_ = "0907";
        break;
    case HexPid::h0908:
        pidString_ = "0908";
        break;
    case HexPid::h0909:
        pidString_ = "0909";
        break;
    case HexPid::h090A:
        pidString_ = "090A";
        break;
    case HexPid::h090B:
        pidString_ = "090B";
        break;
    default:
        throw ExceptionPid(ExceptionPidType::UnknownHexPid);
        break;
    }
    hexPid_ = pid;
}

std::string Pid::getPidString()
{
    return pidString_;
}

HexPid Pid::getHexPid()
{
    return hexPid_;
}

std::string Pid::getDataBytes()
{
}

void Pid::setDataBytes(std::string setDataBytes)
{
}

std::string Pid::getDescription()
{
    switch (hexPid_)
    {
    case HexPid::h0100:
        return "PIDs supported [01 - 20]";
        break;
    case HexPid::h0101:
        return "Monitor status since DTCs cleared. (Includes malfunction indicator lamp (MIL) status and number of DTCs.)";
        break;
    case HexPid::h0102:
        return "Freeze DTC";
        break;
    case HexPid::h0103:
        return "Fuel system status";
        break;
    case HexPid::h0104:
        return "Calculated engine load	";
        break;
    case HexPid::h0105:
        return "Engine coolant temperature	";
        break;
    case HexPid::h0106:
        return "Short term fuel trim-Bank 1";
        break;
    case HexPid::h0107:
        return "Long term fuel trim-Bank 1";
        break;
    case HexPid::h0108:
        return "Short term fuel trim-Bank 2";
        break;
    case HexPid::h0109:
        return "Long term fuel trim-Bank 2";
        break;
    case HexPid::h010A:
        return "Fuel pressure (gauge pressure)";
        break;
    case HexPid::h010B:
        return "Intake manifold absolute pressure";
        break;
    case HexPid::h010C:
        return "Engine speed";
        break;
    case HexPid::h010D:
        return "Vehicle speed";
        break;
    case HexPid::h010E:
        return "Timing advance";
        break;
    case HexPid::h010F:
        return "Intake air temperature";
        break;
    case HexPid::h0110:
        return "Mass air flow sensor (MAF) air flow rate";
        break;
    case HexPid::h0111:
        return "Throttle position";
        break;
    case HexPid::h0112:
        return "Commanded secondary air status";
        break;
    case HexPid::h0113:
        return "Oxygen sensors present (in 2 banks)";
        break;
    case HexPid::h0114:
        return "Oxygen Sensor 1";
        break;
    case HexPid::h0115:
        return "Oxygen Sensor 2";
        break;
    case HexPid::h0116:
        return "Oxygen Sensor 3";
        break;
    case HexPid::h0117:
        return "Oxygen Sensor 4";
        break;
    case HexPid::h0118:
        return "Oxygen Sensor 5";
        break;
    case HexPid::h0119:
        return "Oxygen Sensor 6";
        break;
    case HexPid::h011A:
        return "Oxygen Sensor 7";
        break;
    case HexPid::h011B:
        return "Oxygen Sensor 8";
        break;
    case HexPid::h011C:
        return "OBD standards this vehicle conforms to";
        break;
    case HexPid::h011D:
        return "Oxygen sensors present (in 4 banks)";
        break;
    case HexPid::h011E:
        return "Auxiliary input status";
        break;
    case HexPid::h011F:
        return "Run time since engine start";
        break;
    case HexPid::h0120:
        return "PIDs supported [21 - 40]";
        break;
    case HexPid::h0121:
        return "Distance traveled with malfunction indicator lamp (MIL) on";
        break;
    case HexPid::h0122:
        return "Fuel Rail Pressure (relative to manifold vacuum)";
        break;
    case HexPid::h0123:
        return "Fuel Rail Gauge Pressure (diesel, or gasoline direct injection)";
        break;
    case HexPid::h0124:
        return "Oxygen Sensor 1";
        break;
    case HexPid::h0125:
        return "Oxygen Sensor 2";
        break;
    case HexPid::h0126:
        return "Oxygen Sensor 3";
        break;
    case HexPid::h0127:
        return "Oxygen Sensor 4";
        break;
    case HexPid::h0128:
        return "Oxygen Sensor 5";
        break;
    case HexPid::h0129:
        return "Oxygen Sensor 6";
        break;
    case HexPid::h012A:
        return "Oxygen Sensor 7";
        break;
    case HexPid::h012B:
        return "Oxygen Sensor 8";
        break;
    case HexPid::h012C:
        return "Commanded EGR";
        break;
    case HexPid::h012D:
        return "EGR Error";
        break;
    case HexPid::h012E:
        return "Commanded evaporative purge";
        break;
    case HexPid::h012F:
        return "Fuel Tank Level Input";
        break;
    case HexPid::h0130:
        return "Warm-ups since codes cleared";
        break;
    case HexPid::h0131:
        return "Distance traveled since codes cleared";
        break;
    case HexPid::h0132:
        return "Evap. System Vapor Pressure	";
        break;
    case HexPid::h0133:
        return "Absolute Barometric Pressure";
        break;
    case HexPid::h0134:
        return "Oxygen Sensor 1";
        break;
    case HexPid::h0135:
        return "Oxygen Sensor 2";
        break;
    case HexPid::h0136:
        return "Oxygen Sensor 3";
        break;
    case HexPid::h0137:
        return "Oxygen Sensor 4";
        break;
    case HexPid::h0138:
        return "Oxygen Sensor 5";
        break;
    case HexPid::h0139:
        return "Oxygen Sensor 6";
        break;
    case HexPid::h013A:
        return "Oxygen Sensor 7";
        break;
    case HexPid::h013B:
        return "Oxygen Sensor 8";
        break;
    case HexPid::h013C:
        return "Catalyst Temperature: Bank 1, Sensor 1";
        break;
    case HexPid::h013D:
        return "Catalyst Temperature: Bank 2, Sensor 1";
        break;
    case HexPid::h013E:
        return "Catalyst Temperature: Bank 1, Sensor 2";
        break;
    case HexPid::h013F:
        return "Catalyst Temperature: Bank 2, Sensor 2";
        break;
    case HexPid::h0140:
        return "PIDs supported [41 - 60]";
        break;
    case HexPid::h0141:
        return "Monitor status this drive cycle";
        break;
    case HexPid::h0142:
        return "Control module voltage";
        break;
    case HexPid::h0143:
        return "Absolute load value	";
        break;
    case HexPid::h0144:
        return "Commanded Air-Fuel Equivalence Ratio";
        break;
    case HexPid::h0145:
        return "Relative throttle position";
        break;
    case HexPid::h0146:
        return "Ambient air temperature";
        break;
    case HexPid::h0147:
        return "Absolute throttle position B";
        break;
    case HexPid::h0148:
        return "Absolute throttle position C";
        break;
    case HexPid::h0149:
        return "Accelerator pedal position D";
        break;
    case HexPid::h014A:
        return "Accelerator pedal position E";
        break;
    case HexPid::h014B:
        return "Accelerator pedal position F";
        break;
    case HexPid::h014C:
        return "Commanded throttle actuator";
        break;
    case HexPid::h014D:
        return "Time run with MIL on";
        break;
    case HexPid::h014E:
        return "Time since trouble codes cleared";
        break;
    case HexPid::h014F:
        return "Maximum value for Fuel–Air equivalence ratio, oxygen sensor voltage, oxygen sensor current, and intake manifold absolute pressure";
        break;
    case HexPid::h0150:
        return "Maximum value for air flow rate from mass air flow sensor";
        break;
    case HexPid::h0151:
        return "Fuel Type";
        break;
    case HexPid::h0152:
        return "Ethanol fuel %";
        break;
    case HexPid::h0153:
        return "Absolute Evap system Vapor Pressure";
        break;
    case HexPid::h0154:
        return "Evap system vapor pressure";
        break;
    case HexPid::h0155:
        return "Short term secondary oxygen sensor trim , Bank 1 - Bank 3";
        break;
    case HexPid::h0156:
        return "Long term secondary oxygen sensor trim, Bank 1 - Bank 3";
        break;
    case HexPid::h0157:
        return "Short term secondary oxygen sensor trim , Bank 2 - Bank 4";
        break;
    case HexPid::h0158:
        return "Long term secondary oxygen sensor trim , Bank 2 - Bank 4";
        break;
    case HexPid::h0159:
        return "Fuel rail absolute pressure";
        break;
    case HexPid::h015A:
        return "Relative accelerator pedal position";
        break;
    case HexPid::h015B:
        return "Hybrid battery pack remaining life";
        break;
    case HexPid::h015C:
        return "Engine oil temperature";
        break;
    case HexPid::h015D:
        return "Fuel injection timing";
        break;
    case HexPid::h015E:
        return "Engine fuel rate";
        break;
    case HexPid::h015F:
        return "Emission requirements to which vehicle is designed";
        break;
    case HexPid::h0160:
        return "PIDs supported [61 - 80]";
        break;
    case HexPid::h0161:
        return "Driver's demand engine - percent torque	";
        break;
    case HexPid::h0162:
        return "Actual engine - percent torque";
        break;
    case HexPid::h0163:
        return "Engine reference torque";
        break;
    case HexPid::h0164:
        return "Engine percent torque data";
        break;
    case HexPid::h0165:
        return "Auxiliary input / output supported";
        break;
    case HexPid::h0166:
        return "Mass air flow sensor";
        break;
    case HexPid::h0167:
        return "Engine coolant temperature";
        break;
    case HexPid::h0168:
        return "Intake air temperature sensor";
        break;
    case HexPid::h0169:
        return "Commanded EGR and EGR Error";
        break;
    case HexPid::h016A:
        return "Commanded Diesel intake air flow control and relative intake air flow position";
        break;
    case HexPid::h016B:
        return "Exhaust gas recirculation temperature";
        break;
    case HexPid::h016C:
        return "Commanded throttle actuator control and relative throttle position";
        break;
    case HexPid::h016D:
        return "Fuel pressure control system";
        break;
    case HexPid::h016E:
        return "Injection pressure control system";
        break;
    case HexPid::h016F:
        return "Turbocharger compressor inlet pressure";
        break;
    case HexPid::h0170:
        return "Boost pressure control";
        break;
    case HexPid::h0171:
        return "Variable Geometry turbo (VGT) control";
        break;
    case HexPid::h0172:
        return "Wastegate control";
        break;
    case HexPid::h0173:
        return "Exhaust pressure";
        break;
    case HexPid::h0174:
        return "Turbocharger RPM";
        break;
    case HexPid::h0175:
        return "Turbocharger temperature";
        break;
    case HexPid::h0176:
        return "Turbocharger temperature";
        break;
    case HexPid::h0177:
        return "Charge air cooler temperature (CACT)";
        break;
    case HexPid::h0178:
        return "Exhaust Gas temperature (EGT) Bank 1";
        break;
    case HexPid::h0179:
        return "Exhaust Gas temperature (EGT) Bank 2";
        break;
    case HexPid::h017A:
        return "Diesel particulate filter (DPF)";
        break;
    case HexPid::h017B:
        return "Diesel particulate filter (DPF)";
        break;
    case HexPid::h017C:
        return "Diesel Particulate filter (DPF) temperature";
        break;
    case HexPid::h017D:
        return "NOx NTE (Not-To-Exceed) control area status";
        break;
    case HexPid::h017E:
        return "PM NTE (Not-To-Exceed) control area status";
        break;
    case HexPid::h017F:
        return "Engine run time";
        break;
    case HexPid::h0180:
        return "PIDs supported [81 - A0]";
        break;
    case HexPid::h0181:
        return "Engine run time for Auxiliary Emissions Control Device(AECD)";
        break;
    case HexPid::h0182:
        return "Engine run time for Auxiliary Emissions Control Device(AECD)";
        break;
    case HexPid::h0183:
        return "NOx sensor";
        break;
    case HexPid::h0184:
        return "Manifold surface temperature";
        break;
    case HexPid::h0185:
        return "NOx reagent system";
        break;
    case HexPid::h0186:
        return "Particulate matter (PM) sensor";
        break;
    case HexPid::h0187:
        return "Intake manifold absolute pressure";
        break;
    case HexPid::h0188:
        return "SCR Induce System";
        break;
    case HexPid::h0189:
        return "Run Time for AECD #11-#15";
        break;
    case HexPid::h018A:
        return "Run Time for AECD #16-#20";
        break;
    case HexPid::h018B:
        return "Diesel Aftertreatment";
        break;
    case HexPid::h018C:
        return "O2 Sensor (Wide Range)";
        break;
    case HexPid::h018D:
        return "Throttle Position G";
        break;
    case HexPid::h018E:
        return "Engine Friction - Percent Torque";
        break;
    case HexPid::h018F:
        return "PM Sensor Bank 1 & 2";
        break;
    case HexPid::h0190:
        return "WWH-OBD Vehicle OBD System Information";
        break;
    case HexPid::h0191:
        return "WWH-OBD Vehicle OBD System Information";
        break;
    case HexPid::h0192:
        return "Fuel System Control";
        break;
    case HexPid::h0193:
        return "WWH-OBD Vehicle OBD Counters support";
        break;
    case HexPid::h0194:
        return "NOx Warning And Inducement System";
        break;
    case HexPid::h0195:
        throw ExceptionPid(ExceptionPidType::NoDescription);
        break;
    case HexPid::h0196:
        throw ExceptionPid(ExceptionPidType::NoDescription);
        break;
    case HexPid::h0197:
        throw ExceptionPid(ExceptionPidType::NoDescription);
        break;
    case HexPid::h0198:
        return "Exhaust Gas Temperature Sensor";
        break;
    case HexPid::h0199:
        return "Exhaust Gas Temperature Sensor";
        break;
    case HexPid::h019A:
        return "Hybrid/EV Vehicle System Data, Battery, Voltage";
        break;
    case HexPid::h019B:
        return "Diesel Exhaust Fluid Sensor Data";
        break;
    case HexPid::h019C:
        return "O2 Sensor Data";
        break;
    case HexPid::h019D:
        return "Engine Fuel Rate";
        break;
    case HexPid::h019E:
        return "Engine Exhaust Flow Rate";
        break;
    case HexPid::h019F:
        return "Fuel System Percentage Use";
        break;
    case HexPid::h01A0:
        return "PIDs supported [A1 - C0]";
        break;
    case HexPid::h01A1:
        return "NOx Sensor Corrected Data";
        break;
    case HexPid::h01A2:
        return "Cylinder Fuel Rate";
        break;
    case HexPid::h01A3:
        return "Evap System Vapor Pressure";
        break;
    case HexPid::h01A4:
        return "Transmission Actual Gear";
        break;
    case HexPid::h01A5:
        return "Diesel Exhaust Fluid Dosing	";
        break;
    case HexPid::h01A6:
        return "Odometer";
        break;
    case HexPid::h01C0:
        return "PIDs supported [C1 - E0]";
        break;
    case HexPid::h01C3:
        throw ExceptionPid(ExceptionPidType::NoDescription);
        break;
    case HexPid::h01C4:
        throw ExceptionPid(ExceptionPidType::NoDescription);
        break;
    case HexPid::h0200:
        return "PIDs supported [01 - 20]";
        break;
    case HexPid::h0201:
        return "Monitor status since DTCs cleared. (Includes malfunction indicator lamp (MIL) status and number of DTCs.)";
        break;
    case HexPid::h0202:
        return "Freeze DTC";
        break;
    case HexPid::h0203:
        return "DTC:Fuel system status";
        break;
    case HexPid::h0204:
        return "DTC:Calculated engine load	";
        break;
    case HexPid::h0205:
        return "DTC:Engine coolant temperature	";
        break;
    case HexPid::h0206:
        return "DTC:Short term fuel trim-Bank 1";
        break;
    case HexPid::h0207:
        return "DTC:Long term fuel trim-Bank 1";
        break;
    case HexPid::h0208:
        return "DTC:Short term fuel trim-Bank 2";
        break;
    case HexPid::h0209:
        return "DTC:Long term fuel trim-Bank 2";
        break;
    case HexPid::h020A:
        return "DTC:Fuel pressure (gauge pressure)";
        break;
    case HexPid::h020B:
        return "DTC:Intake manifold absolute pressure";
        break;
    case HexPid::h020C:
        return "DTC:Engine speed";
        break;
    case HexPid::h020D:
        return "DTC:Vehicle speed";
        break;
    case HexPid::h020E:
        return "DTC:Timing advance";
        break;
    case HexPid::h020F:
        return "DTC:Intake air temperature";
        break;
    case HexPid::h0210:
        return "DTC:Mass air flow sensor (MAF) air flow rate";
        break;
    case HexPid::h0211:
        return "DTC:Throttle position";
        break;
    case HexPid::h0212:
        return "DTC:Commanded secondary air status";
        break;
    case HexPid::h0213:
        return "DTC:Oxygen sensors present (in 2 banks)";
        break;
    case HexPid::h0214:
        return "DTC:Oxygen Sensor 1";
        break;
    case HexPid::h0215:
        return "DTC:Oxygen Sensor 2";
        break;
    case HexPid::h0216:
        return "DTC:Oxygen Sensor 3";
        break;
    case HexPid::h0217:
        return "DTC:Oxygen Sensor 4";
        break;
    case HexPid::h0218:
        return "DTC:Oxygen Sensor 5";
        break;
    case HexPid::h0219:
        return "DTC:Oxygen Sensor 6";
        break;
    case HexPid::h021A:
        return "DTC:Oxygen Sensor 7";
        break;
    case HexPid::h021B:
        return "DTC:Oxygen Sensor 8";
        break;
    case HexPid::h021C:
        return "DTC:OBD standards this vehicle conforms to";
        break;
    case HexPid::h021D:
        return "DTC:Oxygen sensors present (in 4 banks)";
        break;
    case HexPid::h021E:
        return "DTC:Auxiliary input status";
        break;
    case HexPid::h021F:
        return "DTC:Run time since engine start";
        break;
    case HexPid::h0220:
        return "DTC:PIDs supported [21 - 40]";
        break;
    case HexPid::h0221:
        return "DTC:Distance traveled with malfunction indicator lamp (MIL) on";
        break;
    case HexPid::h0222:
        return "DTC:Fuel Rail Pressure (relative to manifold vacuum)";
        break;
    case HexPid::h0223:
        return "DTC:Fuel Rail Gauge Pressure (diesel, or gasoline direct injection)";
        break;
    case HexPid::h0224:
        return "DTC:Oxygen Sensor 1";
        break;
    case HexPid::h0225:
        return "DTC:Oxygen Sensor 2";
        break;
    case HexPid::h0226:
        return "DTC:Oxygen Sensor 3";
        break;
    case HexPid::h0227:
        return "DTC:Oxygen Sensor 4";
        break;
    case HexPid::h0228:
        return "DTC:Oxygen Sensor 5";
        break;
    case HexPid::h0229:
        return "DTC:Oxygen Sensor 6";
        break;
    case HexPid::h022A:
        return "DTC:Oxygen Sensor 7";
        break;
    case HexPid::h022B:
        return "DTC:Oxygen Sensor 8";
        break;
    case HexPid::h022C:
        return "DTC:Commanded EGR";
        break;
    case HexPid::h022D:
        return "DTC:EGR Error";
        break;
    case HexPid::h022E:
        return "DTC:Commanded evaporative purge";
        break;
    case HexPid::h022F:
        return "DTC:Fuel Tank Level Input";
        break;
    case HexPid::h0230:
        return "DTC:Warm-ups since codes cleared";
        break;
    case HexPid::h0231:
        return "DTC:Distance traveled since codes cleared";
        break;
    case HexPid::h0232:
        return "DTC:Evap. System Vapor Pressure	";
        break;
    case HexPid::h0233:
        return "DTC:Absolute Barometric Pressure";
        break;
    case HexPid::h0234:
        return "DTC:Oxygen Sensor 1";
        break;
    case HexPid::h0235:
        return "DTC:Oxygen Sensor 2";
        break;
    case HexPid::h0236:
        return "DTC:Oxygen Sensor 3";
        break;
    case HexPid::h0237:
        return "DTC:Oxygen Sensor 4";
        break;
    case HexPid::h0238:
        return "DTC:Oxygen Sensor 5";
        break;
    case HexPid::h0239:
        return "DTC:Oxygen Sensor 6";
        break;
    case HexPid::h023A:
        return "DTC:Oxygen Sensor 7";
        break;
    case HexPid::h023B:
        return "DTC:Oxygen Sensor 8";
        break;
    case HexPid::h023C:
        return "DTC:Catalyst Temperature: Bank 1, Sensor 1";
        break;
    case HexPid::h023D:
        return "DTC:Catalyst Temperature: Bank 2, Sensor 1";
        break;
    case HexPid::h023E:
        return "DTC:Catalyst Temperature: Bank 1, Sensor 2";
        break;
    case HexPid::h023F:
        return "DTC:Catalyst Temperature: Bank 2, Sensor 2";
        break;
    case HexPid::h0240:
        return "DTC:PIDs supported [41 - 60]";
        break;
    case HexPid::h0241:
        return "DTC:Monitor status this drive cycle";
        break;
    case HexPid::h0242:
        return "DTC:Control module voltage";
        break;
    case HexPid::h0243:
        return "DTC:Absolute load value	";
        break;
    case HexPid::h0244:
        return "DTC:Commanded Air-Fuel Equivalence Ratio";
        break;
    case HexPid::h0245:
        return "DTC:Relative throttle position";
        break;
    case HexPid::h0246:
        return "DTC:Ambient air temperature";
        break;
    case HexPid::h0247:
        return "DTC:Absolute throttle position B";
        break;
    case HexPid::h0248:
        return "DTC:Absolute throttle position C";
        break;
    case HexPid::h0249:
        return "DTC:Accelerator pedal position D";
        break;
    case HexPid::h024A:
        return "DTC:Accelerator pedal position E";
        break;
    case HexPid::h024B:
        return "DTC:Accelerator pedal position F";
        break;
    case HexPid::h024C:
        return "DTC:Commanded throttle actuator";
        break;
    case HexPid::h024D:
        return "DTC:Time run with MIL on";
        break;
    case HexPid::h024E:
        return "DTC:Time since trouble codes cleared";
        break;
    case HexPid::h024F:
        return "DTC:Maximum value for Fuel–Air equivalence ratio, oxygen sensor voltage, oxygen sensor current, and intake manifold absolute pressure";
        break;
    case HexPid::h0250:
        return "DTC:Maximum value for air flow rate from mass air flow sensor";
        break;
    case HexPid::h0251:
        return "DTC:Fuel Type";
        break;
    case HexPid::h0252:
        return "DTC:Ethanol fuel %";
        break;
    case HexPid::h0253:
        return "DTC:Absolute Evap system Vapor Pressure";
        break;
    case HexPid::h0254:
        return "DTC:Evap system vapor pressure";
        break;
    case HexPid::h0255:
        return "DTC:Short term secondary oxygen sensor trim , Bank 1 - Bank 3";
        break;
    case HexPid::h0256:
        return "DTC:Long term secondary oxygen sensor trim, Bank 1 - Bank 3";
        break;
    case HexPid::h0257:
        return "DTC:Short term secondary oxygen sensor trim , Bank 2 - Bank 4";
        break;
    case HexPid::h0258:
        return "DTC:Long term secondary oxygen sensor trim , Bank 2 - Bank 4";
        break;
    case HexPid::h0259:
        return "DTC:Fuel rail absolute pressure";
        break;
    case HexPid::h025A:
        return "DTC:Relative accelerator pedal position";
        break;
    case HexPid::h025B:
        return "DTC:Hybrid battery pack remaining life";
        break;
    case HexPid::h025C:
        return "DTC:Engine oil temperature";
        break;
    case HexPid::h025D:
        return "DTC:Fuel injection timing";
        break;
    case HexPid::h025E:
        return "DTC:Engine fuel rate";
        break;
    case HexPid::h025F:
        return "DTC:Emission requirements to which vehicle is designed";
        break;
    case HexPid::h0260:
        return "DTC:PIDs supported [61 - 80]";
        break;
    case HexPid::h0261:
        return "DTC:Driver's demand engine - percent torque	";
        break;
    case HexPid::h0262:
        return "DTC:Actual engine - percent torque";
        break;
    case HexPid::h0263:
        return "DTC:Engine reference torque";
        break;
    case HexPid::h0264:
        return "DTC:Engine percent torque data";
        break;
    case HexPid::h0265:
        return "DTC:Auxiliary input / output supported";
        break;
    case HexPid::h0266:
        return "DTC:Mass air flow sensor";
        break;
    case HexPid::h0267:
        return "DTC:Engine coolant temperature";
        break;
    case HexPid::h0268:
        return "DTC:Intake air temperature sensor";
        break;
    case HexPid::h0269:
        return "DTC:Commanded EGR and EGR Error";
        break;
    case HexPid::h026A:
        return "DTC:Commanded Diesel intake air flow control and relative intake air flow position";
        break;
    case HexPid::h026B:
        return "DTC:Exhaust gas recirculation temperature";
        break;
    case HexPid::h026C:
        return "DTC:Commanded throttle actuator control and relative throttle position";
        break;
    case HexPid::h026D:
        return "DTC:Fuel pressure control system";
        break;
    case HexPid::h026E:
        return "DTC:Injection pressure control system";
        break;
    case HexPid::h026F:
        return "DTC:Turbocharger compressor inlet pressure";
        break;
    case HexPid::h0270:
        return "DTC:Boost pressure control";
        break;
    case HexPid::h0271:
        return "DTC:Variable Geometry turbo (VGT) control";
        break;
    case HexPid::h0272:
        return "DTC:Wastegate control";
        break;
    case HexPid::h0273:
        return "DTC:Exhaust pressure";
        break;
    case HexPid::h0274:
        return "DTC:Turbocharger RPM";
        break;
    case HexPid::h0275:
        return "DTC:Turbocharger temperature";
        break;
    case HexPid::h0276:
        return "DTC:Turbocharger temperature";
        break;
    case HexPid::h0277:
        return "DTC:Charge air cooler temperature (CACT)";
        break;
    case HexPid::h0278:
        return "DTC:Exhaust Gas temperature (EGT) Bank 1";
        break;
    case HexPid::h0279:
        return "DTC:Exhaust Gas temperature (EGT) Bank 2";
        break;
    case HexPid::h027A:
        return "DTC:Diesel particulate filter (DPF)";
        break;
    case HexPid::h027B:
        return "DTC:Diesel particulate filter (DPF)";
        break;
    case HexPid::h027C:
        return "DTC:Diesel Particulate filter (DPF) temperature";
        break;
    case HexPid::h027D:
        return "DTC:NOx NTE (Not-To-Exceed) control area status";
        break;
    case HexPid::h027E:
        return "DTC:PM NTE (Not-To-Exceed) control area status";
        break;
    case HexPid::h027F:
        return "DTC:Engine run time";
        break;
    case HexPid::h0280:
        return "DTC:PIDs supported [81 - A0]";
        break;
    case HexPid::h0281:
        return "DTC:Engine run time for Auxiliary Emissions Control Device(AECD)";
        break;
    case HexPid::h0282:
        return "DTC:Engine run time for Auxiliary Emissions Control Device(AECD)";
        break;
    case HexPid::h0283:
        return "DTC:NOx sensor";
        break;
    case HexPid::h0284:
        return "DTC:Manifold surface temperature";
        break;
    case HexPid::h0285:
        return "DTC:NOx reagent system";
        break;
    case HexPid::h0286:
        return "DTC:Particulate matter (PM) sensor";
        break;
    case HexPid::h0287:
        return "DTC:Intake manifold absolute pressure";
        break;
    case HexPid::h0288:
        return "DTC:SCR Induce System";
        break;
    case HexPid::h0289:
        return "DTC:Run Time for AECD #11-#15";
        break;
    case HexPid::h028A:
        return "DTC:Run Time for AECD #16-#20";
        break;
    case HexPid::h028B:
        return "DTC:Diesel Aftertreatment";
        break;
    case HexPid::h028C:
        return "DTC:O2 Sensor (Wide Range)";
        break;
    case HexPid::h028D:
        return "DTC:Throttle Position G";
        break;
    case HexPid::h028E:
        return "DTC:Engine Friction - Percent Torque";
        break;
    case HexPid::h028F:
        return "DTC:PM Sensor Bank 1 & 2";
        break;
    case HexPid::h0290:
        return "DTC:WWH-OBD Vehicle OBD System Information";
        break;
    case HexPid::h0291:
        return "DTC:WWH-OBD Vehicle OBD System Information";
        break;
    case HexPid::h0292:
        return "DTC:Fuel System Control";
        break;
    case HexPid::h0293:
        return "DTC:WWH-OBD Vehicle OBD Counters support";
        break;
    case HexPid::h0294:
        return "DTC:NOx Warning And Inducement System";
        break;
    case HexPid::h0295:
        throw ExceptionPid(ExceptionPidType::NoDescription);
        break;
    case HexPid::h0296:
        throw ExceptionPid(ExceptionPidType::NoDescription);
        break;
    case HexPid::h0297:
        throw ExceptionPid(ExceptionPidType::NoDescription);
        break;
    case HexPid::h0298:
        return "DTC:Exhaust Gas Temperature Sensor";
        break;
    case HexPid::h0299:
        return "DTC:Exhaust Gas Temperature Sensor";
        break;
    case HexPid::h029A:
        return "DTC:Hybrid/EV Vehicle System Data, Battery, Voltage";
        break;
    case HexPid::h029B:
        return "DTC:Diesel Exhaust Fluid Sensor Data";
        break;
    case HexPid::h029C:
        return "DTC:O2 Sensor Data";
        break;
    case HexPid::h029D:
        return "DTC:Engine Fuel Rate";
        break;
    case HexPid::h029E:
        return "DTC:Engine Exhaust Flow Rate";
        break;
    case HexPid::h029F:
        return "DTC:Fuel System Percentage Use";
        break;
    case HexPid::h02A0:
        return "DTC:PIDs supported [A1 - C0]";
        break;
    case HexPid::h02A1:
        return "DTC:NOx Sensor Corrected Data";
        break;
    case HexPid::h02A2:
        return "DTC:Cylinder Fuel Rate";
        break;
    case HexPid::h02A3:
        return "DTC:Evap System Vapor Pressure";
        break;
    case HexPid::h02A4:
        return "DTC:Transmission Actual Gear";
        break;
    case HexPid::h02A5:
        return "DTC:Diesel Exhaust Fluid Dosing	";
        break;
    case HexPid::h02A6:
        return "DTC:Odometer";
        break;
    case HexPid::h02C0:
        return "DTC:PIDs supported [C1 - E0]";
        break;
    case HexPid::h02C3:
        throw ExceptionPid(ExceptionPidType::NoDescription);
        break;
    case HexPid::h02C4:
        throw ExceptionPid(ExceptionPidType::NoDescription);
        break;
    case HexPid::h03:
        return "Request trouble codes";
        break;
    case HexPid::h04:
        return "Clear trouble codes / Malfunction indicator lamp (MIL) / Check engine light";
        break;
    case HexPid::h0900:
        return "Service 9 supported PIDs (01 to 20)";
        break;
    case HexPid::h0901:
        return "VIN Message Count in PID 02. Only for ISO 9141-2, ISO 14230-4 and SAE J1850.";
        break;
    case HexPid::h0902:
        return "Vehicle Identification Number (VIN)";
        break;
    case HexPid::h0903:
        return "Calibration ID message count for PID 04. Only for ISO 9141-2, ISO 14230-4 and SAE J1850.";
        break;
    case HexPid::h0904:
        return "Calibration ID";
        break;
    case HexPid::h0905:
        return "Calibration verification numbers (CVN) message count for PID 06. Only for ISO 9141-2, ISO 14230-4 and SAE J1850.";
        break;
    case HexPid::h0906:
        return "Calibration Verification Numbers (CVN) Several CVN can be output (4 bytes each) the number of CVN and CALID must match";
        break;
    case HexPid::h0907:
        return "In-use performance tracking message count for PID 08 and 0B. Only for ISO 9141-2, ISO 14230-4 and SAE J1850.";
        break;
    case HexPid::h0908:
        return "In-use performance tracking for spark ignition vehicles";
        break;
    case HexPid::h0909:
        return "ECU name message count for PID 0A";
        break;
    case HexPid::h090A:
        return "ECU name";
        break;
    case HexPid::h090B:
        return "In-use performance tracking for compression ignition vehicles";
        break;
    default:
        throw std::runtime_error("unknown HexPid");
        break;
    }
}

std::string Pid::getUnits()
{
    switch (hexPid_)
    {
    case HexPid::h0100:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0101:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0102:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0103:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0104:
        return "%";
        break;
    case HexPid::h0105:
        return "Celsius degree";
        break;
    case HexPid::h0106:
        return "%";
        break;
    case HexPid::h0107:
        return "%";
        break;
    case HexPid::h0108:
        return "%";
        break;
    case HexPid::h0109:
        return "%";
        break;
    case HexPid::h010A:
        return "kPa";
        break;
    case HexPid::h010B:
        return "kPa";
        break;
    case HexPid::h010C:
        return "rpm";
        break;
    case HexPid::h010D:
        return "km/h";
        break;
    case HexPid::h010E:
        return "Celsius degree before TDC";
        break;
    case HexPid::h010F:
        return "Celsius degree";
        break;
    case HexPid::h0110:
        return "grams/sec";
        break;
    case HexPid::h0111:
        return "%";
        break;
    case HexPid::h0112:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0113:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0114:
        return "Volts - %";
        break;
    case HexPid::h0115:
        return "Volts - %";
        break;
    case HexPid::h0116:
        return "Volts - %";
        break;
    case HexPid::h0117:
        return "Volts - %";
        break;
    case HexPid::h0118:
        return "Volts - %";
        break;
    case HexPid::h0119:
        return "Volts - %";
        break;
    case HexPid::h011A:
        return "Volts - %";
        break;
    case HexPid::h011B:
        return "Volts - %";
        break;
    case HexPid::h011C:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h011D:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h011E:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h011F:
        return "seconds";
        break;
    case HexPid::h0120:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0121:
        return "km";
        break;
    case HexPid::h0122:
        return "kPa";
        break;
    case HexPid::h0123:
        return "kPa";
        break;
    case HexPid::h0124:
        return "ratio - v";
        break;
    case HexPid::h0125:
        return "ratio - v";
        break;
    case HexPid::h0126:
        return "ratio - v";
        break;
    case HexPid::h0127:
        return "ratio - v";
        break;
    case HexPid::h0128:
        return "ratio - v";
        break;
    case HexPid::h0129:
        return "ratio - v";
        break;
    case HexPid::h012A:
        return "ratio - v";
        break;
    case HexPid::h012B:
        return "ratio - v";
        break;
    case HexPid::h012C:
        return "%";
        break;
    case HexPid::h012D:
        return "%";
        break;
    case HexPid::h012E:
        return "%";
        break;
    case HexPid::h012F:
        return "%";
        break;
    case HexPid::h0130:
        return "count";
        break;
    case HexPid::h0131:
        return "km";
        break;
    case HexPid::h0132:
        return "Pa";
        break;
    case HexPid::h0133:
        return "kPa";
        break;
    case HexPid::h0134:
        return "ratio - mA";
        break;
    case HexPid::h0135:
        return "ratio - mA";
        break;
    case HexPid::h0136:
        return "ratio - mA";
        break;
    case HexPid::h0137:
        return "ratio - mA";
        break;
    case HexPid::h0138:
        return "ratio - mA";
        break;
    case HexPid::h0139:
        return "ratio - mA";
        break;
    case HexPid::h013A:
        return "ratio - mA";
        break;
    case HexPid::h013B:
        return "ratio - mA";
        break;
    case HexPid::h013C:
        return "Celsius degree";
        break;
    case HexPid::h013D:
        return "Celsius degree";
        break;
    case HexPid::h013E:
        return "Celsius degree";
        break;
    case HexPid::h013F:
        return "Celsius degree";
        break;
    case HexPid::h0140:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0141:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0142:
        return "Volts";
        break;
    case HexPid::h0143:
        return "%";
        break;
    case HexPid::h0144:
        return "ratio";
        break;
    case HexPid::h0145:
        return "Celsius degree";
        break;
    case HexPid::h0146:
        return "%";
        break;
    case HexPid::h0147:
        return "%";
        break;
    case HexPid::h0148:
        return "%";
        break;
    case HexPid::h0149:
        return "%";
        break;
    case HexPid::h014A:
        return "%";
        break;
    case HexPid::h014B:
        return "%";
        break;
    case HexPid::h014C:
        return "%";
        break;
    case HexPid::h014D:
        return "minutes";
        break;
    case HexPid::h014E:
        return "minutes";
        break;
    case HexPid::h014F:
        return "ratio - V - mA - kPa";
        break;
    case HexPid::h0150:
        return "g/s";
        break;
    case HexPid::h0151:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0152:
        return "%";
        break;
    case HexPid::h0153:
        return "kPa";
        break;
    case HexPid::h0154:
        return "Pa";
        break;
    case HexPid::h0155:
        return "%";
        break;
    case HexPid::h0156:
        return "%";
        break;
    case HexPid::h0157:
        return "%";
        break;
    case HexPid::h0158:
        return "%";
        break;
    case HexPid::h0159:
        return "kPa";
        break;
    case HexPid::h015A:
        return "%";
        break;
    case HexPid::h015B:
        return "%";
        break;
    case HexPid::h015C:
        return "Celsius degree";
        break;
    case HexPid::h015D:
        return "degree";
        break;
    case HexPid::h015E:
        return "L/h";
        break;
    case HexPid::h015F:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0160:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0161:
        return "%";
        break;
    case HexPid::h0162:
        return "%";
        break;
    case HexPid::h0163:
        return "Nm";
        break;
    case HexPid::h0164:
        return "%";
        break;
    case HexPid::h0165:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0166:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0167:
        return "Celsius degree";
        break;
    case HexPid::h0168:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0169:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h016A:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h016B:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h016C:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h016D:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h016E:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h016F:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0170:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0171:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0172:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0173:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0174:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0175:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0176:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0177:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0178:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0179:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h017A:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h017B:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h017C:
        return "Celsius degree";
        break;
    case HexPid::h017D:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h017E:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h017F:
        return "seconds";
        break;
    case HexPid::h0180:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0181:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0182:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0183:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0184:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0185:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0186:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0187:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0188:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0189:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h018A:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h018B:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h018C:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h018D:
        return "%";
        break;
    case HexPid::h018E:
        return "%";
        break;
    case HexPid::h018F:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0190:
        return "hours";
        break;
    case HexPid::h0191:
        return "hours";
        break;
    case HexPid::h0192:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0193:
        return "hours";
        break;
    case HexPid::h0194:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0195:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0196:
        throw ExceptionPid(ExceptionPidType:: NoUnits);
        break;
    case HexPid::h0197:
        throw ExceptionPid(ExceptionPidType:: NoUnits);
        break;
    case HexPid::h0198:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0199:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h019A:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h019B:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h019C:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h019D:
        return "g/s";
        break;
    case HexPid::h019E:
        return "kg/h";
        break;
    case HexPid::h019F:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h01A0:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h01A1:
        return "ppm";
        break;
    case HexPid::h01A2:
        return "mg/stroke";
        break;
    case HexPid::h01A3:
        return "Pa";
        break;
    case HexPid::h01A4:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h01A5:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h01A6:
        return "hm";
        break;
    case HexPid::h01C0:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h01C3:
        throw ExceptionPid(ExceptionPidType:: NoUnits);
        break;
    case HexPid::h01C4:
        throw ExceptionPid(ExceptionPidType:: NoUnits);
        break;
    case HexPid::h0200:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0201:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0202:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0203:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0204:
        return "%";
        break;
    case HexPid::h0205:
        return "Celsius degree";
        break;
    case HexPid::h0206:
        return "%";
        break;
    case HexPid::h0207:
        return "%";
        break;
    case HexPid::h0208:
        return "%";
        break;
    case HexPid::h0209:
        return "%";
        break;
    case HexPid::h020A:
        return "kPa";
        break;
    case HexPid::h020B:
        return "kPa";
        break;
    case HexPid::h020C:
        return "rpm";
        break;
    case HexPid::h020D:
        return "km/h";
        break;
    case HexPid::h020E:
        return "Celsius degree before TDC";
        break;
    case HexPid::h020F:
        return "Celsius degree";
        break;
    case HexPid::h0210:
        return "grams/sec";
        break;
    case HexPid::h0211:
        return "%";
        break;
    case HexPid::h0212:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0213:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0214:
        return "Volts - %";
        break;
    case HexPid::h0215:
        return "Volts - %";
        break;
    case HexPid::h0216:
        return "Volts - %";
        break;
    case HexPid::h0217:
        return "Volts - %";
        break;
    case HexPid::h0218:
        return "Volts - %";
        break;
    case HexPid::h0219:
        return "Volts - %";
        break;
    case HexPid::h021A:
        return "Volts - %";
        break;
    case HexPid::h021B:
        return "Volts - %";
        break;
    case HexPid::h021C:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h021D:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h021E:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h021F:
        return "seconds";
        break;
    case HexPid::h0220:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0221:
        return "km";
        break;
    case HexPid::h0222:
        return "kPa";
        break;
    case HexPid::h0223:
        return "kPa";
        break;
    case HexPid::h0224:
        return "ratio - v";
        break;
    case HexPid::h0225:
        return "ratio - v";
        break;
    case HexPid::h0226:
        return "ratio - v";
        break;
    case HexPid::h0227:
        return "ratio - v";
        break;
    case HexPid::h0228:
        return "ratio - v";
        break;
    case HexPid::h0229:
        return "ratio - v";
        break;
    case HexPid::h022A:
        return "ratio - v";
        break;
    case HexPid::h022B:
        return "ratio - v";
        break;
    case HexPid::h022C:
        return "%";
        break;
    case HexPid::h022D:
        return "%";
        break;
    case HexPid::h022E:
        return "%";
        break;
    case HexPid::h022F:
        return "%";
        break;
    case HexPid::h0230:
        return "count";
        break;
    case HexPid::h0231:
        return "km";
        break;
    case HexPid::h0232:
        return "Pa";
        break;
    case HexPid::h0233:
        return "kPa";
        break;
    case HexPid::h0234:
        return "ratio - mA";
        break;
    case HexPid::h0235:
        return "ratio - mA";
        break;
    case HexPid::h0236:
        return "ratio - mA";
        break;
    case HexPid::h0237:
        return "ratio - mA";
        break;
    case HexPid::h0238:
        return "ratio - mA";
        break;
    case HexPid::h0239:
        return "ratio - mA";
        break;
    case HexPid::h023A:
        return "ratio - mA";
        break;
    case HexPid::h023B:
        return "ratio - mA";
        break;
    case HexPid::h023C:
        return "Celsius degree";
        break;
    case HexPid::h023D:
        return "Celsius degree";
        break;
    case HexPid::h023E:
        return "Celsius degree";
        break;
    case HexPid::h023F:
        return "Celsius degree";
        break;
    case HexPid::h0240:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0241:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0242:
        return "Volts";
        break;
    case HexPid::h0243:
        return "%";
        break;
    case HexPid::h0244:
        return "ratio";
        break;
    case HexPid::h0245:
        return "Celsius degree";
        break;
    case HexPid::h0246:
        return "%";
        break;
    case HexPid::h0247:
        return "%";
        break;
    case HexPid::h0248:
        return "%";
        break;
    case HexPid::h0249:
        return "%";
        break;
    case HexPid::h024A:
        return "%";
        break;
    case HexPid::h024B:
        return "%";
        break;
    case HexPid::h024C:
        return "%";
        break;
    case HexPid::h024D:
        return "minutes";
        break;
    case HexPid::h024E:
        return "minutes";
        break;
    case HexPid::h024F:
        return "ratio - V - mA - kPa";
        break;
    case HexPid::h0250:
        return "g/s";
        break;
    case HexPid::h0251:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0252:
        return "%";
        break;
    case HexPid::h0253:
        return "kPa";
        break;
    case HexPid::h0254:
        return "Pa";
        break;
    case HexPid::h0255:
        return "%";
        break;
    case HexPid::h0256:
        return "%";
        break;
    case HexPid::h0257:
        return "%";
        break;
    case HexPid::h0258:
        return "%";
        break;
    case HexPid::h0259:
        return "kPa";
        break;
    case HexPid::h025A:
        return "%";
        break;
    case HexPid::h025B:
        return "%";
        break;
    case HexPid::h025C:
        return "Celsius degree";
        break;
    case HexPid::h025D:
        return "degree";
        break;
    case HexPid::h025E:
        return "L/h";
        break;
    case HexPid::h025F:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0260:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0261:
        return "%";
        break;
    case HexPid::h0262:
        return "%";
        break;
    case HexPid::h0263:
        return "Nm";
        break;
    case HexPid::h0264:
        return "%";
        break;
    case HexPid::h0265:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0266:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0267:
        return "Celsius degree";
        break;
    case HexPid::h0268:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0269:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h026A:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h026B:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h026C:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h026D:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h026E:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h026F:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0270:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0271:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0272:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0273:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0274:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0275:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0276:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0277:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0278:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0279:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h027A:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h027B:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h027C:
        return "Celsius degree";
        break;
    case HexPid::h027D:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h027E:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h027F:
        return "seconds";
        break;
    case HexPid::h0280:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0281:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0282:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0283:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0284:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0285:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0286:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0287:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0288:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0289:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h028A:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h028B:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h028C:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h028D:
        return "%";
        break;
    case HexPid::h028E:
        return "%";
        break;
    case HexPid::h028F:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0290:
        return "hours";
        break;
    case HexPid::h0291:
        return "hours";
        break;
    case HexPid::h0292:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0293:
        return "hours";
        break;
    case HexPid::h0294:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0295:
        throw ExceptionPid(ExceptionPidType:: NoUnits);
        break;
    case HexPid::h0296:
        throw ExceptionPid(ExceptionPidType:: NoUnits);
        break;
    case HexPid::h0297:
        throw ExceptionPid(ExceptionPidType:: NoUnits);
        break;
    case HexPid::h0298:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0299:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h029A:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h029B:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h029C:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h029D:
        return "g/s";
        break;
    case HexPid::h029E:
        return "kg/h";
        break;
    case HexPid::h029F:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h02A0:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h02A1:
        return "ppm";
        break;
    case HexPid::h02A2:
        return "mg/stroke";
        break;
    case HexPid::h02A3:
        return "Pa";
        break;
    case HexPid::h02A4:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h02A5:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h02A6:
        return "hm";
        break;
    case HexPid::h02C0:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h02C3:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h02C4:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h03:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h04:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0900:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0901:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0902:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0903:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0904:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0905:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0906:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0907:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0908:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h0909:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h090A:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    case HexPid::h090B:
        throw ExceptionPid(ExceptionPidType::NoUnits);
        break;
    default:
        throw std::runtime_error("unknown HexPid");
        break;
    }
}

unsigned int Pid::getNumberOfDataBytes()
{

    switch (hexPid_)
    {
    case HexPid::h0100:
        return 4;
        break;
    case HexPid::h0101:
        return   4;
        break;
    case HexPid::h0102:
        return   2;
        break;
    case HexPid::h0103:
        return   2;
        break;
    case HexPid::h0104:
        return   1;
        break;
    case HexPid::h0105:
        return   1;
        break;
    case HexPid::h0106:
        return   1;
        break;
    case HexPid::h0107:
        return   1;
        break;
    case HexPid::h0108:
        return   1;
        break;
    case HexPid::h0109:
        return   1;
        break;
    case HexPid::h010A:
        return   1;
        break;
    case HexPid::h010B:
        return   1;
        break;
    case HexPid::h010C:
        return   2;
        break;
    case HexPid::h010D:
        return   1;
        break;
    case HexPid::h010E:
        return   1;
        break;
    case HexPid::h010F:
        return   1;
        break;
    case HexPid::h0110:
        return   2;
        break;
    case HexPid::h0111:
        return   1;
        break;
    case HexPid::h0112:
        return   1;
        break;
    case HexPid::h0113:
        return   1;
        break;
    case HexPid::h0114:
        return   2;
        break;
    case HexPid::h0115:
        return   2;
        break;
    case HexPid::h0116:
        return   2;
        break;
    case HexPid::h0117:
        return   2;
        break;
    case HexPid::h0118:
        return   2;
        break;
    case HexPid::h0119:
        return   2;
        break;
    case HexPid::h011A:
        return   2;
        break;
    case HexPid::h011B:
        return   2;
        break;
    case HexPid::h011C:
        return   1;
        break;
    case HexPid::h011D:
        return   1;
        break;
    case HexPid::h011E:
        return   1;
        break;
    case HexPid::h011F:
        return   2;
        break;
    case HexPid::h0120:
        return   4;
        break;
    case HexPid::h0121:
        return   2;
        break;
    case HexPid::h0122:
        return   2;
        break;
    case HexPid::h0123:
        return   2;
        break;
    case HexPid::h0124:
        return   4;
        break;
    case HexPid::h0125:
        return   4;
        break;
    case HexPid::h0126:
        return   4;
        break;
    case HexPid::h0127:
        return   4;
        break;
    case HexPid::h0128:
        return   4;
        break;
    case HexPid::h0129:
        return   4;
        break;
    case HexPid::h012A:
        return   4;
        break;
    case HexPid::h012B:
        return   4;
        break;
    case HexPid::h012C:
        return   1;
        break;
    case HexPid::h012D:
        return   1;
        break;
    case HexPid::h012E:
        return   1;
        break;
    case HexPid::h012F:
        return   1;
        break;
    case HexPid::h0130:
        return   1;
        break;
    case HexPid::h0131:
        return   2;
        break;
    case HexPid::h0132:
        return   2;
        break;
    case HexPid::h0133:
        return   1;
        break;
    case HexPid::h0134:
        return   4;
        break;
    case HexPid::h0135:
        return   4;
        break;
    case HexPid::h0136:
        return   4;
        break;
    case HexPid::h0137:
        return   4;
        break;
    case HexPid::h0138:
        return   4;
        break;
    case HexPid::h0139:
        return   4;
        break;
    case HexPid::h013A:
        return   4;
        break;
    case HexPid::h013B:
        return   4;
        break;
    case HexPid::h013C:
        return   2;
        break;
    case HexPid::h013D:
        return   2;
        break;
    case HexPid::h013E:
        return   2;
        break;
    case HexPid::h013F:
        return   2;
        break;
    case HexPid::h0140:
        return   4;
        break;
    case HexPid::h0141:
        return   4;
        break;
    case HexPid::h0142:
        return   2;
        break;
    case HexPid::h0143:
        return   2;
        break;
    case HexPid::h0144:
        return   1;
        break;
    case HexPid::h0145:
        return   1;
        break;
    case HexPid::h0146:
        return   1;
        break;
    case HexPid::h0147:
        return   1;
        break;
    case HexPid::h0148:
        return   1;
        break;
    case HexPid::h0149:
        return   1;
        break;
    case HexPid::h014A:
        return   1;
        break;
    case HexPid::h014B:
        return   1;
        break;
    case HexPid::h014C:
        return   1;
        break;
    case HexPid::h014D:
        return   2;
        break;
    case HexPid::h014E:
        return   2;
        break;
    case HexPid::h014F:
        return   4;
        break;
    case HexPid::h0150:
        return   4;
        break;
    case HexPid::h0151:
        return   1;
        break;
    case HexPid::h0152:
        return   1;
        break;
    case HexPid::h0153:
        return   2;
        break;
    case HexPid::h0154:
        return   2;
        break;
    case HexPid::h0155:
        return   2;
        break;
    case HexPid::h0156:
        return   2;
        break;
    case HexPid::h0157:
        return   2;
        break;
    case HexPid::h0158:
        return   2;
        break;
    case HexPid::h0159:
        return   2;
        break;
    case HexPid::h015A:
        return   1;
        break;
    case HexPid::h015B:
        return   1;
        break;
    case HexPid::h015C:
        return   1;
        break;
    case HexPid::h015D:
        return   2;
        break;
    case HexPid::h015E:
        return   2;
        break;
    case HexPid::h015F:
        return   1;
        break;
    case HexPid::h0160:
        return   4;
        break;
    case HexPid::h0161:
        return   1;
        break;
    case HexPid::h0162:
        return   1;
        break;
    case HexPid::h0163:
        return   2;
        break;
    case HexPid::h0164:
        return   5;
        break;
    case HexPid::h0165:
        return   2;
        break;
    case HexPid::h0166:
        return   5;
        break;
    case HexPid::h0167:
        return   3;
        break;
    case HexPid::h0168:
        return   7;
        break;
    case HexPid::h0169:
        return   7;
        break;
    case HexPid::h016A:
        return   5;
        break;
    case HexPid::h016B:
        return   5;
        break;
    case HexPid::h016C:
        return   5;
        break;
    case HexPid::h016D:
        return   6;
        break;
    case HexPid::h016E:
        return   5;
        break;
    case HexPid::h016F:
        return   3;
        break;
    case HexPid::h0170:
        return   9;
        break;
    case HexPid::h0171:
        return   5;
        break;
    case HexPid::h0172:
        return   5;
        break;
    case HexPid::h0173:
        return   5;
        break;
    case HexPid::h0174:
        return   5;
        break;
    case HexPid::h0175:
        return   7;
        break;
    case HexPid::h0176:
        return   7;
        break;
    case HexPid::h0177:
        return   5;
        break;
    case HexPid::h0178:
        return   9;
        break;
    case HexPid::h0179:
        return   9;
        break;
    case HexPid::h017A:
        return   7;
        break;
    case HexPid::h017B:
        return   7;
        break;
    case HexPid::h017C:
        return   9;
        break;
    case HexPid::h017D:
        return   1;
        break;
    case HexPid::h017E:
        return   1;
        break;
    case HexPid::h017F:
        return   13;
        break;
    case HexPid::h0180:
        return   4;
        break;
    case HexPid::h0181:
        return   21;
        break;
    case HexPid::h0182:
        return   21;
        break;
    case HexPid::h0183:
        return   5;
        break;
    case HexPid::h0184:
        return   1;
        break;
    case HexPid::h0185:
        return   10;
        break;
    case HexPid::h0186:
        return   5;
        break;
    case HexPid::h0187:
        return   5;
        break;
    case HexPid::h0188:
        return   13;
        break;
    case HexPid::h0189:
        return   41;
        break;
    case HexPid::h018A:
        return   41;
        break;
    case HexPid::h018B:
        return   7;
        break;
    case HexPid::h018C:
        return   16;
        break;
    case HexPid::h018D:
        return   1;
        break;
    case HexPid::h018E:
        return   1;
        break;
    case HexPid::h018F:
        return   5;
        break;
    case HexPid::h0190:
        return   3;
        break;
    case HexPid::h0191:
        return   5;
        break;
    case HexPid::h0192:
        return   2;
        break;
    case HexPid::h0193:
        return   3;
        break;
    case HexPid::h0194:
        return   12;
        break;
    case HexPid::h0195:
        throw ExceptionPid(ExceptionPidType::NoDataBytes);
        break;
    case HexPid::h0196:
        throw ExceptionPid(ExceptionPidType::NoDataBytes);
        break;
    case HexPid::h0197:
        throw ExceptionPid(ExceptionPidType::NoDataBytes);
        break;
    case HexPid::h0198:
        return   9;
        break;
    case HexPid::h0199:
        return   9;
        break;
    case HexPid::h019A:
        return   6;
        break;
    case HexPid::h019B:
        return   4;
        break;
    case HexPid::h019C:
        return   17;
        break;
    case HexPid::h019D:
        return   4;
        break;
    case HexPid::h019E:
        return   2;
        break;
    case HexPid::h019F:
        return   9;
        break;
    case HexPid::h01A0:
        return   4;
        break;
    case HexPid::h01A1:
        return   9;
        break;
    case HexPid::h01A2:
        return   2;
        break;
    case HexPid::h01A3:
        return   9;
        break;
    case HexPid::h01A4:
        return   4;
        break;
    case HexPid::h01A5:
        return   4;
        break;
    case HexPid::h01A6:
        return   4;
        break;
    case HexPid::h01C0:
        return   4;
        break;
    case HexPid::h01C3:
        throw ExceptionPid(ExceptionPidType::NoDataBytes);
        break;
    case HexPid::h01C4:
        throw ExceptionPid(ExceptionPidType::NoDataBytes);
        break;
    case HexPid::h0200:
        return   4;
        break;
    case HexPid::h0201:
        return   4;
        break;
    case HexPid::h0202:
        return   2;
        break;
    case HexPid::h0203:
        return   2;
        break;
    case HexPid::h0204:
        return   1;
        break;
    case HexPid::h0205:
        return   1;
        break;
    case HexPid::h0206:
        return   1;
        break;
    case HexPid::h0207:
        return   1;
        break;
    case HexPid::h0208:
        return   1;
        break;
    case HexPid::h0209:
        return   1;
        break;
    case HexPid::h020A:
        return   1;
        break;
    case HexPid::h020B:
        return   1;
        break;
    case HexPid::h020C:
        return   2;
        break;
    case HexPid::h020D:
        return   1;
        break;
    case HexPid::h020E:
        return   1;
        break;
    case HexPid::h020F:
        return   1;
        break;
    case HexPid::h0210:
        return   2;
        break;
    case HexPid::h0211:
        return   1;
        break;
    case HexPid::h0212:
        return   1;
        break;
    case HexPid::h0213:
        return   1;
        break;
    case HexPid::h0214:
        return   2;
        break;
    case HexPid::h0215:
        return   2;
        break;
    case HexPid::h0216:
        return   2;
        break;
    case HexPid::h0217:
        return   2;
        break;
    case HexPid::h0218:
        return   2;
        break;
    case HexPid::h0219:
        return   2;
        break;
    case HexPid::h021A:
        return   2;
        break;
    case HexPid::h021B:
        return   2;
        break;
    case HexPid::h021C:
        return   1;
        break;
    case HexPid::h021D:
        return   1;
        break;
    case HexPid::h021E:
        return   1;
        break;
    case HexPid::h021F:
        return   2;
        break;
    case HexPid::h0220:
        return   4;
        break;
    case HexPid::h0221:
        return   2;
        break;
    case HexPid::h0222:
        return   2;
        break;
    case HexPid::h0223:
        return   2;
        break;
    case HexPid::h0224:
        return   4;
        break;
    case HexPid::h0225:
        return   4;
        break;
    case HexPid::h0226:
        return   4;
        break;
    case HexPid::h0227:
        return   4;
        break;
    case HexPid::h0228:
        return   4;
        break;
    case HexPid::h0229:
        return   4;
        break;
    case HexPid::h022A:
        return   4;
        break;
    case HexPid::h022B:
        return   4;
        break;
    case HexPid::h022C:
        return   1;
        break;
    case HexPid::h022D:
        return   1;
        break;
    case HexPid::h022E:
        return   1;
        break;
    case HexPid::h022F:
        return   1;
        break;
    case HexPid::h0230:
        return   1;
        break;
    case HexPid::h0231:
        return   2;
        break;
    case HexPid::h0232:
        return   2;
        break;
    case HexPid::h0233:
        return   1;
        break;
    case HexPid::h0234:
        return   4;
        break;
    case HexPid::h0235:
        return   4;
        break;
    case HexPid::h0236:
        return   4;
        break;
    case HexPid::h0237:
        return   4;
        break;
    case HexPid::h0238:
        return   4;
        break;
    case HexPid::h0239:
        return   4;
        break;
    case HexPid::h023A:
        return   4;
        break;
    case HexPid::h023B:
        return   4;
        break;
    case HexPid::h023C:
        return   2;
        break;
    case HexPid::h023D:
        return   2;
        break;
    case HexPid::h023E:
        return   2;
        break;
    case HexPid::h023F:
        return   2;
        break;
    case HexPid::h0240:
        return   4;
        break;
    case HexPid::h0241:
        return   4;
        break;
    case HexPid::h0242:
        return   2;
        break;
    case HexPid::h0243:
        return   2;
        break;
    case HexPid::h0244:
        return   1;
        break;
    case HexPid::h0245:
        return   1;
        break;
    case HexPid::h0246:
        return   1;
        break;
    case HexPid::h0247:
        return   1;
        break;
    case HexPid::h0248:
        return   1;
        break;
    case HexPid::h0249:
        return   1;
        break;
    case HexPid::h024A:
        return   1;
        break;
    case HexPid::h024B:
        return   1;
        break;
    case HexPid::h024C:
        return   1;
        break;
    case HexPid::h024D:
        return   2;
        break;
    case HexPid::h024E:
        return   2;
        break;
    case HexPid::h024F:
        return   4;
        break;
    case HexPid::h0250:
        return   4;
        break;
    case HexPid::h0251:
        return   1;
        break;
    case HexPid::h0252:
        return   1;
        break;
    case HexPid::h0253:
        return   2;
        break;
    case HexPid::h0254:
        return   2;
        break;
    case HexPid::h0255:
        return   2;
        break;
    case HexPid::h0256:
        return   2;
        break;
    case HexPid::h0257:
        return   2;
        break;
    case HexPid::h0258:
        return   2;
        break;
    case HexPid::h0259:
        return   2;
        break;
    case HexPid::h025A:
        return   1;
        break;
    case HexPid::h025B:
        return   1;
        break;
    case HexPid::h025C:
        return   1;
        break;
    case HexPid::h025D:
        return   2;
        break;
    case HexPid::h025E:
        return   2;
        break;
    case HexPid::h025F:
        return   1;
        break;
    case HexPid::h0260:
        return   4;
        break;
    case HexPid::h0261:
        return   1;
        break;
    case HexPid::h0262:
        return   1;
        break;
    case HexPid::h0263:
        return   2;
        break;
    case HexPid::h0264:
        return   5;
        break;
    case HexPid::h0265:
        return   2;
        break;
    case HexPid::h0266:
        return   5;
        break;
    case HexPid::h0267:
        return   3;
        break;
    case HexPid::h0268:
        return   7;
        break;
    case HexPid::h0269:
        return   7;
        break;
    case HexPid::h026A:
        return   5;
        break;
    case HexPid::h026B:
        return   5;
        break;
    case HexPid::h026C:
        return   5;
        break;
    case HexPid::h026D:
        return   6;
        break;
    case HexPid::h026E:
        return   5;
        break;
    case HexPid::h026F:
        return   3;
        break;
    case HexPid::h0270:
        return   9;
        break;
    case HexPid::h0271:
        return   5;
        break;
    case HexPid::h0272:
        return   5;
        break;
    case HexPid::h0273:
        return   5;
        break;
    case HexPid::h0274:
        return   5;
        break;
    case HexPid::h0275:
        return   7;
        break;
    case HexPid::h0276:
        return   7;
        break;
    case HexPid::h0277:
        return   5;
        break;
    case HexPid::h0278:
        return   9;
        break;
    case HexPid::h0279:
        return   9;
        break;
    case HexPid::h027A:
        return   7;
        break;
    case HexPid::h027B:
        return   7;
        break;
    case HexPid::h027C:
        return   9;
        break;
    case HexPid::h027D:
        return   1;
        break;
    case HexPid::h027E:
        return   1;
        break;
    case HexPid::h027F:
        return   13;
        break;
    case HexPid::h0280:
        return   4;
        break;
    case HexPid::h0281:
        return   21;
        break;
    case HexPid::h0282:
        return   21;
        break;
    case HexPid::h0283:
        return   5;
        break;
    case HexPid::h0284:
        return   1;
        break;
    case HexPid::h0285:
        return   10;
        break;
    case HexPid::h0286:
        return   5;
        break;
    case HexPid::h0287:
        return   5;
        break;
    case HexPid::h0288:
        return   13;
        break;
    case HexPid::h0289:
        return   41;
        break;
    case HexPid::h028A:
        return   41;
        break;
    case HexPid::h028B:
        return   7;
        break;
    case HexPid::h028C:
        return   16;
        break;
    case HexPid::h028D:
        return   1;
        break;
    case HexPid::h028E:
        return   1;
        break;
    case HexPid::h028F:
        return   5;
        break;
    case HexPid::h0290:
        return   3;
        break;
    case HexPid::h0291:
        return   5;
        break;
    case HexPid::h0292:
        return   2;
        break;
    case HexPid::h0293:
        return   3;
        break;
    case HexPid::h0294:
        return   12;
        break;
    case HexPid::h0295:
        throw ExceptionPid(ExceptionPidType::NoDataBytes);
        break;
    case HexPid::h0296:
        throw ExceptionPid(ExceptionPidType::NoDataBytes);
        break;
    case HexPid::h0297:
        throw ExceptionPid(ExceptionPidType::NoDataBytes);
        break;
    case HexPid::h0298:
        return   9;
        break;
    case HexPid::h0299:
        return   9;
        break;
    case HexPid::h029A:
        return   6;
        break;
    case HexPid::h029B:
        return   4;
        break;
    case HexPid::h029C:
        return   17;
        break;
    case HexPid::h029D:
        return   4;
        break;
    case HexPid::h029E:
        return   2;
        break;
    case HexPid::h029F:
        return   9;
        break;
    case HexPid::h02A0:
        return   4;
        break;
    case HexPid::h02A1:
        return   9;
        break;
    case HexPid::h02A2:
        return   2;
        break;
    case HexPid::h02A3:
        return   9;
        break;
    case HexPid::h02A4:
        return   4;
        break;
    case HexPid::h02A5:
        return   4;
        break;
    case HexPid::h02A6:
        return   4;
        break;
    case HexPid::h02C0:
        return   4;
        break;
    case HexPid::h02C3:
        throw ExceptionPid(ExceptionPidType::NoDataBytes);
        break;
    case HexPid::h02C4:
        throw ExceptionPid(ExceptionPidType::NoDataBytes);
        break;
    case HexPid::h03:
        throw ExceptionPid(ExceptionPidType::NoDataBytes);
        break;
    case HexPid::h04:
        throw ExceptionPid(ExceptionPidType::NoDataBytes);
        break;
    case HexPid::h0900:
        return   4;
        break;
    case HexPid::h0901:
        return   1;
        break;
    case HexPid::h0902:
        return   17;
        break;
    case HexPid::h0903:
        return   1;
        break;
    case HexPid::h0904:
        return   16;
        break;
    case HexPid::h0905:
        return   1;
        break;
    case HexPid::h0906:
        return   4;
        break;
    case HexPid::h0907:
        return   1;
        break;
    case HexPid::h0908:
        return   4;
        break;
    case HexPid::h0909:
        return   1;
        break;
    case HexPid::h090A:
        return   20;
        break;
    case HexPid::h090B:
        return   4;
        break;
    default:
        throw std::runtime_error("unknown HexPid");
}

}
unsigned int Pid::getDataByteAtIndex(unsigned int index)
{
}

unsigned int Pid::getNumberOfValues()
{
	switch (hexPid_)
    {
    case HexPid::h0100:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0101:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0102:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0103:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0104:
        return 1;
        break;
    case HexPid::h0105:
        return 1;
        break;
    case HexPid::h0106:
        return 1;
        break;
    case HexPid::h0107:
        return 1;
        break;
    case HexPid::h0108:
        return 1;
        break;
    case HexPid::h0109:
        return 1;
        break;
    case HexPid::h010A:
        return 1;
        break;
    case HexPid::h010B:
        return 1;
        break;
    case HexPid::h010C:
        return 1;
        break;
    case HexPid::h010D:
        return 1;
        break;
    case HexPid::h010E:
        return 1;
        break;
    case HexPid::h010F:
        return 1;
        break;
    case HexPid::h0110:
        return 1;
        break;
    case HexPid::h0111:
        return 1;
        break;
    case HexPid::h0112:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0113:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0114:
        return 2;
        break;
    case HexPid::h0115:
        return 2;
        break;
    case HexPid::h0116:
        return 2;
        break;
    case HexPid::h0117:
        return 2;
        break;
    case HexPid::h0118:
        return 2;
        break;
    case HexPid::h0119:
        return 2;
        break;
    case HexPid::h011A:
        return 2;
        break;
    case HexPid::h011B:
        return 2;
        break;
    case HexPid::h011C:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h011D:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h011E:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h011F:
        return 1;
        break;
    case HexPid::h0120:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0121:
        return 1;
        break;
    case HexPid::h0122:
        return 1;
        break;
    case HexPid::h0123:
        return 1;
        break;
    case HexPid::h0124:
        return 2;
        break;
    case HexPid::h0125:
        return 2;
        break;
    case HexPid::h0126:
        return 2;
        break;
    case HexPid::h0127:
        return 2;
        break;
    case HexPid::h0128:
        return 2;
        break;
    case HexPid::h0129:
        return 2;
        break;
    case HexPid::h012A:
        return 2;
        break;
    case HexPid::h012B:
        return 2;
        break;
    case HexPid::h012C:
        return 1;
        break;
    case HexPid::h012D:
        return 1;
        break;
    case HexPid::h012E:
        return 1;
        break;
    case HexPid::h012F:
        return 1;
        break;
    case HexPid::h0130:
        return 1;
        break;
    case HexPid::h0131:
        return 1;
        break;
    case HexPid::h0132:
        return 1;
        break;
    case HexPid::h0133:
        return 1;
        break;
    case HexPid::h0134:
        return 2;
        break;
    case HexPid::h0135:
        return 2;
        break;
    case HexPid::h0136:
        return 2;
        break;
    case HexPid::h0137:
        return 2;
        break;
    case HexPid::h0138:
        return 2;
        break;
    case HexPid::h0139:
        return 2;
        break;
    case HexPid::h013A:
        return 2;
        break;
    case HexPid::h013B:
        return 2;
        break;
    case HexPid::h013C:
        return 1;
        break;
    case HexPid::h013D:
        return 1;
        break;
    case HexPid::h013E:
        return 1;
        break;
    case HexPid::h013F:
        return 1;
        break;
    case HexPid::h0140:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0141:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0142:
        return 1;
        break;
    case HexPid::h0143:
        return 1;
        break;
    case HexPid::h0144:
        return 1;
        break;
    case HexPid::h0145:
        return 1;
        break;
    case HexPid::h0146:
        return 1;
        break;
    case HexPid::h0147:
        return 1;
        break;
    case HexPid::h0148:
        return 1;
        break;
    case HexPid::h0149:
        return 1;
        break;
    case HexPid::h014A:
        return 1;
        break;
    case HexPid::h014B:
        return 1;
        break;
    case HexPid::h014C:
        return 1;
        break;
    case HexPid::h014D:
        return 1;
        break;
    case HexPid::h014E:
        return 1;
        break;
    case HexPid::h014F:
        return 4;
        break;
    case HexPid::h0150:
        return 1;
        break;
    case HexPid::h0151:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0152:
        return 1;
        break;
    case HexPid::h0153:
        return 1;
        break;
    case HexPid::h0154:
        return 1;
        break;
    case HexPid::h0155:
        return 1;
        break;
    case HexPid::h0156:
        return 1;
        break;
    case HexPid::h0157:
        return 1;
        break;
    case HexPid::h0158:
        return 1;
        break;
    case HexPid::h0159:
        return 1;
        break;
    case HexPid::h015A:
        return 1;
        break;
    case HexPid::h015B:
        return 1;
        break;
    case HexPid::h015C:
        return 1;
        break;
    case HexPid::h015D:
        return 1;
        break;
    case HexPid::h015E:
        return 1;
        break;
    case HexPid::h015F:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0160:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0161:
        return 1;
        break;
    case HexPid::h0162:
        return 1;
        break;
    case HexPid::h0163:
        return 1;
        break;
    case HexPid::h0164:
        return 1;
        break;
    case HexPid::h0165:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0166:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0167:
        return 1;
        break;
    case HexPid::h0168:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0169:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h016A:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h016B:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h016C:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h016D:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h016E:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h016F:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0170:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0171:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0172:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0173:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0174:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0175:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0176:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0177:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0178:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0179:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h017A:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h017B:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h017C:
        return 1;
        break;
    case HexPid::h017D:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h017E:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h017F:
        return 1;
        break;
    case HexPid::h0180:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0181:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0182:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0183:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0184:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0185:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0186:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0187:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0188:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0189:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h018A:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h018B:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h018C:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h018D:
        return 1;
        break;
    case HexPid::h018E:
        return 1;
        break;
    case HexPid::h018F:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0190:
        return 1;
        break;
    case HexPid::h0191:
        return 1;
        break;
    case HexPid::h0192:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0193:
        return 1;
        break;
    case HexPid::h0194:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0195:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0196:
        throw ExceptionPid(ExceptionPidType:: NoValue);
        break;
    case HexPid::h0197:
        throw ExceptionPid(ExceptionPidType:: NoValue);
        break;
    case HexPid::h0198:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0199:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h019A:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h019B:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h019C:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h019D:
        return 1;
        break;
    case HexPid::h019E:
        return 1;
        break;
    case HexPid::h019F:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h01A0:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h01A1:
        return 1;
        break;
    case HexPid::h01A2:
        return 1;
        break;
    case HexPid::h01A3:
        return 1;
        break;
    case HexPid::h01A4:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h01A5:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h01A6:
        return 1;
        break;
    case HexPid::h01C0:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h01C3:
        throw ExceptionPid(ExceptionPidType:: NoValue);
        break;
    case HexPid::h01C4:
        throw ExceptionPid(ExceptionPidType:: NoValue);
        break;
    case HexPid::h0200:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0201:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0202:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0203:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0204:
        return 1;
        break;
    case HexPid::h0205:
        return 1;
        break;
    case HexPid::h0206:
        return 1;
        break;
    case HexPid::h0207:
        return 1;
        break;
    case HexPid::h0208:
        return 1;
        break;
    case HexPid::h0209:
        return 1;
        break;
    case HexPid::h020A:
        return 1;
        break;
    case HexPid::h020B:
        return 1;
        break;
    case HexPid::h020C:
        return 1;
        break;
    case HexPid::h020D:
        return 1;
        break;
    case HexPid::h020E:
        return 1;
        break;
    case HexPid::h020F:
        return 1;
        break;
    case HexPid::h0210:
        return 1;
        break;
    case HexPid::h0211:
        return 1;
        break;
    case HexPid::h0212:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0213:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0214:
        return 2;
        break;
    case HexPid::h0215:
        return 2;
        break;
    case HexPid::h0216:
        return 2;
        break;
    case HexPid::h0217:
        return 2;
        break;
    case HexPid::h0218:
        return 2;
        break;
    case HexPid::h0219:
        return 2;
        break;
    case HexPid::h021A:
        return 2;
        break;
    case HexPid::h021B:
        return 2;
        break;
    case HexPid::h021C:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h021D:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h021E:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h021F:
        return 1;
        break;
    case HexPid::h0220:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0221:
        return 1;
        break;
    case HexPid::h0222:
        return 1;
        break;
    case HexPid::h0223:
        return 1;
        break;
    case HexPid::h0224:
        return 2;
        break;
    case HexPid::h0225:
        return 2;
        break;
    case HexPid::h0226:
        return 2;
        break;
    case HexPid::h0227:
        return 2;
        break;
    case HexPid::h0228:
        return 2;
        break;
    case HexPid::h0229:
        return 2;
        break;
    case HexPid::h022A:
        return 2;
        break;
    case HexPid::h022B:
        return 2;
        break;
    case HexPid::h022C:
        return 1;
        break;
    case HexPid::h022D:
        return 1;
        break;
    case HexPid::h022E:
        return 1;
        break;
    case HexPid::h022F:
        return 1;
        break;
    case HexPid::h0230:
        return 1;
        break;
    case HexPid::h0231:
        return 1;
        break;
    case HexPid::h0232:
        return 1;
        break;
    case HexPid::h0233:
        return 1;
        break;
    case HexPid::h0234:
        return 2;
        break;
    case HexPid::h0235:
        return 2;
        break;
    case HexPid::h0236:
        return 2;
        break;
    case HexPid::h0237:
        return 2;
        break;
    case HexPid::h0238:
        return 2;
        break;
    case HexPid::h0239:
        return 2;
        break;
    case HexPid::h023A:
        return 2;
        break;
    case HexPid::h023B:
        return 2;
        break;
    case HexPid::h023C:
        return 1;
        break;
    case HexPid::h023D:
        return 1;
        break;
    case HexPid::h023E:
        return 1;
        break;
    case HexPid::h023F:
        return 1;
        break;
    case HexPid::h0240:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0241:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0242:
        return 1;
        break;
    case HexPid::h0243:
        return 1;
        break;
    case HexPid::h0244:
        return 1;
        break;
    case HexPid::h0245:
        return 1;
        break;
    case HexPid::h0246:
        return 1;
        break;
    case HexPid::h0247:
        return 1;
        break;
    case HexPid::h0248:
        return 1;
        break;
    case HexPid::h0249:
        return 1;
        break;
    case HexPid::h024A:
        return 1;
        break;
    case HexPid::h024B:
        return 1;
        break;
    case HexPid::h024C:
        return 1;
        break;
    case HexPid::h024D:
        return 1;
        break;
    case HexPid::h024E:
        return 1;
        break;
    case HexPid::h024F:
        return 4;
        break;
    case HexPid::h0250:
        return 1;
        break;
    case HexPid::h0251:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0252:
        return 1;
        break;
    case HexPid::h0253:
        return 1;
        break;
    case HexPid::h0254:
        return 1;
        break;
    case HexPid::h0255:
        return 1;
        break;
    case HexPid::h0256:
        return 1;
        break;
    case HexPid::h0257:
        return 1;
        break;
    case HexPid::h0258:
        return 1;
        break;
    case HexPid::h0259:
        return 1;
        break;
    case HexPid::h025A:
        return 1;
        break;
    case HexPid::h025B:
        return 1;
        break;
    case HexPid::h025C:
        return 1;
        break;
    case HexPid::h025D:
        return 1;
        break;
    case HexPid::h025E:
        return 1;
        break;
    case HexPid::h025F:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0260:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0261:
        return 1;
        break;
    case HexPid::h0262:
        return 1;
        break;
    case HexPid::h0263:
        return 1;
        break;
    case HexPid::h0264:
        return 1;
        break;
    case HexPid::h0265:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0266:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0267:
        return 1;
        break;
    case HexPid::h0268:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0269:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h026A:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h026B:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h026C:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h026D:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h026E:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h026F:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0270:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0271:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0272:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0273:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0274:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0275:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0276:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0277:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0278:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0279:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h027A:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h027B:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h027C:
        return 1;
        break;
    case HexPid::h027D:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h027E:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h027F:
        return 1;
        break;
    case HexPid::h0280:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0281:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0282:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0283:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0284:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0285:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0286:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0287:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0288:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0289:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h028A:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h028B:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h028C:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h028D:
        return 1;
        break;
    case HexPid::h028E:
        return 1;
        break;
    case HexPid::h028F:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0290:
        return 1;
        break;
    case HexPid::h0291:
        return 1;
        break;
    case HexPid::h0292:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0293:
        return 1;
        break;
    case HexPid::h0294:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0295:
        throw ExceptionPid(ExceptionPidType:: NoValue);
        break;
    case HexPid::h0296:
        throw ExceptionPid(ExceptionPidType:: NoValue);
        break;
    case HexPid::h0297:
        throw ExceptionPid(ExceptionPidType:: NoValue);
        break;
    case HexPid::h0298:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0299:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h029A:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h029B:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h029C:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h029D:
        return 1;
        break;
    case HexPid::h029E:
        return 1;
        break;
    case HexPid::h029F:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h02A0:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h02A1:
        return 1;
        break;
    case HexPid::h02A2:
        return 1;
        break;
    case HexPid::h02A3:
        return 1;
        break;
    case HexPid::h02A4:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h02A5:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h02A6:
        return 1;
        break;
    case HexPid::h02C0:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h02C3:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h02C4:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h03:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h04:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0900:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0901:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0902:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0903:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0904:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0905:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0906:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0907:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0908:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h0909:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h090A:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    case HexPid::h090B:
        throw ExceptionPid(ExceptionPidType::NoValue);
        break;
    default:
        throw std::runtime_error("unknown HexPid");
        break;
    }
}

std::vector<float> Pid::getMin()
{
}

std::vector<float> Pid::getMax()
{
}

std::vector<float> Pid::getValue()
{
}

ExceptionPid::ExceptionPid(ExceptionPidType type) throw()
    :type_(type)
{
    switch (type_)
    {
    case ExceptionPidType::NoError:
        explaination_ = "no error";
        break;
    case ExceptionPidType::UnknownPidString:
        explaination_ = "unknown pid in string";
        break;
    case ExceptionPidType::UnknownHexPid:
        explaination_ = "unknown HexPid";
        break;
    case ExceptionPidType::NoDataBytes:
        explaination_ = "no data bytes";
        break;
    case ExceptionPidType::NoDescription:
        explaination_ = "no description";
        break;
    case ExceptionPidType::NoUnits:
        explaination_ = "no units";
        break;
    case ExceptionPidType::NoMin:
        explaination_ = "no minimum";
        break;
    case ExceptionPidType::NoMax:
        explaination_ = "no maximum";
        break;
    case ExceptionPidType::NoValue:
        explaination_ = "no value";
        break;
    default:
        break;
    }
}

ExceptionPid::ExceptionPid(ExceptionPidType type, std::string option) throw()
    :type_(type)
{
    switch (type_)
    {
    case ExceptionPidType::NoError:
        explaination_ = "no error";
        break;
    case ExceptionPidType::UnknownPidString:
        explaination_ = "unknown pid in string: " + option;
        break;
    case ExceptionPidType::UnknownHexPid:
        explaination_ = "unknown HexPid";
        break;
    case ExceptionPidType::NoDataBytes:
        explaination_ = "no data bytes";
        break;
    case ExceptionPidType::NoDescription:
        explaination_ = "no description";
        break;
    case ExceptionPidType::NoUnits:
        explaination_ = "no units";
        break;
    case ExceptionPidType::NoMin:
        explaination_ = "no minimum";
        break;
    case ExceptionPidType::NoMax:
        explaination_ = "no maximum";
        break;
    case ExceptionPidType::NoValue:
        explaination_ = "no value";
        break;
    default:
        break;
    }
}

const char* ExceptionPid::what() const throw()
{
    return explaination_.c_str();
}
