/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <rficht@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:32:29 by rficht            #+#    #+#             */
/*   Updated: 2024/02/20 16:18:34 by rficht           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define  ARRAY_HPP

#include <cstdlib>
#include <iostream>
#define MAX_VAL 750

template <typename T>
class Array
{
private:
	T* 						elements;
	unsigned int			n;
	
public:
	Array() : elements(new T[0]), n(0) {}
	~Array() { delete[] elements; }


	Array(unsigned int size) : elements(new T[size]()), n(size)
	{}

	Array(const Array& rhs)
	{
		this->elements = NULL;
		*this = rhs;
	}

	T& operator[](unsigned int index) 
	{
		if (index < this->n)
			return elements[index];
		else 
			throw std::out_of_range("Index out of range");
	}

	const T& operator[](unsigned int index) const
	{
		if (index < this->n)
			return elements[index];
		else
			throw std::out_of_range("Index out of range");
	}

	Array& operator = (const Array& rhs)
	{

		
		if (this != &rhs)
		{
			if (elements)
				delete [] elements;
	
			this->elements = new T[rhs.size()]();
			this->n = rhs.size();
			for (unsigned int i = 0; i < this->n; ++i) 
				elements[i] = rhs[i];
		}
		
		return *this; 
	}

	unsigned int size() const
	{
		return this->n;
	}

};

#endif

