/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 18:03:16 by ziloughm          #+#    #+#             */
/*   Updated: 2023/03/02 18:08:37 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#   ifndef HEADER_HPP
# define HEADER_HPP

#include <iostream>

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


Base * generate(void);
void identify(Base* p);
void identify(Base& p);

#   endif