/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malleman <malleman@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 15:37:09 by malleman          #+#    #+#             */
/*   Updated: 2024/01/11 16:11:18 by malleman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void	replace(char **av, std::ifstream &ifs, std::ofstream &ofs)
{
	std::string		buff;
	std::string		s1 = av[2];
	std::string		s2 = av[3];
	char			c;
	unsigned int	i = 0;


	while (ifs.get(c))
	{
		if (c == s1[0])
		{
			buff.push_back(c);
			i = 1;
			while (i < s1.size() && ifs.get(c) && c == s1[i])
			{
				buff.push_back(c);
				i++;
			}
			if (i == s1.size())
			{
				ofs << s2;
				buff.clear();
			}
			else
			{
				buff.push_back(c);
				ofs << buff;
				buff.clear();
			}
		}
		else
			ofs.put(c);
	}
	return ;
}

int main(int ac, char **av)
{
	if (ac == 4)
	{
		std::string		replace_n = av[1];
		replace_n += ".replace";
		std::ifstream	ifs(av[1]);
		if (!ifs.is_open())
		{
			std::cout << "Error: Input file couldn't be open" << std::endl;
		}
		std::ofstream	ofs(replace_n);
		if (!ofs.is_open())
		{
			std::cout << "Error: Output files couldn't be open" << std::endl;
		}
		replace(av, ifs, ofs);
		ifs.close();
		ofs.close();
	}
	else
		std::cout << "Error: Args number is wrong" << std::endl;
	return (0);
}