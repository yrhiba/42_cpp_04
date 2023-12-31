/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 01:06:27 by yrhiba            #+#    #+#             */
/*   Updated: 2023/09/08 22:03:10 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CHARACTER
# define _CHARACTER

#include <iostream>
#include <string>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
private:
	std::string	name;
	AMateria	**inventory;

public:
	Character();
	Character(const Character &other);
	Character &operator=(const Character &other);
	~Character();

	// asking methode to code
	Character(const std::string &_name);

	// interface methode need to code
	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);

	// i guess need to have this
	AMateria *getMateria(int idx);
	bool isInventoryFull() const;
};

std::ostream &operator<<(std::ostream &stream, const ICharacter &character);

#endif
