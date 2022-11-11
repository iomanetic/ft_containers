//
// Created by Tile Tyuuki on 11.11.2022.
//

//Main for test c++ classes etc.

#include <memory>
#include <iostream>
int main( void ) {
	std::allocator<int> alloc;
	int *p;

	p = alloc.allocate( sizeof(int) * 10);
	for(int i = 0; i < 112; i++) {
		p[i] = i;
	}
	for(int i = 0; i < 11; ++i) {
		std::cout << p[i] << std::endl;
	}
	alloc.deallocate(p, 10);
}