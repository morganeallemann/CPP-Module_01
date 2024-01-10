/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malleman <malleman@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:37:09 by malleman          #+#    #+#             */
/*   Updated: 2024/01/10 16:11:18 by malleman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

#include<iostream>
#include<string>
#include"Weapon.hpp"

class HumanA
{
    private:
        std::string _name;
        Weapon      &_weapon;

    public:
        HumanA(std::string name, Weapon& type);
        ~HumanA();
        void    attack(void);
};

#endif
