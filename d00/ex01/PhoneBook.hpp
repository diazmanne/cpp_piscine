/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivankozlov <ivankozlov@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/24 20:08:56 by ikozlov           #+#    #+#             */
/*   Updated: 2018/06/25 16:13:08 by ivankozlov       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <string>

# define ADD_COMMAND "add"
# define SEARCH_COMMAND "search"
# define EXIT_COMMAND "exit"

# define WIDTH 10

class	PhoneBook
{
	public:
		PhoneBook(int capacity);
		~PhoneBook(void);

		void		addContact(Contact newContact);
		void		print(void);
		Contact		*search(int idx);

		int			index(void);

	private:
		int			_capacity;
		int			_index;
		Contact		*_contacts;
};

#endif