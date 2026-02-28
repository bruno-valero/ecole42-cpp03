/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruno-valero <bruno-valero@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 19:03:02 by brunofer          #+#    #+#             */
/*   Updated: 2026/02/28 12:41:09 by bruno-valer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class  ScavTrap: virtual public ClapTrap
{
protected:
	static const unsigned int _defaultHitPoints = 100;
	static const unsigned int _defaultEnergyPoints = 50;
	static const unsigned int _defaultAttackDamage = 20;

public:
	ScavTrap();
	ScavTrap(const std::string &name);
	ScavTrap(const ScavTrap &other);
	~ScavTrap(void);
	ScavTrap	&operator=(const ScavTrap &other);
	void		guardGate(void) const;
	void		attack( const std::string &target );
};

#endif
