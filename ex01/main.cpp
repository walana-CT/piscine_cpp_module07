/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <rficht@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 10:48:57 by rficht            #+#    #+#             */
/*   Updated: 2024/02/19 08:59:49 by rficht           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include"iter.hpp"

int main()
{
	
	int arr1[] = {1, 2, 3, 4, 5, 6};
	std::string arr2[] = {"figue", "banane", "noix"};
	
	iter(arr1, 6, printTest);
	std::cout << std::endl;
	iter(arr2, 3, printTest);
	std::cout << std::endl;
	iter(arr2, 3, constprintTest);

	
	const int arr3[] = {1, 2, 3, 4, 5, 6};
	iter(arr3, 6, printTestConst);

	return 0;
}*/

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

int main() {
  int tab[] = { 0, 1, 2, 3, 4 };
  Awesome tab2[5];

  iter( tab, 5, print<const int> );
  iter( tab2, 5, print<Awesome> );

  return 0;
}