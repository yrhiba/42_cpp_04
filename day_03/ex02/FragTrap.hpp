/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 14:02:56 by yrhiba            #+#    #+#             */
/*   Updated: 2023/08/24 14:16:22 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG
# define FRAG

#include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
private:

public:
	FragTrap(std::string _name);
	~FragTrap();

	FragTrap(const FragTrap &other);

	FragTrap &operator=(const FragTrap &other);

	void highFivesGuys( void );
};

#endif
