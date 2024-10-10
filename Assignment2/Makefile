output: main.cpp assignment.cpp
	g++ main.o assignment.o -o output

main.o: main.cpp
	g++ -c main.cpp

assignment.o: assignment.cpp assignmnet.hpp
	g++ -c assignment.cpp

clean:
	rm *.o output
