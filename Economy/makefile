OBJECTS = Agents/agent.o

all: main

main: $(OBJECTS)
	g++ -o main main.cpp $(OBJECTS)

Agents/agent.o:
	$(MAKE) -C Agents

.PHONY: Agents/agent.o all
