/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <rficht@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 10:04:37 by rficht            #+#    #+#             */
/*   Updated: 2024/01/22 10:22:49 by rficht           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MIN_HPP
# define MIN_HPP


template <class T> 
const T& min(const T& a, const T& b)
{	
	return !(b<a)?a:b;
}


#endif


