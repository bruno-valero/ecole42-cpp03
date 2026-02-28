/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruno-valero <bruno-valero@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 10:49:23 by bruno-valer       #+#    #+#             */
/*   Updated: 2026/02/28 10:51:47 by bruno-valer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main( void ) {
	ScavTrap	scav1("scav1");
	ScavTrap	scav2("scav2");

	scav1.attack(scav2.getName());
	scav2.takeDamage(scav1.getAtackDamage());
	scav2.beRepaired(1);
	scav1.guardGate();
	return (0);
}
