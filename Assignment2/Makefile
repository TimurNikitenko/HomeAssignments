output: main.o assignment.o
	g++ main.o assignment.o -o output

main.o: main.cpp
	g++ -c main.cpp

assignment.o: assignment.cpp assignment.hpp
	g++ -c assignment.cpp

clean:
	rm *.o output
