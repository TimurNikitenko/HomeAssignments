#include <iostream>
#include <string>
#include "sayhello.hpp"

void SayHello() {
	std::cout << "Hello, world" << std::endl;

	std::string input;

	while(true) {
		std::cout <<"Enter anything: ";
	        std::getline(std::cin, input);
		std::cout <<"Hello, " << input << std::endl;
	}
}


