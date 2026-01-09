/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorin <smorin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 15:09:54 by sacha             #+#    #+#             */
/*   Updated: 2025/05/23 14:09:43 by smorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

void	sed(std::string filename, std::string s1, std::string s2)
{
	size_t	pos;

	std::string outfilename = filename + ".replace";
	std::ifstream file(filename.c_str());
	std::ofstream ofile(outfilename.c_str());
	if (!file.is_open() || !ofile.is_open())
	{
		std::cerr << "Error: Unable to open file" << std::endl;
		return;
	}
	if (s1 == "")
	{
		std::cerr << "Error: s1 is empty" << std::endl;
		return ;
	}
	std::string line;
	if (std::getline(file, line, '\0'))
	{
		pos = line.find(s1);
		while (pos != std::string::npos)
		{
			line.replace(pos, s1.length(), s2);
			pos = line.find(s1, pos + s2.length());
		}
		ofile << line << std::endl;
	}
	else
	{
		std::cerr << "Error: Unable to read file" << std::endl;
		return ;
	}
	file.close();
	ofile.close();
}
