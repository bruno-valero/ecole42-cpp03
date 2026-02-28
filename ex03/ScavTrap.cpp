/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruno-valero <bruno-valero@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 19:14:14 by brunofer          #+#    #+#             */
/*   Updated: 2026/02/28 12:41:57 by bruno-valer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) {
	setHitPoints(ScavTrap::_defaultHitPoints);
	setEnergyPoints(ScavTrap::_defaultEnergyPoints);
	setAttackDamage(ScavTrap::_defaultAttackDamage);
	std::cout << "ScavTrap::DefaultConstructor()" << std::endl;
};

ScavTrap::ScavTrap(const std::string &name): ClapTrap(name) {
	setHitPoints(ScavTrap::_defaultHitPoints);
	setEnergyPoints(ScavTrap::_defaultEnergyPoints);
	setAttackDamage(ScavTrap::_defaultAttackDamage);
	std::cout << "ScavTrap::NameConstructor(" << getName() << ")" << std::endl;
};

ScavTrap::ScavTrap(const ScavTrap &other): ClapTrap(other) {
	std::cout << "ScavTrap::CopyConstructor(" << getName() << ")" << std::endl;
};

ScavTrap::~ScavTrap(void)
{
	std::cout << "Destroying::ScavTrap(" << getName() <<")" << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &other)
{
	if (this != &other)
	{
		ClapTrap::operator=(other);
	}
	return (*this);
};

void		ScavTrap::attack(const std::string &target)
{
	if (getHitPoints() == 0)
	{
		std::cout
		<< "ScavTrap " << getName()
		<< " is dead!" << std::endl;
		return ;
	}
	if (getEnergyPoints() == 0)
	{
		std::cout
		<< "ScavTrap " << getName()
		<< " has no Battery!" << std::endl;
		return ;
	}
	setEnergyPoints(getEnergyPoints() - 1);
	std::cout
		<< "ScavTrap " << getName()
		<< " attacks " << target
		<< ", causing " << getAtackDamage()
		<< " points of damage!" << std::endl;
};

void		ScavTrap::guardGate(void) const
{
	std::cout << "ScavTrap " << getName() << " is now in gatekeeper mode." << std::endl;
};
