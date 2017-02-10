##################################################
#		Compile
##################################################

CC = g++

##################################################
#		Directories
##################################################
SRCDIR = src
BUILDDIR = build
BINDIR = bin/
INC = -I include/
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
	$(CC) $(INC) $(BOOSTLIB) -o $@ $^

$(BUILDDIR)/%.o: $(SRCDIR)/%.cpp
	@echo "Compiling " $@
	$(CC) $(INC) $(BOOSTLIB) -c -o $@ $^

clean:
	rm $(addprefix $(BUILDDIR)/, $(OBJECTS))
	@echo "Deleted object files"
	rm $(BINDIR)main.exe
	@echo "Deleted binary file"

.PHONY: all clean
