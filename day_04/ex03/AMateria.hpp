/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 13:52:42 by yrhiba            #+#    #+#             */
/*   Updated: 2023/09/08 20:35:36 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA
# define AMATERIA

#include <iostream>
#include <string>
#include "Character.hpp"

class ICharacter;

class AMateria
{

protected:
	/* guesting methodes */
	std::string _type;

public:
	/* Canolical Methodes */
	AMateria();
	AMateria(const AMateria &other);
	AMateria &operator=(const AMateria &other);
	virtual ~AMateria();


	/* givining methodes */
	AMateria(std::string const & type);
	std::string const & getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif
