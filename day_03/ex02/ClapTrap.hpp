/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 01:41:00 by yrhiba            #+#    #+#             */
/*   Updated: 2023/08/24 04:26:13 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP
# define CLAP

#include <iostream>
#include <string>

class ClapTrap
{
private:
	std::string	name;
	int			hit_points;
	int			energy_points;
	int			attack_damage;

public:
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

	void		setname(std::string _name);
	void		sethitpoints(int amount);
	void		setenergypoints(int amount);
	void		setattackdamage(int amount);
};

#endif
