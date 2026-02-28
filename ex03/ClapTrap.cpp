/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruno-valero <bruno-valero@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 23:20:01 by bruno-valer       #+#    #+#             */
/*   Updated: 2026/02/28 10:43:05 by bruno-valer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): _name("brunofer"), _hit_points(10), _energy_points(10), _atack_damage(0) {
	std::cout << "ClapTrap::DefaultConstructor()" << std::endl;
};
ClapTrap::ClapTrap(const std::string &name): _name(name), _hit_points(10), _energy_points(10), _atack_damage(0) {
	std::cout << "ClapTrap::NameConstructor(" << _name << ")" << std::endl;
};
ClapTrap::ClapTrap(const ClapTrap &other): _name(other._name), _hit_points(other._hit_points), _energy_points(other._energy_points), _atack_damage(other._atack_damage) {
	std::cout << "ClapTrap::CopyConstructor(" << _name << ")" << std::endl;
};
ClapTrap::~ClapTrap(void)
{
	std::cout << "Destroying::ClapTrap(" << _name << ")" << std::endl;
};

ClapTrap	&ClapTrap::operator=(const ClapTrap &other)
{
	_name = other._name;
	_hit_points = other._hit_points;
	_energy_points = other._energy_points;
	_atack_damage = other._atack_damage;
	return (*this);
};

void		ClapTrap::attack(const std::string& target)
{
	if (_hit_points == 0)
	{
		std::cout
		<< "ClapTrap " << _name
		<< " is dead!" << std::endl;
		return ;
	}
	if (_energy_points == 0)
	{
		std::cout
		<< "ClapTrap " << _name
		<< " has no Battery!" << std::endl;
		return ;
	}
	_energy_points--;
	std::cout
		<< "ClapTrap " << _name
		<< " attacks " << target
		<< ", causing " << _atack_damage
		<< " points of damage!" << std::endl;
};

void		ClapTrap::takeDamage(unsigned int amount)
{
	if (_hit_points == 0)
		return ;
	if (amount >= _hit_points)
	{
		_hit_points = 0;
		std::cout
		<< "ClapTrap " << _name
		<< " was hitted, and lost " << amount
		<< " health points. ClapTrap is dead!!" << std::endl;
		return ;
	}
	_hit_points -= amount;
	std::cout
		<< "ClapTrap " << _name
		<< " was hitted, and lost " << amount
		<< " health points!" << std::endl;
};

void		ClapTrap::beRepaired(unsigned int amount)
{
	if (_hit_points == 0 || _energy_points == 0)
		return ;
	_energy_points--;
	_hit_points += amount;
	std::cout
		<< "ClapTrap " << _name
		<< " get reapired by " << amount
		<< " health points!" << std::endl;
};

const std::string	&ClapTrap::getName(void) const
{
	return (_name);
};

unsigned int		ClapTrap::getHitPoints(void) const
{
	return (_hit_points);
};

unsigned int		ClapTrap::getEnergyPoints(void) const
{
	return (_energy_points);
};

unsigned int		ClapTrap::getAtackDamage(void) const
{
	return (_atack_damage);
};


void				ClapTrap::setName(std::string value)
{
	_name = value;
};

void				ClapTrap::setHitPoints(unsigned int value)
{
	_hit_points = value;
};

void				ClapTrap::setEnergyPoints(unsigned int value)
{
	_energy_points = value;
};

void				ClapTrap::setAttackDamage(unsigned int value)
{
	_atack_damage = value;
};

