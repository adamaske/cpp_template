#include "cmake_gitsub.hpp"

#include <iostream>
cmake_gitsub::food::Food::Food() {
	std::cout << "Food ready to eat" << std::endl;
	
}

void cmake_gitsub::food::Food::Eat() {
	std::cout << "Ate food!" << std::endl;
}