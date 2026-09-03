/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PrintUtils.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equintas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 17:49:26 by equintas          #+#    #+#             */
/*   Updated: 2026/08/21 17:49:27 by equintas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTUTILS_HPP
# define PRINTUTILS_HPP

#include <string>
#include <iostream>
#include <stdlib.h>
#include <limits.h>
#include <cfloat>
#include <iomanip>
#include <cerrno>
#include <cmath>

void PrintChar(const std::string& literal);
void PrintInt(const std::string& literal);
void PrintFloat(const std::string& literal);
void PrintDouble(const std::string& literal);
void PrintPseudoFloat(const std::string& literal);
void PrintPseudoDouble(const std::string& literal);

#endif 