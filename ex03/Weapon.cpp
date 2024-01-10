/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malleman <malleman@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:37:09 by malleman          #+#    #+#             */
/*   Updated: 2024/01/10 16:11:18 by malleman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Weapon.hpp"

Weapon::Weapon()
{

}

Weapon::Weapon(std::string type)
{
    setType(type);
}

Weapon::~Weapon()
{

}

std::string const & Weapon::getType(void)
{
    return (this->_type);
}

void    Weapon::setType(std::string name)
{
    this->_type = name;
}
