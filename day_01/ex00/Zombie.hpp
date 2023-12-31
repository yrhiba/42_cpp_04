/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 01:43:31 by yrhiba            #+#    #+#             */
/*   Updated: 2023/06/25 01:55:11 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE__
# define __ZOMBIE__

#include <iostream>
#include <string>

class Zombie
{
private:
	Zombie();

	std::string name;

public:
	Zombie(std::string);

	void	annouce(void);

	~Zombie();
};

#endif
