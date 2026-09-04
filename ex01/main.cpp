/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equintas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 18:52:55 by equintas          #+#    #+#             */
/*   Updated: 2026/08/21 18:52:59 by equintas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void)
{
    Data data;

    data.value = 42;
    Data *ptr = &data;
    uintptr_t info = Serializer::serialize(ptr);
    Data *newPtr = Serializer::deserialize(info);

    std::cout << "Original:   " << ptr << std::endl;
    std::cout << "Serialized: " << info << std::endl;
    std::cout << "Recovered:  " << newPtr << std::endl;
    std::cout << ptr->value << std::endl;
    std::cout << newPtr->value << std::endl;

    if (ptr == newPtr)
        std::cout << "Same Pointer" << std::endl;
    else
        std::cout << "Different Pointer" << std::endl;
    return (0);
}
