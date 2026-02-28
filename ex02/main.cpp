/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruno-valero <bruno-valero@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 11:06:48 by bruno-valer       #+#    #+#             */
/*   Updated: 2026/02/28 11:08:51 by bruno-valer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main( void ) {
	ScavTrap	scav1("scav1");
	ScavTrap	scav2("scav2");

	scav1.attack(scav2.getName());
	scav2.takeDamage(scav1.getAtackDamage());
	scav2.beRepaired(1);
	scav1.guardGate();
	FragTrap frag1("frag1");
	frag1.highFivesGuys();
	return (0);
}
