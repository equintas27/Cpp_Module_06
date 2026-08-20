/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equintas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 15:54:24 by equintas          #+#    #+#             */
/*   Updated: 2026/08/20 15:54:26 by equintas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <string>

class ScalarConverter 
{
    public:
        static void convert(const std::string &literal);
    private:
        ScalarConverter();
        ScalarConverter(const ScalarConverter &src);
        ScalarConverter& operator=(const ScalarConverter &rhs);
        ~ScalarConverter();
};

#endif
