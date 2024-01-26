CXX = g++
CXXFLAGS = -std=c++2a -Wall -Werror

all: test main

clean: 
	rm test main

test: test.cpp
	$(CXX) $(CXXFLAGS) test.cpp -o test

main: main.cpp
	$(CXX) $(CXXFLAGS) main.cpp -o main