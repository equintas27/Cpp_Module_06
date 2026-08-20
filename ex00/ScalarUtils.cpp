/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarUtils.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equintas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 16:32:31 by equintas          #+#    #+#             */
/*   Updated: 2026/08/20 16:32:33 by equintas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarUtils.hpp"
#include <iostream>

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
    size_t i = 0;
    int dot = 0;

    if (literal.empty())
        return (false);
    if (literal[i] == '-' || literal[i] == '+')
        i++;
    if (literal[literal.length() - 1] != 'f')
        return (false);
    if (i == literal.length())
        return (false);
    while(i < literal.length() - 1)
    {
        if (literal[i] == '.')
        {
            if (dot)
                return (false);
            dot = 1;
        }
        else if (!std::isdigit(literal[i]))
            return (false);
        i++;
    }
    if (!dot)
        return (false);
    return (true);
}

bool IsDouble(const std::string& literal)
{
     size_t i = 0;
    int dot = 0;

    if (literal.empty())
        return (false);
    if (literal[i] == '-' || literal[i] == '+')
        i++;
    if (i == literal.length())
        return (false);
    while(i < literal.length())
    {
        if (literal[i] == '.')
        {
            if (dot)
                return (false);
            dot = 1;
        }
        else if (!std::isdigit(literal[i]))
            return (false);
        i++;
    }
    if (!dot)
        return (false);
    return (true);
}

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

int main(void)
{
    std::cout << std::boolalpha;
    std::cout << IsInt("+42") << std::endl;
    std::cout << IsFloat("+42f") << std::endl;
    std::cout << IsDouble("-0.0") << std::endl;
}