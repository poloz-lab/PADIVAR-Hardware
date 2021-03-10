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

#include "device.h"

Device::Device(Interface* communication_medium)
    :communication_medium_(communication_medium)
{

}

Device::~Device()
{
    if (communication_medium_)
    {
        delete communication_medium_;
    }
}
std::vector<Pid> Device::getPidList()
{
	std::vector<Pid> pid;
	std::string binary = "";
	std::string p_Hexa = "";

	/*PIDs supported [01 - 20]*/
	p_Hexa = this->sendPid(Pid(HexPid::h0100));
    
    std::size_t found = p_Hexa.find("NO DATA");
    if (found!=std::string::npos)
    {
        throw std::runtime_error("ERROR: PID 0100 not supported");
    }
	else if (p_Hexa.rfind("4100", 0) != 0 )
	{
		throw std::runtime_error("ERROR: with bits returned");
	}
	else
	{
		p_Hexa.erase(0, 4);
        binary = HexToBin(p_Hexa);
        for (unsigned int i = 0; i < binary.size(); i++)
        {
            if (binary[i] == '1' && i == 0)
            {
                pid.push_back(Pid(HexPid::h0101));
                pid.push_back(Pid(HexPid::h0201));
            }
            if (binary[i] == '1' && i == 1)
            {
                pid.push_back(Pid(HexPid::h0102));
                pid.push_back(Pid(HexPid::h0202));
            }
            if (binary[i] == '1' && i == 2)
            {
                pid.push_back(Pid(HexPid::h0103));
                pid.push_back(Pid(HexPid::h0203));
            }
            if (binary[i] == '1' && i == 3)
            {
                pid.push_back(Pid(HexPid::h0104));
                pid.push_back(Pid(HexPid::h0204));
            }
            if (binary[i] == '1' && i == 4)
            {
                pid.push_back(Pid(HexPid::h0105));
                pid.push_back(Pid(HexPid::h0205));
            }
            if (binary[i] == '1' && i == 5)
            {
                pid.push_back(Pid(HexPid::h0106));
                pid.push_back(Pid(HexPid::h0206));
            }
            if (binary[i] == '1' && i == 6)
            {
                pid.push_back(Pid(HexPid::h0107));
                pid.push_back(Pid(HexPid::h0207));
            }
            if (binary[i] == '1' && i == 7)
            {
                pid.push_back(Pid(HexPid::h0108));
                pid.push_back(Pid(HexPid::h0208));
            }
            if (binary[i] == '1' && i == 8)
            {
                pid.push_back(Pid(HexPid::h0109));
                pid.push_back(Pid(HexPid::h0202));
            }
            if (binary[i] == '1' && i == 9)
            {
                pid.push_back(Pid(HexPid::h010A));
                pid.push_back(Pid(HexPid::h020A));
            }
            if (binary[i] == '1' && i == 10)
            {
                pid.push_back(Pid(HexPid::h010B));
                pid.push_back(Pid(HexPid::h020B));
            }
            if (binary[i] == '1' && i == 11)
            {
                pid.push_back(Pid(HexPid::h010C));
                pid.push_back(Pid(HexPid::h020C));
            }
            if (binary[i] == '1' && i == 12)
            {
                pid.push_back(Pid(HexPid::h010D));
                pid.push_back(Pid(HexPid::h020D));
            }
            if (binary[i] == '1' && i == 13)
            {
                pid.push_back(Pid(HexPid::h010E));
                pid.push_back(Pid(HexPid::h020E));
            }
            if (binary[i] == '1' && i == 14)
            {
                pid.push_back(Pid(HexPid::h010F));
                pid.push_back(Pid(HexPid::h020F));
            }
            if (binary[i] == '1' && i == 15)
            {
                pid.push_back(Pid(HexPid::h0110));
                pid.push_back(Pid(HexPid::h0210));
            }
            if (binary[i] == '1' && i == 16)
            {
                pid.push_back(Pid(HexPid::h0111));
                pid.push_back(Pid(HexPid::h0211));
            }
            if (binary[i] == '1' && i == 17)
            {
                pid.push_back(Pid(HexPid::h0112));
                pid.push_back(Pid(HexPid::h0212));
            }
            if (binary[i] == '1' && i == 18)
            {
                pid.push_back(Pid(HexPid::h0113));
                pid.push_back(Pid(HexPid::h0213));
            }
            if (binary[i] == '1' && i == 19)
            {
                pid.push_back(Pid(HexPid::h0114));
                pid.push_back(Pid(HexPid::h0214));
            }
            if (binary[i] == '1' && i == 20)
            {
                pid.push_back(Pid(HexPid::h0115));
                pid.push_back(Pid(HexPid::h0215));
            }
            if (binary[i] == '1' && i == 21)
            {
                pid.push_back(Pid(HexPid::h0116));
                pid.push_back(Pid(HexPid::h0216));
            }
            if (binary[i] == '1' && i == 22)
            {
                pid.push_back(Pid(HexPid::h0117));
                pid.push_back(Pid(HexPid::h0217));
            }
            if (binary[i] == '1' && i == 23)
            {
                pid.push_back(Pid(HexPid::h0118));
                pid.push_back(Pid(HexPid::h0218));
            }
            if (binary[i] == '1' && i == 24)
            {
                pid.push_back(Pid(HexPid::h0119));
                pid.push_back(Pid(HexPid::h0219));
            }
            if (binary[i] == '1' && i == 25)
            {
                pid.push_back(Pid(HexPid::h011A));
                pid.push_back(Pid(HexPid::h021A));
            }
            if (binary[i] == '1' && i == 26)
            {
                pid.push_back(Pid(HexPid::h011B));
                pid.push_back(Pid(HexPid::h021B));
            }
            if (binary[i] == '1' && i == 27)
            {
                pid.push_back(Pid(HexPid::h011C));
                pid.push_back(Pid(HexPid::h021C));
            }
            if (binary[i] == '1' && i == 28)
            {
                pid.push_back(Pid(HexPid::h011D));
                pid.push_back(Pid(HexPid::h021D));
            }
            if (binary[i] == '1' && i == 29)
            {
                pid.push_back(Pid(HexPid::h011E));
                pid.push_back(Pid(HexPid::h021E));
            }
            if (binary[i] == '1' && i == 30)
            {
                pid.push_back(Pid(HexPid::h011F));
                pid.push_back(Pid(HexPid::h021F));
            }
        }
    }
	/*PIDs supported [21 - 40]*/
    p_Hexa = this->sendPid(Pid(HexPid::h0120));

    found = p_Hexa.find("NO DATA");
    if (found!=std::string::npos)
    {
        throw std::runtime_error("ERROR: PID 0120 not supported");
    }
	else if (p_Hexa.rfind("4120", 0) != 0 )
	{
		throw std::runtime_error("ERROR: with bits returned");
	}
	else
	{
		p_Hexa.erase(0, 4);
        binary = HexToBin(p_Hexa);
        for (unsigned int i = 0; i < binary.size(); i++)
        {
            if (binary[i] == '1' && i == 0)
            {
                pid.push_back(Pid(HexPid::h0121));
                pid.push_back(Pid(HexPid::h0221));
            }
            if (binary[i] == '1' && i == 1)
            {
                pid.push_back(Pid(HexPid::h0122));
                pid.push_back(Pid(HexPid::h0222));
            }
            if (binary[i] == '1' && i == 2)
            {
                pid.push_back(Pid(HexPid::h0123));
                pid.push_back(Pid(HexPid::h0223));
            }
            if (binary[i] == '1' && i == 3)
            {
                pid.push_back(Pid(HexPid::h0124));
                pid.push_back(Pid(HexPid::h0224));
            }
            if (binary[i] == '1' && i == 4)
            {
                pid.push_back(Pid(HexPid::h0125));
                pid.push_back(Pid(HexPid::h0225));
            }
            if (binary[i] == '1' && i == 5)
            {
                pid.push_back(Pid(HexPid::h0126));
                pid.push_back(Pid(HexPid::h0226));
            }
            if (binary[i] == '1' && i == 6)
            {
                pid.push_back(Pid(HexPid::h0127));
                pid.push_back(Pid(HexPid::h0227));
            }
            if (binary[i] == '1' && i == 7)
            {
                pid.push_back(Pid(HexPid::h0128));
                pid.push_back(Pid(HexPid::h0228));
            }
            if (binary[i] == '1' && i == 8)
            {
                pid.push_back(Pid(HexPid::h0129));
                pid.push_back(Pid(HexPid::h0229));
            }
            if (binary[i] == '1' && i == 9)
            {
                pid.push_back(Pid(HexPid::h012A));
                pid.push_back(Pid(HexPid::h022A));
            }
            if (binary[i] == '1' && i == 10)
            {
                pid.push_back(Pid(HexPid::h012B));
                pid.push_back(Pid(HexPid::h022B));
            }
            if (binary[i] == '1' && i == 11)
            {
                pid.push_back(Pid(HexPid::h012C));
                pid.push_back(Pid(HexPid::h022C));
            }
            if (binary[i] == '1' && i == 12)
            {
                pid.push_back(Pid(HexPid::h012D));
                pid.push_back(Pid(HexPid::h022D));
            }
            if (binary[i] == '1' && i == 13)
            {
                pid.push_back(Pid(HexPid::h012E));
                pid.push_back(Pid(HexPid::h022E));
            }
            if (binary[i] == '1' && i == 14)
            {
                pid.push_back(Pid(HexPid::h012F));
                pid.push_back(Pid(HexPid::h022F));
            }
            if (binary[i] == '1' && i == 15)
            {
                pid.push_back(Pid(HexPid::h0130));
                pid.push_back(Pid(HexPid::h0230));
            }
            if (binary[i] == '1' && i == 16)
            {
                pid.push_back(Pid(HexPid::h0131));
                pid.push_back(Pid(HexPid::h0231));
            }
            if (binary[i] == '1' && i == 17)
            {
                pid.push_back(Pid(HexPid::h0132));
                pid.push_back(Pid(HexPid::h0232));
            }
            if (binary[i] == '1' && i == 18)
            {
                pid.push_back(Pid(HexPid::h0133));
                pid.push_back(Pid(HexPid::h0233));
            }
            if (binary[i] == '1' && i == 19)
            {
                pid.push_back(Pid(HexPid::h0134));
                pid.push_back(Pid(HexPid::h0234));
            }
            if (binary[i] == '1' && i == 20)
            {
                pid.push_back(Pid(HexPid::h0135));
                pid.push_back(Pid(HexPid::h0235));
            }
            if (binary[i] == '1' && i == 21)
            {
                pid.push_back(Pid(HexPid::h0136));
                pid.push_back(Pid(HexPid::h0236));
            }
            if (binary[i] == '1' && i == 22)
            {
                pid.push_back(Pid(HexPid::h0137));
                pid.push_back(Pid(HexPid::h0237));
            }
            if (binary[i] == '1' && i == 23)
            {
                pid.push_back(Pid(HexPid::h0138));
                pid.push_back(Pid(HexPid::h0238));
            }
            if (binary[i] == '1' && i == 24)
            {
                pid.push_back(Pid(HexPid::h0139));
                pid.push_back(Pid(HexPid::h0239));
            }
            if (binary[i] == '1' && i == 25)
            {
                pid.push_back(Pid(HexPid::h013A));
                pid.push_back(Pid(HexPid::h023A));
            }
            if (binary[i] == '1' && i == 26)
            {
                pid.push_back(Pid(HexPid::h013B));
                pid.push_back(Pid(HexPid::h023B));
            }
            if (binary[i] == '1' && i == 27)
            {
                pid.push_back(Pid(HexPid::h013C));
                pid.push_back(Pid(HexPid::h023C));
            }
            if (binary[i] == '1' && i == 28)
            {
                pid.push_back(Pid(HexPid::h013D));
                pid.push_back(Pid(HexPid::h023D));
            }
            if (binary[i] == '1' && i == 29)
            {
                pid.push_back(Pid(HexPid::h013E));
                pid.push_back(Pid(HexPid::h023E));
            }
            if (binary[i] == '1' && i == 30)
            {
                pid.push_back(Pid(HexPid::h013F));
                pid.push_back(Pid(HexPid::h023F));
            }
        }
    }
	/*PIDs supported [41 - 60]*/
    p_Hexa = this->sendPid(Pid(HexPid::h0140));
	
    found = p_Hexa.find("NO DATA");
    if (found!=std::string::npos)
    {
        throw std::runtime_error("ERROR: PID 0140 not supported");
    }
	else if (p_Hexa.rfind("4140", 0) != 0 )
	{
		throw std::runtime_error("ERROR: with bits returned");
	}
	else
	{
		p_Hexa.erase(0, 4);
		binary = HexToBin(p_Hexa);p_Hexa.erase(0, 4);
		binary = HexToBin(p_Hexa);
		for (unsigned int i = 0; i < binary.size(); i++)
		{
			if (binary[i] == '1' && i == 0)
			{
				pid.push_back(Pid(HexPid::h0141));
				pid.push_back(Pid(HexPid::h0241));
			}
			if (binary[i] == '1' && i == 1)
			{
				pid.push_back(Pid(HexPid::h0142));
				pid.push_back(Pid(HexPid::h0242));
			}
			if (binary[i] == '1' && i == 2)
			{
				pid.push_back(Pid(HexPid::h0143));
			}
			if (binary[i] == '1' && i == 3)
			{
				pid.push_back(Pid(HexPid::h0144));
				pid.push_back(Pid(HexPid::h0244));
			}
			if (binary[i] == '1' && i == 4)
			{
				pid.push_back(Pid(HexPid::h0145));
				pid.push_back(Pid(HexPid::h0245));
			}
			if (binary[i] == '1' && i == 5)
			{
				pid.push_back(Pid(HexPid::h0146));
				pid.push_back(Pid(HexPid::h0246));
			}
			if (binary[i] == '1' && i == 6)
			{
				pid.push_back(Pid(HexPid::h0147));
				pid.push_back(Pid(HexPid::h0247));
			}
			if (binary[i] == '1' && i == 7)
			{
				pid.push_back(Pid(HexPid::h0148));
				pid.push_back(Pid(HexPid::h0248));
			}
			if (binary[i] == '1' && i == 8)
			{
				pid.push_back(Pid(HexPid::h0149));
				pid.push_back(Pid(HexPid::h0249));
			}
			if (binary[i] == '1' && i == 9)
			{
				pid.push_back(Pid(HexPid::h014A));
				pid.push_back(Pid(HexPid::h024A));
			}
			if (binary[i] == '1' && i == 10)
			{
				pid.push_back(Pid(HexPid::h014B));
				pid.push_back(Pid(HexPid::h024B));
			}
			if (binary[i] == '1' && i == 11)
			{
				pid.push_back(Pid(HexPid::h014C));
				pid.push_back(Pid(HexPid::h024C));
			}
			if (binary[i] == '1' && i == 12)
			{
				pid.push_back(Pid(HexPid::h014D));
				pid.push_back(Pid(HexPid::h024D));
			}
			if (binary[i] == '1' && i == 13)
			{
				pid.push_back(Pid(HexPid::h014E));
				pid.push_back(Pid(HexPid::h024E));
			}
			if (binary[i] == '1' && i == 14)
			{
				pid.push_back(Pid(HexPid::h014F));
				pid.push_back(Pid(HexPid::h024F));
			}
			if (binary[i] == '1' && i == 15)
			{
				pid.push_back(Pid(HexPid::h0150));
				pid.push_back(Pid(HexPid::h0250));
			}
			if (binary[i] == '1' && i == 16)
			{
				pid.push_back(Pid(HexPid::h0151));
				pid.push_back(Pid(HexPid::h0251));
			}
			if (binary[i] == '1' && i == 17)
			{
				pid.push_back(Pid(HexPid::h0152));
				pid.push_back(Pid(HexPid::h0252));
			}
			if (binary[i] == '1' && i == 18)
			{
				pid.push_back(Pid(HexPid::h0153));
				pid.push_back(Pid(HexPid::h0253));
			}
			if (binary[i] == '1' && i == 19)
			{
				pid.push_back(Pid(HexPid::h0154));
				pid.push_back(Pid(HexPid::h0254));
			}
			if (binary[i] == '1' && i == 20)
			{
				pid.push_back(Pid(HexPid::h0155));
				pid.push_back(Pid(HexPid::h0255));
			}
			if (binary[i] == '1' && i == 21)
			{
				pid.push_back(Pid(HexPid::h0156));
				pid.push_back(Pid(HexPid::h0256));
			}
			if (binary[i] == '1' && i == 22)
			{
				pid.push_back(Pid(HexPid::h0157));
				pid.push_back(Pid(HexPid::h0257));
			}
			if (binary[i] == '1' && i == 23)
			{
				pid.push_back(Pid(HexPid::h0158));
				pid.push_back(Pid(HexPid::h0258));
			}
			if (binary[i] == '1' && i == 24)
			{
				pid.push_back(Pid(HexPid::h0159));
				pid.push_back(Pid(HexPid::h0259));
			}
			if (binary[i] == '1' && i == 25)
			{
				pid.push_back(Pid(HexPid::h015A));
				pid.push_back(Pid(HexPid::h025A));
			}
			if (binary[i] == '1' && i == 26)
			{
				pid.push_back(Pid(HexPid::h015B));
				pid.push_back(Pid(HexPid::h025B));
			}
			if (binary[i] == '1' && i == 27)
			{
				pid.push_back(Pid(HexPid::h015C));
				pid.push_back(Pid(HexPid::h025C));
			}
			if (binary[i] == '1' && i == 28)
			{
				pid.push_back(Pid(HexPid::h015D));
				pid.push_back(Pid(HexPid::h025D));
			}
			if (binary[i] == '1' && i == 29)
			{
				pid.push_back(Pid(HexPid::h015E));
				pid.push_back(Pid(HexPid::h025E));
			}
			if (binary[i] == '1' && i == 30)
			{
				pid.push_back(Pid(HexPid::h015F));
				pid.push_back(Pid(HexPid::h025F));
			}
        }
	}

	/*PIDs supported [61 - 80]*/
	p_Hexa = this->sendPid(Pid(HexPid::h0160));
	
    found = p_Hexa.find("NO DATA");
    if (found!=std::string::npos)
    {
        throw std::runtime_error("ERROR: PID 0160 not supported");
    }
	else if (p_Hexa.rfind("4160", 0) != 0 )
	{
		throw std::runtime_error("ERROR: with bits returned");
	}
	else
	{
		p_Hexa.erase(0, 4);
		binary = HexToBin(p_Hexa);
		for (unsigned int i = 0; i < binary.size(); i++)
		{
			if (binary[i] == '1' && i == 0)
			{
				pid.push_back(Pid(HexPid::h0161));
				pid.push_back(Pid(HexPid::h0261));
			}
			if (binary[i] == '1' && i == 1)
			{
				pid.push_back(Pid(HexPid::h0162));
				pid.push_back(Pid(HexPid::h0261));
			}
			if (binary[i] == '1' && i == 2)
			{
				pid.push_back(Pid(HexPid::h0163));
				pid.push_back(Pid(HexPid::h0263));
			}
			if (binary[i] == '1' && i == 3)
			{
				pid.push_back(Pid(HexPid::h0164));
				pid.push_back(Pid(HexPid::h0264));
			}
			if (binary[i] == '1' && i == 4)
			{
				pid.push_back(Pid(HexPid::h0165));
				pid.push_back(Pid(HexPid::h0265));
			}
			if (binary[i] == '1' && i == 5)
			{
				pid.push_back(Pid(HexPid::h0166));
				pid.push_back(Pid(HexPid::h0266));
			}
			if (binary[i] == '1' && i == 6)
			{
				pid.push_back(Pid(HexPid::h0167));
				pid.push_back(Pid(HexPid::h0267));
			}
			if (binary[i] == '1' && i == 7)
			{
				pid.push_back(Pid(HexPid::h0168));
				pid.push_back(Pid(HexPid::h0268));
			}
			if (binary[i] == '1' && i == 8)
			{
				pid.push_back(Pid(HexPid::h0169));
				pid.push_back(Pid(HexPid::h0269));
			}
			if (binary[i] == '1' && i == 9)
			{
				pid.push_back(Pid(HexPid::h016A));
				pid.push_back(Pid(HexPid::h026A));
			}
			if (binary[i] == '1' && i == 10)
			{
				pid.push_back(Pid(HexPid::h016B));
				pid.push_back(Pid(HexPid::h026B));
			}
			if (binary[i] == '1' && i == 11)
			{
				pid.push_back(Pid(HexPid::h016C));
				pid.push_back(Pid(HexPid::h026C));
			}
			if (binary[i] == '1' && i == 12)
			{
				pid.push_back(Pid(HexPid::h016D));
				pid.push_back(Pid(HexPid::h026D));
			}
			if (binary[i] == '1' && i == 13)
			{
				pid.push_back(Pid(HexPid::h016E));
				pid.push_back(Pid(HexPid::h026E));
			}
			if (binary[i] == '1' && i == 14)
			{
				pid.push_back(Pid(HexPid::h016F));
				pid.push_back(Pid(HexPid::h026F));
			}
			if (binary[i] == '1' && i == 15)
			{
				pid.push_back(Pid(HexPid::h0170));
				pid.push_back(Pid(HexPid::h0270));
			}
			if (binary[i] == '1' && i == 16)
			{
				pid.push_back(Pid(HexPid::h0171));
				pid.push_back(Pid(HexPid::h0271));
			}
			if (binary[i] == '1' && i == 17)
			{
				pid.push_back(Pid(HexPid::h0172));
				pid.push_back(Pid(HexPid::h0272));
			}
			if (binary[i] == '1' && i == 18)
			{
				pid.push_back(Pid(HexPid::h0173));
				pid.push_back(Pid(HexPid::h0273));
			}
			if (binary[i] == '1' && i == 19)
			{
				pid.push_back(Pid(HexPid::h0174));
				pid.push_back(Pid(HexPid::h0274));
			}
			if (binary[i] == '1' && i == 20)
			{
				pid.push_back(Pid(HexPid::h0175));
				pid.push_back(Pid(HexPid::h0275));
			}
			if (binary[i] == '1' && i == 21)
			{
				pid.push_back(Pid(HexPid::h0176));
				pid.push_back(Pid(HexPid::h0276));
			}
			if (binary[i] == '1' && i == 22)
			{
				pid.push_back(Pid(HexPid::h0177));
				pid.push_back(Pid(HexPid::h0277));
			}
			if (binary[i] == '1' && i == 23)
			{
				pid.push_back(Pid(HexPid::h0178));
				pid.push_back(Pid(HexPid::h0278));
			}
			if (binary[i] == '1' && i == 24)
			{
				pid.push_back(Pid(HexPid::h0179));
				pid.push_back(Pid(HexPid::h0279));
			}
			if (binary[i] == '1' && i == 25)
			{
				pid.push_back(Pid(HexPid::h017A));
				pid.push_back(Pid(HexPid::h027A));
			}
			if (binary[i] == '1' && i == 26)
			{
				pid.push_back(Pid(HexPid::h017B));
				pid.push_back(Pid(HexPid::h027B));
			}
			if (binary[i] == '1' && i == 27)
			{
				pid.push_back(Pid(HexPid::h017C));
				pid.push_back(Pid(HexPid::h027C));
			}
			if (binary[i] == '1' && i == 28)
			{
				pid.push_back(Pid(HexPid::h017D));
				pid.push_back(Pid(HexPid::h027D));
			}
			if (binary[i] == '1' && i == 29)
			{
				pid.push_back(Pid(HexPid::h017E));
				pid.push_back(Pid(HexPid::h027E));
			}
			if (binary[i] == '1' && i == 30)
			{
				pid.push_back(Pid(HexPid::h017F));
				pid.push_back(Pid(HexPid::h027F));
			}
		}
	}
	/*PIDs supported [81 - A0]*/
	p_Hexa = this->sendPid(Pid(HexPid::h0180));

    found = p_Hexa.find("NO DATA");
    if (found!=std::string::npos)
    {
        throw std::runtime_error("ERROR: PID 0180 not supported");
    }
	else if (p_Hexa.rfind("4180", 0) != 0 )
	{
		throw std::runtime_error("ERROR: with bits returned");
	}
	else
	{
	
		p_Hexa.erase(0, 4);
		binary = HexToBin(p_Hexa);
		for (unsigned int i = 0; i < binary.size(); i++)
		{
			if (binary[i] == '1' && i == 0)
			{
				pid.push_back(Pid(HexPid::h0181));
				pid.push_back(Pid(HexPid::h0281));
			}
			if (binary[i] == '1' && i == 1)
			{
				pid.push_back(Pid(HexPid::h0182));
				pid.push_back(Pid(HexPid::h0282));
			}
			if (binary[i] == '1' && i == 2)
			{
				pid.push_back(Pid(HexPid::h0183));
				pid.push_back(Pid(HexPid::h0283));
			}
			if (binary[i] == '1' && i == 3)
			{
				pid.push_back(Pid(HexPid::h0184));
				pid.push_back(Pid(HexPid::h0284));
			}
			if (binary[i] == '1' && i == 4)
			{
				pid.push_back(Pid(HexPid::h0185));
				pid.push_back(Pid(HexPid::h0285));
			}
			if (binary[i] == '1' && i == 5)
			{
				pid.push_back(Pid(HexPid::h0186));
				pid.push_back(Pid(HexPid::h0286));
			}
			if (binary[i] == '1' && i == 6)
			{
				pid.push_back(Pid(HexPid::h0187));
				pid.push_back(Pid(HexPid::h0287));
			}
			if (binary[i] == '1' && i == 7)
			{
				pid.push_back(Pid(HexPid::h0188));
				pid.push_back(Pid(HexPid::h0288));
			}
			if (binary[i] == '1' && i == 8)
			{
				pid.push_back(Pid(HexPid::h0189));
				pid.push_back(Pid(HexPid::h0289));
			}
			if (binary[i] == '1' && i == 9)
			{
				pid.push_back(Pid(HexPid::h018A));
				pid.push_back(Pid(HexPid::h028A));
			}
			if (binary[i] == '1' && i == 10)
			{
				pid.push_back(Pid(HexPid::h018B));
				pid.push_back(Pid(HexPid::h028B));
			}
			if (binary[i] == '1' && i == 11)
			{
				pid.push_back(Pid(HexPid::h018C));
				pid.push_back(Pid(HexPid::h028C));
			}
			if (binary[i] == '1' && i == 12)
			{
				pid.push_back(Pid(HexPid::h018D));
				pid.push_back(Pid(HexPid::h028D));
			}
			if (binary[i] == '1' && i == 13)
			{
				pid.push_back(Pid(HexPid::h018E));
				pid.push_back(Pid(HexPid::h028E));
			}
			if (binary[i] == '1' && i == 14)
			{
				pid.push_back(Pid(HexPid::h018F));
				pid.push_back(Pid(HexPid::h028F));
			}
			if (binary[i] == '1' && i == 15)
			{
				pid.push_back(Pid(HexPid::h0190));
				pid.push_back(Pid(HexPid::h0290));
			}
			if (binary[i] == '1' && i == 16)
			{
				pid.push_back(Pid(HexPid::h0191));
				pid.push_back(Pid(HexPid::h0291));
			}
			if (binary[i] == '1' && i == 17)
			{
				pid.push_back(Pid(HexPid::h0192));
				pid.push_back(Pid(HexPid::h0292));
			}
			if (binary[i] == '1' && i == 18)
			{
				pid.push_back(Pid(HexPid::h0193));
				pid.push_back(Pid(HexPid::h0293));
			}
			if (binary[i] == '1' && i == 19)
			{
				pid.push_back(Pid(HexPid::h0194));
				pid.push_back(Pid(HexPid::h0294));
			}
			if (binary[i] == '1' && i == 20)
			{
				pid.push_back(Pid(HexPid::h0195));
				pid.push_back(Pid(HexPid::h0295));
			}
			if (binary[i] == '1' && i == 21)
			{
				pid.push_back(Pid(HexPid::h0196));
				pid.push_back(Pid(HexPid::h0296));
			}
			if (binary[i] == '1' && i == 22)
			{
				pid.push_back(Pid(HexPid::h0197));
				pid.push_back(Pid(HexPid::h0297));
			}
			if (binary[i] == '1' && i == 23)
			{
				pid.push_back(Pid(HexPid::h0198));
				pid.push_back(Pid(HexPid::h0298));
			}
			if (binary[i] == '1' && i == 24)
			{
				pid.push_back(Pid(HexPid::h0199));
				pid.push_back(Pid(HexPid::h0299));
			}
			if (binary[i] == '1' && i == 25)
			{
				pid.push_back(Pid(HexPid::h019A));
				pid.push_back(Pid(HexPid::h029A));
			}
			if (binary[i] == '1' && i == 26)
			{
				pid.push_back(Pid(HexPid::h019B));
				pid.push_back(Pid(HexPid::h029B));
			}
			if (binary[i] == '1' && i == 27)
			{
				pid.push_back(Pid(HexPid::h019C));
				pid.push_back(Pid(HexPid::h029C));
			}
			if (binary[i] == '1' && i == 28)
			{
				pid.push_back(Pid(HexPid::h019D));
				pid.push_back(Pid(HexPid::h029D));
			}
			if (binary[i] == '1' && i == 29)
			{
				pid.push_back(Pid(HexPid::h019E));
				pid.push_back(Pid(HexPid::h029E));
			}
			if (binary[i] == '1' && i == 30)
			{
				pid.push_back(Pid(HexPid::h019F));
				pid.push_back(Pid(HexPid::h029F));
			}
		}
	}
	/*PIDs supported [A1 - C0]*/
	p_Hexa = this->sendPid(Pid(HexPid::h01A0));

    found = p_Hexa.find("NO DATA");
    if (found!=std::string::npos)
    {
        throw std::runtime_error("ERROR: PID 01A0 not supported");
    }
	else if (p_Hexa.rfind("41A0", 0) != 0 )
	{
		throw std::runtime_error("ERROR: with bits returned");
	}
	else
	{
		p_Hexa.erase(0, 4);
		binary = HexToBin(p_Hexa);
		for (unsigned int i = 0; i < binary.size(); i++)
		{
			if (binary[i] == '1' && i == 0)
			{
				pid.push_back(Pid(HexPid::h01A1));
			}
			if (binary[i] == '1' && i == 1)
			{
				pid.push_back(Pid(HexPid::h01A2));
			}
			if (binary[i] == '1' && i == 2)
			{
				pid.push_back(Pid(HexPid::h01A3));
			}
			if (binary[i] == '1' && i == 3)
			{
				pid.push_back(Pid(HexPid::h01A4));
			}
			if (binary[i] == '1' && i == 4)
			{
				pid.push_back(Pid(HexPid::h01A5));
			}
			if (binary[i] == '1' && i == 5)
			{
				pid.push_back(Pid(HexPid::h01A6));
			}
		}
	}
	/*PIDs supported [C1 - E0]*/
	p_Hexa = this->sendPid(Pid(HexPid::h01C0));

    found = p_Hexa.find("NO DATA");
    if (found!=std::string::npos)
    {
        throw std::runtime_error("ERROR: PID 01C0 not supported");
    }
	else if (p_Hexa.rfind("41C0", 0) != 0 )
	{
		throw std::runtime_error("ERROR: with bits returned");
	}
	else
	{
		p_Hexa.erase(0, 4);
		binary = HexToBin(p_Hexa);
		for (unsigned int i = 0; i < binary.size(); i++)
		{
			if (binary[i] == '1' && i == 0)
			{
				pid.push_back(Pid(HexPid::h01C3));
			}
			if (binary[i] == '1' && i == 1)
			{
				pid.push_back(Pid(HexPid::h01C4));
			}
		}
	}
	/*PIDs supported service 09 [09 - 20]*/
	p_Hexa = this->sendPid(Pid(HexPid::h0900));
	found = p_Hexa.find("NO DATA");
    if (found!=std::string::npos)
    {
        throw std::runtime_error("ERROR: PID 0900 not supported");
    }
	else if (p_Hexa.rfind("4900", 0) != 0 )
	{
		throw std::runtime_error("ERROR: with bits returned");
	}
	else
	{
		p_Hexa.erase(0, 4);
	
		binary = HexToBin(p_Hexa);
		for (unsigned int i = 0; i < binary.size(); i++)
		{
			if (binary[i] == '1' && i == 0)
			{
				pid.push_back(Pid(HexPid::h0901));
			}
			if (binary[i] == '1' && i == 1)
			{
				pid.push_back(Pid(HexPid::h0902));
			}
			if (binary[i] == '1' && i == 2)
			{
				pid.push_back(Pid(HexPid::h0903));
			}
			if (binary[i] == '1' && i == 3)
			{
				pid.push_back(Pid(HexPid::h0904));
			}
			if (binary[i] == '1' && i == 4)
			{
				pid.push_back(Pid(HexPid::h0905));
			}
			if (binary[i] == '1' && i == 5)
			{
				pid.push_back(Pid(HexPid::h0906));
			}
			if (binary[i] == '1' && i == 6)
			{
				pid.push_back(Pid(HexPid::h0907));
			}
			if (binary[i] == '1' && i == 7)
			{
				pid.push_back(Pid(HexPid::h0908));
			}
			if (binary[i] == '1' && i == 8)
			{
				pid.push_back(Pid(HexPid::h0909));
			}
			if (binary[i] == '1' && i == 9)
			{
				pid.push_back(Pid(HexPid::h090A));
			}
			if (binary[i] == '1' && i == 10)
			{
				pid.push_back(Pid(HexPid::h090B));
			}
		}
	}
	return pid;
}

