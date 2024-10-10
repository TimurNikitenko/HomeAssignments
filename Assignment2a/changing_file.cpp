/* Nikitenko Timur st128375@student.spbu.ru
 * first part of second home assignment
 */

#include <iostream>
#include <fstream>
#include <filesystem>

int main() {
	std::string file_name;
	std::cout << "Enter file name: " << std::endl;
	std::cin >> file_name;

	std::ifstream infile;
	infile.open(file_name, std::ios::binary|std::ios::in);

	int size = std::filesystem::file_size(file_name);
	int buffer[size];

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
	
	outfile.close();

	return 0;
}
