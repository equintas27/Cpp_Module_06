/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarUtils.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equintas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 13:23:07 by equintas          #+#    #+#             */
/*   Updated: 2026/08/21 13:23:12 by equintas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarUtils.hpp"
#include <iostream>


bool IsPseudoFloat(const std::string& literal)
{
    if (literal.empty())
        return (false);
    if (literal == "nanf" || literal == "-inff" || literal == "+inff")
        return (true);
    return (false);

}

bool IsPseudoDouble(const std::string& literal)
{
    if (literal.empty())
        return (false);
    if (literal == "nan" || literal == "-inf" || literal == "+inf")
        return (true);
    return (false);
}

bool IsChar(const std::string& literal)
{
    if (literal.length() == 1 && !std::isdigit(literal[0]))
        return (true);
    return (false);
}

bool IsInt(const std::string& literal)
{
    size_t i = 0;

    if (literal.empty())
        return (false);
    if (literal[i] == '-' || literal[i] == '+')
        i++;
    if (i == literal.length())
        return (false);
    while(i < literal.length())
    {
        if (!std::isdigit(literal[i]))
            return (false);
        i++;
    }
    return (true);
}


bool IsFloat(const std::string& literal)
{
    if (literal.length() <= 1 || (literal[literal.length() - 1] != 'f' && literal[literal.length() - 1] != 'F'))
        return false;

    std::string numPart = literal.substr(0, literal.length() - 1);
    
    char* endptr = NULL;
    strtof(numPart.c_str(), &endptr);
    
    return (endptr != numPart.c_str() && *endptr == '\0');
}

bool IsDouble(const std::string& literal)
{
    if (literal.find('.') == std::string::npos && literal.find('e') == std::string::npos && literal.find('E') == std::string::npos)
        return false;

    char* endptr = NULL;
    strtod(literal.c_str(), &endptr);

    return (endptr != literal.c_str() && *endptr == '\0');
}