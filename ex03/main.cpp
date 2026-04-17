/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 09:59:56 by atabarea          #+#    #+#             */
/*   Updated: 2026/04/17 09:51:47 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ScavTrap Rx78("Rx78");
	FragTrap Zaku("Zaku");
	FragTrap Zaku_2(Zaku);

	Zaku_2.beRepaired(10);
	Rx78.beRepaired(10);
	for (int i = 0; i < 101; i++)
	{
		Zaku_2.attack("Rx78");
		if (Zaku_2.getHP() > 0)
			Rx78.takeDamage(Zaku_2.getDamage());
		Zaku_2.highFivesGuys();
		Rx78.attack("Zaku_2");
		if (Rx78.getHP() > 0)
			Zaku_2.takeDamage(Rx78.getDamage());
	}
	Zaku_2.beRepaired(10);
	Rx78.beRepaired(10);
	return (0);
}
