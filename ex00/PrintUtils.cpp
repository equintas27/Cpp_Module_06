/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PrintUtils.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equintas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 17:49:38 by equintas          #+#    #+#             */
/*   Updated: 2026/08/21 17:49:39 by equintas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PrintUtils.hpp"

void PrintChar(const std::string& literal)
{
    char c = literal[0];
    std::cout << "char: '" << c << "'" << std::endl;
    std::cout << "int: " << static_cast<int>(c) << std::endl;
    std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(c) << "f" << std::endl;
    std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(c) << std::endl;
}

void PrintInt(const std::string& literal)
{
    errno = 0;
    long numb = std::strtol(literal.c_str(), NULL, 10);

    if (errno == ERANGE)
    {
        std::cout << "char: impossible " << std::endl;
        std::cout << "int: impossible " << std::endl;

        float f = std::strtof(literal.c_str(), NULL);
        if (f >= -FLT_MAX && f <= FLT_MAX)
            std::cout << "float: "
                      << std::fixed << std::setprecision(1)
                      << f << "f" << std::endl;
        else
            std::cout << "float: impossible " << std::endl;

        double d = std::strtod(literal.c_str(), NULL);
        if (d >= -DBL_MAX && d <= DBL_MAX)
            std::cout << "double: "
                      << std::fixed << std::setprecision(1)
                      << d << std::endl;
        else
            std::cout << "double: impossible " << std::endl;

        return;
    }
         
    if (numb >= CHAR_MIN && numb <= CHAR_MAX)
    {
        if (!std::isprint(numb))
            std::cout << "char: Non displayable " << std::endl;
        else
            std::cout << "char: '" << static_cast<char>(numb) << "'" << std::endl;
    }
    else
         std::cout << "char: impossible " << std::endl;
    if (numb >= INT_MIN && numb <= INT_MAX)
        std::cout << "int: " << static_cast<int>(numb) << std::endl;
    else
        std::cout << "int: impossible " << std::endl;
    if (numb >= -FLT_MAX && numb <= FLT_MAX)
        std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(numb) << "f" << std::endl;
    else
        std::cout << "float: impossible " << std::endl;
    if (numb >= -DBL_MAX && numb <= DBL_MAX)
        std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(numb) << std::endl;
    else
        std::cout << "double: impossible " << std::endl;
       
}

void PrintFloat(const std::string& literal)
{
    float numb = std::strtof(literal.c_str(), NULL);
    if (numb >= static_cast<float>(CHAR_MIN) && numb <= static_cast<float>(CHAR_MAX))
    {
        if (!std::isprint(numb))
            std::cout << "char: Non displayable " << std::endl;
        else
            std::cout << "char: '" << static_cast<char>(numb) << "'" << std::endl;
    }
    else
        std::cout << "char: impossible " << std::endl;
    if (numb >= static_cast<float>(INT_MIN) && numb <= static_cast<float>(INT_MAX))
        std::cout << "int: " << static_cast<int>(numb) << std::endl;
    else
         std::cout << "int: impossible " << std::endl;
    if (numb >= -FLT_MAX && numb <= FLT_MAX)
        std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(numb) << "f" << std::endl;
    else
        std::cout << "float: impossible " << std::endl;
    if (numb >= -DBL_MAX && numb <= DBL_MAX)
        std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(numb) << std::endl;
    else
        std::cout << "double: impossible " << std::endl;
}

void PrintDouble(const std::string& literal)
{
    double numb = std::strtod(literal.c_str(), NULL);
    if (numb >= static_cast<double>(CHAR_MIN) && numb <= static_cast<double>(CHAR_MAX))
    {
        if (!std::isprint(numb))
            std::cout << "char: Non displayable " << std::endl;
        else
            std::cout << "char: '" << static_cast<char>(numb) << "'" << std::endl;
    }
    else
        std::cout << "char: impossible " << std::endl;
    if (numb >= static_cast<double>(INT_MIN) && numb <= static_cast<double>(INT_MAX))
        std::cout << "int: " << static_cast<int>(numb) << std::endl;
    else
         std::cout << "int: impossible " << std::endl;  
    if (numb >= -FLT_MAX && numb <= FLT_MAX)
        std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(numb) << "f" << std::endl;
    else
        std::cout << "float: impossible " << std::endl; 
    if (numb >= -DBL_MAX && numb <= DBL_MAX)
        std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(numb) << std::endl;
    else
        std::cout << "double: impossible " << std::endl;
}

void PrintPseudoFloat(const std::string& literal)
{
    std::cout << "char: impossible " << std::endl;
    std::cout << "int: impossible " << std::endl;
    std::cout << "float: " << literal << std::endl;
    if (literal == "nanf")
        std::cout << "double: " << literal[0] << literal[1] << literal[2] << std::endl;
    else
        std::cout << "double: " << literal[0] << literal[1] << literal[2] << literal[3] << std::endl;
}

void PrintPseudoDouble(const std::string& literal)
{
    std::cout << "char: impossible " << std::endl;
    std::cout << "int: impossible " << std::endl;
    std::cout << "float: " << literal << "f" << std::endl;
    std::cout << "double: " << literal << std::endl;
}

