/* Nikitenko Timur st128375@student.spbu.ru
 * functions for second home assignment
 */

#include <iostream>
#include <fstream>
#include <filesystem>
#include <string>
#include "assignment.hpp"


int read_write(std::string file_name) {

	std::ifstream infile;
	infile.open(file_name, std::ios::binary|std::ios::in);

	int size = std::filesystem::file_size(file_name);
	int* buffer =  new int[size];

	std::cout << size << std::endl;

	infile.read((char *)&buffer, sizeof(buffer));
	infile.close();

	for (int i = 0; i < size; ++i) {
		int temp = buffer[i];
		buffer[i] = buffer[size-i];
		buffer[size-i] = temp;
	}

	std::ofstream outfile;
	outfile.open("temppdf.pdf", std::ios::binary|std::ios::out);
	
	delete[] buffer;
	outfile.close();

	return 0;
}

int calculate_polish(std::string record) {

	return 0;
}

