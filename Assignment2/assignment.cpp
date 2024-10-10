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

int polish_calculate(std::string record) {
        size = record.length();
	int* record_array  =  new int[size];
	int top = -1;
	int i = 0;

	while (i < size) {
		while (isspace(record[i])) {
			i++;
		}
		if (isdigit(record[i]) || (record[i] == '-' && isdigit(record[i+1]))) {
			int value = atoi(&record[i]);
			record_array[++top] = value;
			
			while (isdigit(record[i]) || record[i] == '-') {
				i++;
			}
		}

		else if (record[i] == '-' || record[i] == '+' || record[i] == '*' || record[i] == '/') {
			int a = record_array[top--];
			int b = record_array[top--];
			int res;

			switch (expression[i]) {
				case '+': res = a + b; break;
		                case '-': res = a - b; break;
			        case '*': res = a * b; break;
			        case '/': res = a * b; break;
			}

			record_array[++top] = res;
			i++;
		}
	}
        
        result = record_array[top];
        delete[] record_array;
	return result;
}

