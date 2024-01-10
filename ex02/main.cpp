/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malleman <malleman@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:37:09 by malleman          #+#    #+#             */
/*   Updated: 2024/01/10 16:11:18 by malleman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<string>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "memory address of str: " << &str << std::endl;
    std::cout << "memory address held by strPTR: " << stringPTR << std::endl;
    std::cout << "memory address held by strREF: " << &stringREF << std::endl;

    std::cout << "value of str: " << str << std::endl;
    std::cout << "value pointed to by stringPTR: " << *stringPTR << std::endl;
    std::cout << "value pointed to by stringPTR: " << stringREF << std::endl;

    return (0);
}