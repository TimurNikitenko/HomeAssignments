/* Timur Nikitenko st138275@student.spbu.ru
 * main file with two functions
 */

#include <iostream>
#include "assignment.hpp"

int main() {
	std::string file_name;
        std::cout << "Enter file name: " << std::endl;
        std::cin >> file_name;
	
	read_write(file_name);

	std::string record;
	std::cout << "Enter expression in reverse polish notation: " << std::endl;
	std::getline (std::cin, record);
	int result = calculate_polish(record);

	std::cout << "Here's the result " << result << std::endl;

	return 0;
}
