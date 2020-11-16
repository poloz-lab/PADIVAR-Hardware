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
