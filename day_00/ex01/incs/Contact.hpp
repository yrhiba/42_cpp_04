/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 00:00:41 by yrhiba            #+#    #+#             */
/*   Updated: 2023/06/24 14:49:16 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT
# define CONTACT

class Contact
{
private:
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;

	std::string ziptoten(const std::string &s);

public:

	Contact();

	void	setdata(std::string _first_name, std::string _last_name, std::string _nickname, std::string _phone_number, std::string	_darkest_secret);

	void	print_info(int index);

	void	print_allinfo();

	~Contact();
};

#endif
