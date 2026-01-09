/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacha <sacha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 14:28:24 by sacha             #+#    #+#             */
/*   Updated: 2025/05/21 10:40:03 by sacha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) : contactIndex(0), contactCount(0)
{
}

void PhoneBook::addContact(const Contact &contact)
{
	if (contactIndex < 8)
		contacts[contactIndex++] = contact;
	else
		contactIndex = 0;
	if (contactCount < 8)
		contactCount++;
}

bool PhoneBook::isValidIndex(int index) const
{
	return (index >= 0 && index < contactCount);
}

std::string PhoneBook::formatDisplay(const std::string &str) const
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void PhoneBook::displayContactHeader() const
{
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
}

void PhoneBook::displayContactInfo(int index) const
{
	std::cout << "|         " << index << "|";
	std::cout << std::setw(10) << formatDisplay(contacts[index].getFirstName()) << "|";
	std::cout << std::setw(10) << formatDisplay(contacts[index].getLastName()) << "|";
	std::cout << std::setw(10) << formatDisplay(contacts[index].getNickname()) << "|" << std::endl;
}

void PhoneBook::searchContact(void) const
{
	if (contactCount == 0)
	{
		std::cout << "No contacts available" << std::endl;
		return ;
	}
	displayContactHeader();
	for (int i = 0; i < contactCount; i++)
		displayContactInfo(i);
	std::cout << "Enter the index of the contact you want to display: ";
	int index;
	std::cin >> index;
	if (std::cin.eof())
	{
		std::cout << std::endl;
		exit(0);
	}
	if (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Invalid input. Please enter a valid integer." << std::endl;
		return ;
	}
	if (!isValidIndex(index))
	{
		std::cout << "Invalid index" << std::endl;
		return ;
	}
	std::cout << "Contact found:" << std::endl;
	std::cout << "First name: " << contacts[index].getFirstName() << std::endl;
	std::cout << "Last name: " << contacts[index].getLastName() << std::endl;
	std::cout << "Nickname: " << contacts[index].getNickname() << std::endl;
	std::cout << "Phone number: " << contacts[index].getPhoneNumber() << std::endl;
	std::cout << "Darkest secret: " << contacts[index].getDarkestSecret() << std::endl;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
