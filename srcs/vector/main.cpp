//
// Created by Tile Tyuuki on 09.11.2022.
//

#include "vector.hpp"

int main( void ) {
	std::cout << "Default constructor test" << std::endl;
	std::cout << "------------------------" << std::endl;
	{
		ft::vector<int> vector;
		std::cout << "Info about vector:" << std::endl;
		std::cout << "Size of vector:" << vector.size() << std::endl;
		std::cout << "Capacity of vector:" << vector.capacity() << std::endl;
		std::cout << "Empty() method of vector:" << vector.empty() << std::endl;
	}
	std::cout << "------------------------" << std::endl;
	std::cout << std::endl;

	std::cout << "First constructor test" << std::endl;
	std::cout << "------------------------" << std::endl;
	{
		ft::vector<int> vector(100, 3);
		std::cout << "Info about vector:" << std::endl;
		std::cout << "Size of vector:" << vector.size() << std::endl;
		std::cout << "Capacity of vector:" << vector.capacity() << std::endl;
		std::cout << "Empty() method of vector:" << vector.empty() << std::endl;
	}
	std::cout << "------------------------" << std::endl;
	std::cout << std::endl;
}