/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunofer <brunofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 19:14:14 by brunofer          #+#    #+#             */
/*   Updated: 2026/02/26 19:50:53 by brunofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) {};
ScavTrap::ScavTrap(const std::string &name): ClapTrap(name) {};
ScavTrap::ScavTrap(const ScavTrap &other): ClapTrap(other) {};
ScavTrap::~ScavTrap(void)
{
	std::cout << "Destroying::ScavTrap(" << this->getName() <<")" << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &other)
{
	if (this != &other)
	{
		ClapTrap::operator=(other);
	}
	return (*this);
};

void		ScavTrap::guardGate(void) const
{
	std::cout << "ScavTrap is now in gatekeeper mode." << std::endl;
};
