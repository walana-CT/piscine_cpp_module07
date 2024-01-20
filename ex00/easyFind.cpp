/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyFind.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <rficht@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 10:23:59 by rficht            #+#    #+#             */
/*   Updated: 2024/01/20 11:24:09 by rficht           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyFind.hpp"

template <typename T>
int easyFind(T cont, const int& val)
{
	int it = std::find(cont.begin(), cont.end(), val);

	return it;
}
