/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 09:59:56 by atabarea          #+#    #+#             */
/*   Updated: 2026/04/20 10:34:03 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	FragTrap Zaku("Zaku");
	DiamondTrap Red_comet("Red_comet");
	DiamondTrap Gouf(Red_comet);

	Gouf.beRepaired(10);
	Red_comet.beRepaired(10);
	Zaku.beRepaired(10);
	Zaku.attack("Red_comet");
	if (Zaku.getHP() > 0)
		Red_comet.takeDamage(Zaku.getDamage());
	std::cout << Red_comet.getHP() << std::endl;
	std::cout << Red_comet.getMaxHP() << std::endl;
	std::cout << Red_comet.getDamage() << std::endl;
	std::cout << Red_comet.getEnergy() << std::endl;
	Red_comet.whoAmI();
	Red_comet.attack("Zaku");
	if (Red_comet.getHP() > 0)
		Zaku.takeDamage(Red_comet.getDamage());
	Red_comet.guardGate();
	Red_comet.highFivesGuys();
	Zaku.beRepaired(10);
	Red_comet.beRepaired(10);
	return (0);
}
