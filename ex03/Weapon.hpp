/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malleman <malleman@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:37:09 by malleman          #+#    #+#             */
/*   Updated: 2024/01/10 16:11:18 by malleman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include<iostream>
#include<string>

class Weapon
{
    private:
        std::string _type;

    public:
        Weapon();
        Weapon(std::string type);
        ~Weapon();
        std::string const  & getType(void);
        void        setType(std::string type_name);
};

#endif