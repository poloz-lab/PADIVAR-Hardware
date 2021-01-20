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
        throw std::runtime_error("unknown HexPid");
        break;
    }
}

std::string Pid::getPidString()
{
}

HexPid Pid::getHexPid()
{
}

std::string Pid::getDataBytes()
{
}

void Pid::setDataBytes(std::string setDataBytes)
{
}

std::string Pid::getDescription()
{
}

std::string Pid::getUnits()
{
}

float Pid::getMin()
{
}

float Pid::getMax()
{
}

float Pid::getValue()
{
}
