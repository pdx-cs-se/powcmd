CXX = g++
CXXFLAGS = -Wall -Werror -g

powcmd: powcmd.cc libpow.a
	$(CXX) $(CXXFLAGS) -o powcmd powcmd.cc libpow.a

libpow.a: pow.o
	ar rcv libpow.a pow.o

pow.o: pow.cc pow.h
	$(CXX) $(CXXFLAGS) -c pow.cc

clean:
	-rm -f powcmd pow.o libpow.a
