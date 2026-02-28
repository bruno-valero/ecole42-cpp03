/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruno-valero <bruno-valero@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 19:14:14 by brunofer          #+#    #+#             */
/*   Updated: 2026/02/28 12:44:07 by bruno-valer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void): ClapTrap(), FragTrap(), ScavTrap(), _name("brunofer") {
	std::cout << "DiamondTrap::DefaultConstructor()" << std::endl;
	setName(ClapTrap::_name + "_clap_name");
	setHitPoints(FragTrap::_defaultHitPoints);
	setEnergyPoints(ScavTrap::_defaultEnergyPoints);
	setAttackDamage(FragTrap::_defaultAttackDamage);
};

DiamondTrap::DiamondTrap(const std::string &name): ClapTrap(name + "_clap_name"), FragTrap(), ScavTrap(), _name(name) {
	std::cout << "DiamondTrap::NameConstructor(" << getName() << ")" << std::endl;
	setHitPoints(FragTrap::_defaultHitPoints);
	setEnergyPoints(ScavTrap::_defaultEnergyPoints);
	setAttackDamage(FragTrap::_defaultAttackDamage);
};

DiamondTrap::DiamondTrap(const DiamondTrap &other): ClapTrap(other), FragTrap(other), ScavTrap(other), _name(other.getDiamondName()) {
	std::cout << "DiamondTrap::CopyConstructor(" << getName() << ")" << std::endl;
};

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "Destroying::DiamondTrap(" << getName() <<")" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &other)
{
	if (this != &other)
	{
		ClapTrap::operator=(other);
		_name = other._name;
	}
	return (*this);
};

const std::string	&DiamondTrap::getDiamondName(void) const
{
	return (DiamondTrap::_name);
};

void		DiamondTrap::whoAmI(void) const
{
	std::cout << "DiamondTrap[" << getDiamondName() << "]" << ", ClapTrap[" << getName() << "]" << std::endl;
};
