/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cast.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 16:36:40 by ziloughm          #+#    #+#             */
/*   Updated: 2023/03/02 16:18:09 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#   ifndef CAST_HPP
# define CAST_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <cmath>

#define GRN "\033[0;32m"
#define WHT "\033[0;0m"
#define RED "\033[0;31m"

#define IM "Impossible"
#define ND "Non displayable"


class Cast
{
    private:
        std::string _input;
        double      _val;
        bool        _e;
        Cast();
    public:
        ~Cast();
        Cast(std::string const & in);
        Cast(Cast const &ob);

        Cast & operator=(Cast const &ob);
        std::string getInput(void) const;
        double getVal(void) const;
        bool getError(void) const;
        char _toChar() const;
        int _toInt() const;
        float _toFloat() const;
        double _toDouble() const;
        void _printChar() const;
        void _printInt() const;
        void _printOther() const;
};

std::ostream & operator<<(std::ostream &o, Cast const &ref);

# endif