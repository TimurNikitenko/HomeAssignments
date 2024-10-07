output: sayhello.o hello.o
	g++ sayhello.o hello.o -o output

hello.o: hello.cpp
	g++ -c hello.cpp

sayhello.o: sayhello.cpp sayhello.hpp
	g++ -c sayhello.cpp

clean:
	rm *.o output

