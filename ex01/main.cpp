/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 09:59:56 by atabarea          #+#    #+#             */
/*   Updated: 2026/04/17 12:11:24 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap Rx78("Rx78");
	ClapTrap Zaku("Zaku");
	ScavTrap Rx78_2(Rx78);

	Rx78_2.beRepaired(10);
	Zaku.beRepaired(10);
	for (int i = 0; i < 51; i++)
	{
		Zaku.attack("Rx78_2");
		if (Zaku.getHP() > 0)
			Rx78_2.takeDamage(Zaku.getDamage());
		Rx78_2.attack("Zaku");
		if (Rx78_2.getHP() > 0)
			Zaku.takeDamage(Rx78_2.getDamage());
		Rx78_2.guardGate();
	}
	Zaku.beRepaired(10);
	Rx78_2.beRepaired(10);
	return (0);
}
