/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 01:41:00 by yrhiba            #+#    #+#             */
/*   Updated: 2023/08/27 09:31:23 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP
# define CLAP

#include <iostream>
#include <string>

class ClapTrap
{
protected:
	std::string	name;
	int			hit_points;
	int			energy_points;
	int			attack_damage;

public:
	ClapTrap();
	ClapTrap(std::string _name);
	~ClapTrap();

	ClapTrap(const ClapTrap &other);
	ClapTrap &operator=(const ClapTrap &other);

	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	std::string	getname( void ) const ;
	int			gethitpoints( void ) const ;
	int 		getenergypoints( void ) const ;
	int 		getattackdamage( void ) const ;
};

#endif
