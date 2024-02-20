/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <rficht@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 10:10:14 by rficht            #+#    #+#             */
/*   Updated: 2024/02/20 15:34:52 by rficht           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
# define UTILS_HPP

# include <iostream>

template <class T> 
const T& max(const T& a, const T& b)
{	
	return (b < a ) ? a : b;
}

template <class T> 
const T& min(const T& a, const T& b)
{	
	return !(b <= a) ? a : b;
}

template <typename T>
void swap(T& val1, T& val2)
{
	T temp = val2;

	val2 = val1;
	val1 = temp;

	return;
}

#endif
