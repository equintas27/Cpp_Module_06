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
    else if (literal.length() == 3 && literal[0] == '\'' && literal[2] == '\'')
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
    if (literal.length() <= 1)
        return false;

    if (literal[literal.length() - 1] != 'f')
        return false;

    bool dot = false;
    bool exponent = false;
    bool digit = false;

    for (size_t i = 0; i < literal.length() - 1; i++)
    {
        if (std::isdigit(literal[i]))
            digit = true;

        else if (literal[i] == '.' && !dot && !exponent)
            dot = true;

        else if ((literal[i] == 'e' || literal[i] == 'E')
                 && digit && !exponent)
        {
            exponent = true;
            digit = false;
        }

        else if ((literal[i] == '+' || literal[i] == '-')
                 && (i == 0 || literal[i - 1] == 'e'
                 || literal[i - 1] == 'E'))
            continue;

        else
            return false;
    }

    return (digit && (dot || exponent));
}

bool IsDouble(const std::string& literal)
{
    bool dot = false;
    bool exponent = false;
    bool digit = false;

    for (size_t i = 0; i < literal.length(); i++)
    {
        if (std::isdigit(literal[i]))
            digit = true;
        else if (literal[i] == '.' && !dot && !exponent)
            dot = true;
        else if ((literal[i] == 'e' || literal[i] == 'E')
                 && digit && !exponent)
        {
            exponent = true;
            digit = false;
        }
        else if ((literal[i] == '+' || literal[i] == '-')
                 && (i == 0 || literal[i - 1] == 'e'
                 || literal[i - 1] == 'E'))
            continue;
        else
            return false;
    }

    return (digit && (dot || exponent));
}