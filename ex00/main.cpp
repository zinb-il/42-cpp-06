/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 16:44:17 by ziloughm          #+#    #+#             */
/*   Updated: 2023/03/02 14:50:35 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cast.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
        std::cout << "Nombre inavlid de paramètres" << std::endl;
    else
        std::cout << Cast(av[1]);
    return 0;
}