std::string Device::HexToBin(std::string hexPid)
{
    long int i = 0;
	std::string arr = "";
	

	while (hexPid[i]) {

		switch (hexPid[i]) {
		case '0':

			arr.append("0000");
			break;
		case '1':

			arr.append("0001");
			break;
		case '2':

			arr.append("0010");
			break;
		case '3':

			arr.append("0011");
			break;
		case '4':
			arr.append("0100");
			break;
		case '5':

			arr.append("0101");
			break;
		case '6':

			arr.append("0110");
			break;
		case '7':

			arr.append("0111");
			break;
		case '8':

			arr.append("1000");
			break;
		case '9':

			arr.append("1001");
			break;
		case 'A':
		case 'a':

			arr.append("1010");
			break;
		case 'B':
		case 'b':

			arr.append("1011");
			break;
		case 'C':
		case 'c':

			arr.append("1100");
			break;
		case 'D':
		case 'd':

			arr.append("1101");
			break;
		case 'E':
		case 'e':

			arr.append("1110");
			break;
		case 'F':
		case 'f':

			arr.append("1111");
			break;
		default:
			std::cout << "\nInvalid hexadecimal digit "<< hexPid[i];
		}
		i++;
	}
	return arr;
}
std::string Device::sendPid(Pid const& pid)
{
    return this->sendOBD(pid.getPidString());
}

/*
Pid diagnostic(ClientSocket client_socket)
{

}*/
