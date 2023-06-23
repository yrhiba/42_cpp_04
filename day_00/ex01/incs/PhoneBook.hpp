/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 23:31:44 by yrhiba            #+#    #+#             */
/*   Updated: 2023/06/23 00:37:46 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK
# define PHONEBOOK

#include "header.hpp"

class PhoneBook
{
private:
	int		contacts_count;
	Contact	contacts[8];

public:
	PhoneBook();
	~PhoneBook();
};

#endif
