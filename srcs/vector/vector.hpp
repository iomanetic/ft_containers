//
// Created by Tile Tyuuki on 09.11.2022.
//

#ifndef VECTOR_HPP
# define VECTOR_HPP

#include <iostream>

namespace ft {
	template<typename T>
	class vector {
	public:
		/*typedefs*/
		typedef std::size_t size_type;
		typedef T value_type;

		/*constructors and destructor*/
		vector( void );
		/*methods*/
		size_type size( void ) const;

	private:
		T *_arr;
		size_type _size;
		size_type _capacity;
	};
}

template<typename T>
typename ft::vector<T>::size_type ft::vector<T>::size( void ) const {
	return ( this->_size );
}

template<typename T>
ft::vector<T>::vector( void )
	: _arr( nullptr ), _size( 0 ), _capacity( 0 ) {

}

#endif
