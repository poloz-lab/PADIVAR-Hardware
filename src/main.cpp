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

#include <iostream>
#include "server_socket.h"
#include <getopt.h>
#include <cstring>
#include <string>

void usage(const char *argv0)
{
    const char *base = std::strrchr(argv0, '/');
    base = base ? base + 1 : argv0;
    std::cerr << "bad usage, further information: " + std::string(base) + " --help" <<std::endl;
}

void shortHelp()
{
    std::cout << "PADIVAR Hardware vehicle diagnostic tool" <<std::endl;
    std::cout << "-h print this help message" << std::endl;
    std::cout << "--help print long help" << std::endl;
}

void longHelp()
{
    std::cout << "PADIVAR Hardware vehicle diagnostic tool" <<std::endl;
    std::cout << "-h print short help" << std::endl;
    std::cout << "--help print this help message" << std::endl;
}

int main(int argc, char** argv)
{
    int option;
    struct option long_options[] = { // struct to tell what to do for long options
        {"help", no_argument, NULL, 1000},
        {0}
    };

    /* exit with an error if no option is specified */
    if (argc < 2)
    {
        usage(argv[0]);
        return EXIT_FAILURE;
    }

    /* loop to process every option in command line */
    while ((option = getopt_long(argc, argv, "h", long_options, 0)) != -1)
    {
        switch(option)
        {
            case 'h':
                shortHelp();
                break;
            case 1000:
                longHelp();
                break;
            case '?':
                usage(argv[0]);
                break;
            default:
                break;
        }
    }
    return EXIT_SUCCESS;
}
