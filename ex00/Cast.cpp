/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cast.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 16:56:09 by ziloughm          #+#    #+#             */
/*   Updated: 2023/03/07 21:54:16 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cast.hpp"

/********************************************************************/
/*                     Constructors  and Destructor                 */
/********************************************************************/

Cast::Cast()
{
    //std::cout << "Cast Default constructor called" << std::endl;
}

Cast::Cast(std::string const & in):_input(in), _val(0.0), _e(false)
{
    char *end = NULL;

    //std::cout << "Cast Parameter constroctur called" << std::endl;
    _val = std::strtod(_input.c_str(), &end);
    if((_val == 0.0 && _input[0] != '+' && _input[0] != '-' && !std::isdigit(_input[0])) 
    || ( static_cast<std::string>(end).length() && std::strcmp(end, "f")))
        _e = true;
    
}

Cast::Cast(Cast const &ob)
{
    //std::cout << "Cast Copy constroctur called" << std::endl;
    *this = ob;
}

Cast::~Cast()
{
    //std::cout << "Cast Destructor called " << std::endl;
}
/********************************************************************/



/********************************************************************/
/*                    Assignment Operator Overload                  */
/********************************************************************/

Cast & Cast::operator=(Cast const &ob)
{
    //std::cout << "Cast Copy assignment operator called" << std::endl;
    this->_input = ob.getInput();
    this->_val = ob.getVal();
    this->_e = ob.getError();
    return (*this);
}

/********************************************************************/




/********************************************************************/
/*                  Getters and Setters functions                   */
/********************************************************************/


std::string Cast::getInput(void) const
{    
    return (this->_input);
}

double Cast::getVal(void) const
{    
    return (this->_val);
}

bool Cast::getError(void) const
{    
    return (this->_e);
}


/********************************************************************/




/********************************************************************/
/*                          Public functions                        */
/********************************************************************/


char Cast::_toChar() const
{
    return (static_cast<char>(_val));
}

void Cast::_printChar() const
{
    std::cout << "char: ";
    if (std::isnan(_val) || std::isinf(_val))
        std::cout << IM;
    else if (std::isprint(_toChar()))
        std::cout << this->_toChar();
    else
        std::cout << ND;
    std::cout << std::endl;
}


int Cast::_toInt() const
{
    return (static_cast<int>(_val));
}

void Cast::_printInt() const
{
    std::cout << "int: ";
    if (std::isnan(_val) || std::isinf(_val))
        std::cout << IM;
    else
        std::cout << this->_toInt();
    std::cout << std::endl;
}



float Cast::_toFloat() const
{
    return (static_cast<float>(_val));
}

double Cast::_toDouble() const
{
    return (static_cast<double>(_val));
}

void Cast::_printOther() const
{
    if (std::isnan(_val) || std::isinf(_val))
    {
        std::cout << "float: " << std::showpos << this->_toFloat() << "f" << std::endl;
        std::cout << "double: " << std::showpos << this->_toDouble() << std::endl;
        return ;
    }
    if (this->_toFloat() == static_cast<int>(this->_toFloat()))
        std::cout << "float: " << this->_toFloat() << ".0f" << std::endl;
    else
        std::cout << "float: " << this->_toFloat()<< "f" << std::endl;
    if (this->_toDouble() == static_cast<int>(this->_toDouble()))
        std::cout << "double: " << std::setprecision(std::numeric_limits<float>::digits10) 
        << this->_toDouble() << ".0" << std::endl;
    else
        std::cout << "double: " << std::setprecision(std::numeric_limits<double>::digits10) 
        << this->_toDouble() << std::endl;
}

/********************************************************************/


std::ostream & operator<<(std::ostream & o, Cast const &ref)
{
    if (ref.getError())
    {
        std::cout << "Error while casting your input" << std::endl;
        return o;
    }
    ref._printChar();
    ref._printInt();
    ref._printOther();
    return o;
}
