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

#ifndef ELM327_h
#define ELM327_h

/*!
 * \file elm327.h
 * \brief handle elm327 devices
 */

#include "device.h"

/*!
 * \class Elm327
 * \brief class for handling Elm327 devices
 */
class Elm327 : public Device
{
private:
    /*!
     * \brief forbid access to default constructor
     */
    Elm327();
public:
    /*!
     * \brief constructor
     * \param communication_medium : interface used to communicate with the device
     */
    Elm327(Interface* communication_medium);

    /*!
     * \brief initialization of the Elm327, send some AT code in order to communicate easily
     */
    void initialization();

    /*!
     * \brief send an obd code to the vehicle through the ELM327
     * \param obd_code : obd_code to send (string)
     * \return the answer from the vehicle cleaned
     */
    std::string sendOBD(std::string obd_code);
};

#endif
