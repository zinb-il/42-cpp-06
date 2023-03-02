/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 17:38:20 by ziloughm          #+#    #+#             */
/*   Updated: 2023/03/02 17:40:13 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#   ifndef DATA_HPP
# define DATA_HPP

#include <iostream>

struct Data
{
   int  nb;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);


#   endif