/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malleman <malleman@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:37:09 by malleman          #+#    #+#             */
/*   Updated: 2024/01/10 16:11:18 by malleman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& type) : _name(name), _weapon(type)
{
    type.getType();
}

HumanA::~HumanA()
{

}

void    HumanA::attack(void)
{
    std::string const &new_one = this->_weapon.getType();
    std::cout << this->_name << " attacks with their " << new_one << std::endl;
}
