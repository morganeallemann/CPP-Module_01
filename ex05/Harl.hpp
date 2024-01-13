/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malleman <malleman@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 15:37:09 by malleman          #+#    #+#             */
/*   Updated: 2024/01/11 16:11:18 by malleman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

#include<iostream>
#include<string>

class Harl
{
private:
    void    debug(void);
    void    info(void);
    void    warning(void);
    void    error(void);

public:
    Harl();
    ~Harl();
    void    complain(std::string level);
};


#endif