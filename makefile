##################################################
#		Compile
##################################################

CC = g++

##################################################
#		Directories
##################################################
SRCDIR = src
BUILDDIR = build
INCLUDEDIR = include/
BINDIR = bin/
INC_FLAG = -I $(INCLUDEDIR)
LIB = lib/
BOOSTLIB = -I $(LIB)boost_1_63_0

##################################################
#		Compile Object Files
##################################################
SRCNAMES = $(notdir $(wildcard $(SRCDIR)/*.cpp))
OBJECTS = $(SRCNAMES:.cpp=.o)

all: $(BINDIR)main.exe
	@echo "Finished compiling the MicroEconomyTournament binary file"

$(BINDIR)main.exe: main.cpp $(addprefix $(BUILDDIR)/, $(OBJECTS))
	$(CC) $(BOOSTLIB) -o $@ $^ $(INC_FLAG)

$(BUILDDIR)/%.o: $(SRCDIR)/%.cpp #$(INCLUDEDIR)%.h
	@echo $(INC_FLAGS)
	@echo "Compiling " $@
	$(CC) $(INC_FLAG) $(BOOSTLIB) -c -o $@ $^

clean:
	rm $(addprefix $(BUILDDIR)/, $(OBJECTS))
	@echo "Deleted object files"


.PHONY: all clean
