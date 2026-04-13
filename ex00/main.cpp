/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 10:59:44 by atabarea          #+#    #+#             */
/*   Updated: 2026/04/13 12:53:29 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap Epyon("Epyon");
	ClapTrap Wingzero("Wingzero");

	for (int i = 0; i < 12; i++)
	{
		Epyon.attack("Wingzero");
		Wingzero.takeDamage(0);
	}
	Wingzero.beRepaired(10);
	Wingzero.attack("Epyon");
	return (0);
}
