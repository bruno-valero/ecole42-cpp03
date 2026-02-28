/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruno-valero <bruno-valero@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 19:14:14 by brunofer          #+#    #+#             */
/*   Updated: 2026/02/28 12:13:57 by bruno-valer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) {
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
	std::cout << "FragTrap::DefaultConstructor()" << std::endl;
};

FragTrap::FragTrap(const std::string &name): ClapTrap(name) {
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
	std::cout << "FragTrap::NameConstructor(" << getName() << ")" << std::endl;
};

FragTrap::FragTrap(const FragTrap &other): ClapTrap(other) {
	std::cout << "FragTrap::CopyConstructor(" << getName() << ")" << std::endl;
};

FragTrap::~FragTrap(void)
{
	std::cout << "Destroying::FragTrap(" << getName() <<")" << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &other)
{
	if (this != &other)
	{
		ClapTrap::operator=(other);
	}
	return (*this);
};

void		FragTrap::attack(const std::string &target)
{
	if (getHitPoints() == 0)
	{
		std::cout
		<< "FragTrap " << getName()
		<< " is dead!" << std::endl;
		return ;
	}
	if (getEnergyPoints() == 0)
	{
		std::cout
		<< "FragTrap " << getName()
		<< " has no Battery!" << std::endl;
		return ;
	}
	setEnergyPoints(getEnergyPoints() - 1);
	std::cout
		<< "FragTrap " << getName()
		<< " attacks " << target
		<< ", causing " << getAtackDamage()
		<< " points of damage!" << std::endl;
};

void		FragTrap::highFivesGuys(void) const
{
	std::cout << "FragTrap " << getName() << " is requesting a HI-FIVE." << std::endl;
};
