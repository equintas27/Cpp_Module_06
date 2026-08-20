/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarUtils.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equintas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 16:32:19 by equintas          #+#    #+#             */
/*   Updated: 2026/08/20 16:32:21 by equintas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARUTILS_HPP
# define SCALARUTILS_HPP

#include <string>

bool IsChar(const std::string& literal);
bool IsInt(const std::string& literal);
bool IsFloat(const std::string& literal);
bool IsDouble(const std::string& literal);
bool IsPseudoFloat(const std::string& literal);
bool IsPseudoDouble(const std::string& literal);



#endif 
