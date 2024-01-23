/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <rficht@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 10:48:57 by rficht            #+#    #+#             */
/*   Updated: 2024/01/22 10:57:02 by rficht           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"iter.hpp"

int main()
{
	
	int arr1[] = {1, 2, 3, 4, 5, 6};
	std::string arr2[] = {"figue", "banane", "noix"};

	
	iter(arr1, 6, printTest);
	std::cout << std::endl;
	iter(arr2, 3, printTest);	
	std::cout << std::endl;

	
	return 0;
}
