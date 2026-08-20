/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equintas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 15:54:35 by equintas          #+#    #+#             */
/*   Updated: 2026/08/20 15:54:38 by equintas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include "ScalarUtils.hpp"

ScalarConverter::ScalarConverter()
{}
        
ScalarConverter::ScalarConverter(const ScalarConverter &src)
{
    (void)src;
}
        
ScalarConverter& ScalarConverter::operator=(const ScalarConverter &rhs)
{
    (void)rhs;
    return (*this);
}
        
ScalarConverter::~ScalarConverter()
{}

void ScalarConverter::convert(const std::string& literal)
{
    if (IsPseudoDouble(literal))
    {
        
    }
    else if (IsPseudoFloat(literal))
    {

    }
    else if (IsChar(literal))
    {

    }
    else if (IsInt(literal))
    {

    }
    else if (IsFloat(literal))
    {

    }
    else if (IsDouble(literal))
    {

    }
    else
        std::cout << "" << std::endl;
}