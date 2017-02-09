objects = agent.o

all: agent.o

agent.o: agent.cpp agent.h
	g++ -c agent.cpp

clean:
	rm $(objects)

.PHONY: clean all
