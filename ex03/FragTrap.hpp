/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruno-valero <bruno-valero@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 19:03:02 by brunofer          #+#    #+#             */
/*   Updated: 2026/02/28 12:44:56 by bruno-valer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class  FragTrap: virtual public ClapTrap
{
protected:
	static const unsigned int _defaultHitPoints = 100;
	static const unsigned int _defaultEnergyPoints = 100;
	static const unsigned int _defaultAttackDamage = 30;

public:
	FragTrap();
	FragTrap(const std::string &name);
	FragTrap(const FragTrap &other);
	~FragTrap(void);
	FragTrap	&operator=(const FragTrap &other);
	void		highFivesGuys(void) const;
	void		attack( const std::string &target );
};

#endif
