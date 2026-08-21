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
#include "PrintUtils.hpp"

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
        PrintPseudoDouble(literal);
    else if (IsPseudoFloat(literal))
        PrintPseudoFloat(literal);
    else if (IsChar(literal))
        PrintChar(literal);
    else if (IsInt(literal))
        PrintInt(literal);
    else if (IsFloat(literal))
        PrintFloat(literal);
    else if (IsDouble(literal))
        PrintDouble(literal);
    else
        std::cout << "Erro! Formato inválido!" << std::endl;
}
