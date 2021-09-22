CXX = g++
CXXFLAGS = -std=c++17 -Wall

all: test

clean:
	rm test.o test

test: test.o test.cpp
	$(CXX) $(CXXFLAGS) test.cpp test.o -o test

test.o: test.cpp
	$(CXX) $(CXXFLAGS) -c test
