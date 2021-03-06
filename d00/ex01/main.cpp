/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/24 20:05:15 by ikozlov           #+#    #+#             */
/*   Updated: 2018/06/25 19:36:56 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "utils.h"
#include "Contact.hpp"
#include "PhoneBook.hpp"

void			printMenu(void) {
	std::cout << "Phoneboook" << std::endl;
	std::cout << "Commands:" << std::endl;
	std::cout << "ADD" << std::endl;
	std::cout << "SEARCH" << std::endl;
	std::cout << "MENU" << std::endl;
	std::cout << "EXIT" << std::endl;
	std::cout << std::endl;
}

static void		search(PhoneBook phoneBook) {
	int				index;
	std::string		dummy;
	Contact			*contact;

	if (phoneBook.index() == 0) {
		std::cout << "Phonebook is empty." << std::endl;
		return ;
	}
	phoneBook.print();
	std::cout << "Enter the index of a contact: ";
	index = getNumber();
	contact = phoneBook.search(index);
	if (contact)
		contact->print();
	else
		std::cout << "I searched but found nothing." << std::endl;
}

int				main(void) {
	std::string		command;
	PhoneBook		phoneBook;

	printMenu();
	while (1) {
		std::cout << "Please, enter a command" << std::endl;
		std::getline(std::cin, command);
		command = toLower(command);
		if (command == ADD_COMMAND) {
			if (phoneBook.index() < MAX_CAPACITY)
				phoneBook.addContact(Contact::createNewContact());
			else
				std::cout << "Phonebook is full" << std::endl;
		}
		else if (command == SEARCH_COMMAND)
			search(phoneBook);
		else if (command == EXIT_COMMAND)
			break ;
		else if (command == "menu")
			printMenu();
		else
			std::cout << "Invalid command" << std::endl;
	}
	return (0);
}
