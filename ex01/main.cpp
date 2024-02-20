/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <rficht@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 10:48:57 by rficht            #+#    #+#             */
/*   Updated: 2024/02/20 11:16:36 by rficht           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"


class Awesome
{
  public:
    Awesome( void ) : _n( 42 ) { return; }
    int get( void ) const { return this->_n; }
  private:
    int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
{
  o << rhs.get();
  return o;
}

template< typename T >
void print( T& x )
{
  std::cout << x << std::endl;
  return;
}

int main()
{
	
	int arr1[] = {1, 2, 3, 4, 5, 6};
	std::string arr2[] = {"figue", "banane", "noix"};
	
	iter(arr1, 6, printTest<int>);
	std::cout << std::endl;
	iter(arr2, 3, printTest<std::string>);
	std::cout << std::endl;
	iter(arr2, 3, constprintTest<std::string>);

	const int arr3[] = {1, 2, 3, 4, 5, 6};
	iter(arr3, 6, printTestConst<int>);

	return 0;

	int tab[] = { 0, 1, 2, 3, 4 };
	Awesome tab2[5];

	iter( tab, 5, print<const int> );
	iter( tab2, 5, print<Awesome> );

	return 0;
}