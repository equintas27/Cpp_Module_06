/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equintas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 18:22:58 by equintas          #+#    #+#             */
/*   Updated: 2026/08/21 18:22:59 by equintas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{}

Serializer::Serializer(const Serializer& src)
{
    (void)src;
}
        
Serializer& Serializer::operator=(const Serializer& rhs)
{
    (void)rhs;
    return (*this);
}

Serializer::~Serializer()
{}

uintptr_t Serializer::serialize(Data* ptr)
{
    uintptr_t info = reinterpret_cast<uintptr_t>(ptr);
    return (info);
}

Data* Serializer::deserialize(uintptr_t raw)
{
    Data *data = reinterpret_cast<Data *>(raw);
    return (data);
}