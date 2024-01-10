/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malleman <malleman@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:37:09 by malleman          #+#    #+#             */
/*   Updated: 2024/01/10 16:11:18 by malleman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

#include<iostream>
#include<string>
#include"Weapon.hpp"

class HumanB
{
    private:
        std::string _name;
        Weapon      *_weapon;

    public:
        HumanB(std::string name);
        ~HumanB();
        void    setWeapon(Weapon &waepon);
        void    attack(void);
};

#endif
