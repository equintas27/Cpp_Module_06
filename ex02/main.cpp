/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equintas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 11:29:17 by equintas          #+#    #+#             */
/*   Updated: 2026/08/22 11:29:19 by equintas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "Identify.hpp"
#include <ctime>

int main()
{
    std::srand(std::time(NULL));
    for (int i = 0; i < 10; i++)
    {
        Base* p = generate();
        identify(p);
        identify(*p);
        delete p;
    }
    return (0);
}
