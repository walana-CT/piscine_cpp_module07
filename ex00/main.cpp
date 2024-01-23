/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <rficht@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 10:08:32 by rficht            #+#    #+#             */
/*   Updated: 2024/01/22 10:25:26 by rficht           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"utils.hpp"

int main()
{
	int val1 = 5;
	int val2 = 7;


	std::cout << "val1: " << val1 << " val2: " << val2 << std::endl;
	std::cout << "Swapping values" << std::endl;
	swap(val1 ,val2 );	
	std::cout << "val1: " << val1 << " val2: " << val2 << std::endl;
	
	
	std::cout << "min val" << min(val1, val2) << std::endl;
	std::cout << "max val" << max(val1, val2) << std::endl;

	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;

	
	return 0;
}
