/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruno-valero <bruno-valero@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 12:21:53 by bruno-valer       #+#    #+#             */
/*   Updated: 2026/02/28 12:30:01 by bruno-valer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main( void ) {
	ScavTrap scav1("scav1");
	ScavTrap scav2("scav2");

	scav1.attack(scav2.getName());
	scav2.takeDamage(1);
	scav2.beRepaired(1);
	scav1.guardGate();

	FragTrap frag1("frag1");
	frag1.highFivesGuys();

	DiamondTrap diamond1("diamond1");
	diamond1.whoAmI();
	std::cout << "diamond1::hitPoints " << diamond1.getHitPoints() << std::endl;
	std::cout << "diamond1::energyPoints " << diamond1.getEnergyPoints() << std::endl;
	std::cout << "diamond1::attakDamage " << diamond1.getAtackDamage() << std::endl;
	diamond1.attack(frag1.getName());

	return (0);
}
