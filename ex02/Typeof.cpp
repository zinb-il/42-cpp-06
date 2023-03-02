/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Typeof.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 18:08:57 by ziloughm          #+#    #+#             */
/*   Updated: 2023/03/02 18:32:40 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"


Base * generate(void)
{
    int r;
    
    srand((unsigned) time(NULL));
    r = rand() % 3 + 1;
    switch (r)
    {
        case 1:
            return new A();
        case 2:
            return new B();
        case 3:
            return new C();
        default:
            return new Base();
    }
}

void identify(Base* p)
{
    if (dynamic_cast<A *>(p))
        std::cout << "C'est un pointeur de la class A" << std::endl;
    else if (dynamic_cast<B *>(p))
        std::cout << "C'est un pointeur de la class B" << std::endl;
    else if (dynamic_cast<C *>(p))
        std::cout << "C'est un pointeur de la class C" << std::endl;
    else
        std::cout << "C'est un pointeur de la class Base" << std::endl;
}

void identify(Base& p)
{
    try
    {
        A a = dynamic_cast<A &>(p);
        std::cout << "C'est une reference de la class A" << std::endl;
    }
    catch(const std::exception& e)
    {
    }
    try
    {
        B b = dynamic_cast<B &>(p);
        std::cout << "C'est une reference de la class B" << std::endl;
    }
    catch(const std::exception& e)
    {
    }
    try
    {
        C c = dynamic_cast<C &>(p);
        std::cout << "C'est une reference de la class C" << std::endl;
    }
    catch(const std::exception& e)
    {
    }
    
}