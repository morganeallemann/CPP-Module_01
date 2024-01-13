/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malleman <malleman@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 15:37:09 by malleman          #+#    #+#             */
/*   Updated: 2024/01/11 16:11:18 by malleman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
    std::cout << "|-----------------------------|" << std::endl;
    std::cout << "|Welcome to Harl's complaints!|" << std::endl;
    std::cout << "|-----------------------------|" << std::endl;

}

Harl::~Harl()
{
    std::cout << "|-------------------------------|" << std::endl;
    std::cout << "|See you soon for new complaints|" << std::endl;
    std::cout << "|-------------------------------|" << std::endl;
}

void    Harl::debug(void)
{
    std::cout << "love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void    Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void    Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void    Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void    Harl::complain(std::string level)
{
    void        (Harl::*complainFunction[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string str[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int         i = 0;

    while (i < 4)
    {
        if (str[i] == level)
        {
            (this->*complainFunction[i])();
            break;
        }
        i++;
    }
    if (i == 4)
        std::cout << "Error: Invalid level name" << std::endl;

    return ;
}