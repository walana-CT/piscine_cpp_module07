/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <rficht@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 09:59:30 by rficht            #+#    #+#             */
/*   Updated: 2024/01/22 10:23:09 by rficht           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SWAP_HPP
# define SWAP_HPP

template <typename T>
void swap(T& val1, T& val2)
{
	T temp = val2;

	val2 = val1;
	val1 = temp;

	return;
}

#endif
