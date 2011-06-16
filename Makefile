all: fixturegen
	
fixturegen: main.o fixturegenerator.o
	g++ main.o fixturegenerator.o -o fixturegen $(CXXFLAGS)

main.o: main.cpp fixturegenerator.h
	g++ -c $(CXXFLAGS) main.cpp

fixturegenerator.o: fixturegenerator.cpp fixturegenerator.h
	g++ -c $(CXXFLAGS) fixturegenerator.cpp

clean:
	rm -rf *o fixturegen

clean-all:
	rm -rf *o *~ fixturegen
