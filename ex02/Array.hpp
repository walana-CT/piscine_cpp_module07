/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <rficht@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:32:29 by rficht            #+#    #+#             */
/*   Updated: 2024/01/23 16:54:28 by rficht           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>

template <typename T>
class Array
{
private:
	T* 				elements;
	size_t 			n;
	
public:
	Array() : elements(new T[0]), n(0) {}
	~Array() { delete[] elements; }

	Array(const T& initialValue, size_t size) : elements(new T[size]), n(size)
	{
		for (size_t i = 0; i < size; ++i) 
			elements[i] = initialValue;
	}

	Array(const Array& rhs)
	{
		*this = rhs;
	}

    T& operator[](size_t index) 
	{
		if (index < this->n)
			return elements[index];
		else 
			throw std::out_of_range("Index out of range");
    }

	Array& operator = (const Array& rhs)
	{
		this->elements = new T[rhs.size()];
		this->n = rhs.size();
		for (size_t i = 0; i < this->n; ++i) 
			elements[i] = rhs.getElem(i);
		return *this; 
	}

    size_t size() const
	{
        return this->n;
	}

	const T& getElem(const size_t& index) const
	{
		if (index < this->n)
			return elements[index];
		else 
			throw std::out_of_range("Index out of range");
	}
};

