#include <iostream>
#include "cmake_gitsub.hpp"

int main(int argc, char** argv) {
	std::cout << "Hello World!" << std::endl;
	cmake_gitsub::food::Food f;
	f.Eat();
	return 0;
}