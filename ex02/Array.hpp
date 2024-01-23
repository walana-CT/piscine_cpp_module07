/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <rficht@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:32:29 by rficht            #+#    #+#             */
/*   Updated: 2024/01/23 14:22:14 by rficht           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>

template <typename T, size_t size>
class Array
{
private:
	T* elements;
public:
	Array() : elements(new T[size]) {}
	~Array() { delete[] elements; }

    Array(const T& initialValue) 
	{
        for (size_t i = 0; i < size; ++i) 
		{
            elements[i] = initialValue;
        }
    }

    T& operator[](size_t index) 
	{
        if (index < size)
		{
            return elements[index];
        } 
		else 
		{
            throw std::out_of_range("Index out of range");
        }
    }

    size_t size() const
	{
        return size;
	}
	
};

