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

#include "elm327.h"
#include <stdexcept>
#include <iostream>

extern bool g_verbose;

Elm327::Elm327(Interface* communication_medium)
    :Device(communication_medium)
{
    initialization();
}

void Elm327::initialization()
{
    std::string answer;
    communication_medium_->sendMessage("ATD\r");
    answer = communication_medium_->receive('>');
    communication_medium_->sendMessage("ATD\r");
    answer = communication_medium_->receive('>');
    communication_medium_->sendMessage("ATZ\r");
    answer = communication_medium_->receive('>');
    if (answer.find("ELM327") == std::string::npos)
    {
        throw std::runtime_error("elm initialization failed: elm answered to ATZ: " + answer + " but it must contain: ELM327");
    }
    communication_medium_->sendMessage("ATE0\r");
    answer = communication_medium_->receive('>');
    if (answer.find("OK") == std::string::npos)
    {
        throw std::runtime_error("elm initialization failed: elm answered to ATE0: " + answer + " but it must contain: OK");
    }
    communication_medium_->sendMessage("ATL0\r");
    answer = communication_medium_->receive('>');
    if (answer.find("OK") == std::string::npos)
    {
        throw std::runtime_error("elm initialization failed: elm answered to ATE0: " + answer + " but it must contain: OK");
    }
    communication_medium_->sendMessage("ATS0\r");
    answer = communication_medium_->receive('>');
    if (answer.find("OK") == std::string::npos)
    {
        throw std::runtime_error("elm initialization failed: elm answered to ATE0: " + answer + " but it must contain: OK");
    }
    communication_medium_->sendMessage("ATH0\r");
    answer = communication_medium_->receive('>');
    if (answer.find("OK") == std::string::npos)
    {
        throw std::runtime_error("elm initialization failed: elm answered to ATE0: " + answer + " but it must contain: OK");
    }
    communication_medium_->sendMessage("ATSP0\r");
    answer = communication_medium_->receive('>');
    if (answer.find("OK") == std::string::npos)
    {
        throw std::runtime_error("elm initialization failed: elm answered to ATE0: " + answer + " but it must contain: OK");
    }
}

std::string Elm327::sendOBD(std::string obd_code)
{
    std::string answer;
    communication_medium_->sendMessage(obd_code + '\r');
    answer = communication_medium_->receive('>');
    /* remove the SEARCHING...\r */
    std::string to_erase = "SEARCHING...\r";
    size_t pos = answer.find(to_erase);
    if (pos != std::string::npos)
    {
        answer.erase(pos, to_erase.length());
    }

    /* remove every thing after first \r */
    pos = answer.find("\r");
    if (pos != std::string::npos)
    {
        answer.erase(answer.begin()+pos, answer.end());
    }

    if (g_verbose)
    {
        std::cout << "obd code: " + obd_code + " sent, answer is: " + answer << std::endl;
    }

    return answer;
}
