# Copyright or © or Copr. PST PADIVAR Hardware (2020)
# contributors:
# QuentinC <quclement@et.esiea.fr>
# Nulan <novais@et.esiea.fr>
# Mathilde <mroyer@et.esiea.fr>
# Poloz <polozfr@laposte.net>
# MathysG <gageot@et.esiea.fr>
# 
# This software is a computer program whose purpose is to diagnose a vehicle.
# 
# This software is governed by the CeCILL license under French law and
# abiding by the rules of distribution of free software.  You can  use, 
# modify and/ or redistribute the software under the terms of the CeCILL
# license as circulated by CEA, CNRS and INRIA at the following URL
# "http://www.cecill.info". 
# 
# As a counterpart to the access to the source code and  rights to copy,
# modify and redistribute granted by the license, users are provided only
# with a limited warranty  and the software's author,  the holder of the
# economic rights,  and the successive licensors  have only  limited
# liability. 
# 
# In this respect, the user's attention is drawn to the risks associated
# with loading,  using,  modifying and/or developing or reproducing the
# software by the user in light of its specific status of free software,
# that may mean  that it is complicated to manipulate,  and  that  also
# therefore means  that it is reserved for developers  and  experienced
# professionals having in-depth computer knowledge. Users are therefore
# encouraged to load and test the software's suitability as regards their
# requirements in conditions enabling the security of their systems and/or 
# data to be ensured and,  more generally, to use and operate it in the 
# same conditions as regards security. 
#
# The fact that you are presently reading this means that you have had
# knowledge of the CeCILL license and that you accept its terms.

# Compiler
CC=g++
# debug options
DOPT = -Wall -g
# release options
ROPT = -o3
# release exe name
EXE = padivarHardware.bin
# debug exe name
DEXE = padivarHardware_d.bin

# source files
SRC = $(wildcard src/*.cpp)

# headers
HDR = $(wildcard src/*.h)

# object files for debug version
DOBJ = $(SRC:.cpp=_d.o)

# object files for release version
OBJ = $(SRC:.cpp=.o)

# list of librairies to be linked
LIBS =

# recipes

#--------------
# release rules

all: $(EXE)

$(EXE): $(OBJ)
	$(CC) $(ROPT) -o $@ $(OBJ) $(LIBS)

%.o : %.cpp $(HDR)
	$(CC) $(ROPT) $(LIBS) -c $< -o $@

#--------------
# debug rules

debug: $(DEXE)

$(DEXE): $(DOBJ) $(HDR)
	$(CC) $(DOPT) -o $@ $(DOBJ) $(LIBS)

%_d.o : %.cpp $(HDR)
	$(CC) $(DOPT) $(LIBS) -c $< -o $@

#--------------
# clean rules

clean:
	-rm $(OBJ) $(DOBJ) 2>/dev/null || true

# memo internal macro
# $@ --> The file name of the target of the rule.
# $^ --> he names of all the prerequisites, with spaces between them.
# $< The name of the first prerequisite.
