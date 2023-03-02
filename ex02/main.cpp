/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 16:44:17 by ziloughm          #+#    #+#             */
/*   Updated: 2023/03/02 18:33:53 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int main(void)
{
    Base*   b1;
    b1 = generate();
    identify(b1);
    identify(*b1);
    std::cout << std::endl;
    delete b1;
    return 0;
}