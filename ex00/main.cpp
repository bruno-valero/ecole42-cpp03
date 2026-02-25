/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruno-valero <bruno-valero@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 23:45:42 by bruno-valer       #+#    #+#             */
/*   Updated: 2026/02/24 23:57:42 by bruno-valer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap	clap1("clap1");
	ClapTrap	clap2("clap2");

	clap1.attack("clap2");
	clap2.takeDamage(1);

	clap2.attack("clap1");
	clap1.takeDamage(2);

	clap2.beRepaired(4);
	clap1.attack("clap2");
	clap2.takeDamage(2);

	clap2.attack("clap1");
	clap1.takeDamage(3);

	clap1.beRepaired(4);
	clap2.attack("clap1");
	clap1.takeDamage(3);

	clap2.attack("clap1");
	clap1.takeDamage(3);
	clap1.attack("clap2");
	clap2.takeDamage(2);

	clap2.beRepaired(4);
	clap1.attack("clap2");
	clap2.takeDamage(2);

	clap1.beRepaired(4);
	clap2.attack("clap1");
	clap1.takeDamage(3);

	clap2.attack("clap1");
	clap1.takeDamage(6);
}
