//
// Created by Tile Tyuuki on 09.11.2022.
//

#ifndef VECTOR_HPP
# define VECTOR_HPP

#include <iostream>

namespace ft {
	template< class T, class Alloc = std::allocator<T> >
	class vector {
	public:
		/*typedefs*/
		typedef std::size_t size_type;
		typedef T value_type;
		typedef Alloc allocator_type;
		typedef typename std::allocator<T>::reference reference;
		typedef typename std::allocator<T>::const_reference const_reference;
		typedef typename std::allocator<T>::pointer pointer;
		typedef typename std::allocator<T>::const_pointer const_pointer;

		/*constructors and destructor*/
		vector( const allocator_type& alloc = allocator_type() );
		vector ( size_type n, const value_type& val = value_type(), const allocator_type& alloc = allocator_type() );

		/*methods*/
		size_type size( void ) const;
		size_type capacity( void ) const;
		bool empty( void ) const;

	private:
		size_type _size;
		size_type _capacity;
		allocator_type _allocator;
		value_type *_arr;
	};
}

template< class T, class Alloc >
ft::vector<T, Alloc>::vector( const typename ft::vector<T, Alloc>::allocator_type& alloc ) \
		: _size( 0 ), _capacity( 0 ), _allocator( alloc ), _arr( nullptr ) {
}

template< class T, class Alloc >
ft::vector<T, Alloc>::vector( ft::vector<T, Alloc>::size_type n, \
					   const typename ft::vector<T, Alloc>::value_type& val, \
					   const typename ft::vector<T, Alloc>::allocator_type& alloc )
					   : _size( n ), _capacity( n * 2 ), _allocator( alloc ),
							  _arr( _allocator.allocate( _capacity * sizeof( value_type ) ) ) {
	for( size_type i = 0; i < this->_size; ++i ) {
		this->_arr[i] = val;
	}
}

template< class T, class Alloc >
typename ft::vector<T, Alloc>::size_type ft::vector<T, Alloc>::size( void ) const {
	return ( this->_size );
}

template< class T, class Alloc >
typename ft::vector<T, Alloc>::size_type ft::vector<T, Alloc>::capacity( void ) const {
	return ( this->_capacity );
}

template< class T, class Alloc >
bool ft::vector<T, Alloc>::empty( void ) const {
	return ( this->_size == 0 );
}

#endif
