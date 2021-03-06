/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/24 19:10:57 by ikozlov           #+#    #+#             */
/*   Updated: 2018/06/24 19:32:28 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char *toUpper(char *s) {
	for (int i = 0; i < strlen(s); i++)
		s[i] = toupper(s[i]);
	return (s);
}

int main(int ac, char *av[]) {
	if (ac > 1)
		for (int i = 1; i < ac; i++) 
			std::cout << toUpper(av[i]);
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return (0);
}
