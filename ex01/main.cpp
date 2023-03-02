/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 16:44:17 by ziloughm          #+#    #+#             */
/*   Updated: 2023/03/02 17:53:46 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int main(void)
{
    try
    {
        struct Data data;
        struct Data data1;
        uintptr_t r;
        
        data.nb = -8;
        std::cout << data.nb << std::endl;
        r = serialize(&data);
        data1 = *(deserialize(r));
        std::cout << "using function :" << (deserialize(r))->nb  << std::endl;
        std::cout << "data 1 :" << data1.nb  << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    
    return 0;
}