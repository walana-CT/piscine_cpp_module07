/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <rficht@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 10:29:58 by rficht            #+#    #+#             */
/*   Updated: 2024/02/20 15:36:04 by rficht           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <cstdlib>
#include <iostream>

template <class T>
void printTestConst(const T elem)
{
	std::cout << elem << std::endl;
}

template <class T>
void printTest(T elem)
{
	std::cout << elem << std::endl;
}

template <class T>
void constprintTest(const T elem)
{
	std::cout << elem << std::endl;
}

template <typename T, typename FUNC>
void iter(T* array, size_t n, FUNC func)
{
	if (!array)
		return ;
	for (size_t i = 0; i < n; i++)
		func(array[i]);
}

#endif