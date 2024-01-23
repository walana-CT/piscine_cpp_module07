/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <rficht@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:45:05 by rficht            #+#    #+#             */
/*   Updated: 2024/01/23 16:56:17 by rficht           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
int main()
{
	Array<int> arr1 = Array<int>(6, 10);
	Array<int> empty = Array<int>();

	arr1[0] = 4;
	arr1[1] = 8;
	arr1[2] = 1;
	arr1[3] = 5;
	arr1[4] = 1;
	arr1[5] = 6;
	arr1[6] = 2;
	arr1[7] = 3;	
	arr1[8] = 4;
	arr1[9] = 2;

	Array<int> arr2 = arr1;

	std::cout << arr2[0] <<  arr2[1] << arr2[2] << arr2[3] << arr2[4] << arr2[5] << arr2[6] << arr2[7] << arr2[8] << arr2[9] << std::endl;
	
	return 0;
}
