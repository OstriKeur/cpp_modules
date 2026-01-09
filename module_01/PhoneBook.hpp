/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacha <sacha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 14:28:39 by sacha             #+#    #+#             */
/*   Updated: 2025/05/15 17:04:06 by sacha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
  private:
	Contact contacts[8];
	int contactIndex;
	int contactCount;

	void displayContactHeader() const;
	std::string formatDisplay(const std::string &str) const;
	void displayContactInfo(int index) const;
	bool isValidIndex(int index) const;

  public:
	PhoneBook(void);

	void addContact(const Contact &contact);
	void searchContact(void) const;
};

#endif
