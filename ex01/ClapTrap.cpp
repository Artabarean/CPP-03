/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 10:59:50 by atabarea          #+#    #+#             */
/*   Updated: 2026/04/13 14:14:55 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
	: name(name), Hit_points(100), Energy_points(50), Attack_damage(20)
{
	std::cout << this->name << " has spawned on the battlefield" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << this->name << " has despawned" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->Hit_points <= 0)
	{
		std::cout << this->name << " is dead and won't be able to attack " << target << "!" << std::endl;
		return;
	}
	if (Energy_points > 0)
		this->Energy_points -= 1;
	else
	{
		std::cout << this->name << " doesn't have enough energy points to attack " << target << "!" << std::endl;
		return;
	}
	std::cout << this->name << " attacks " << target << ", causing " << this->Attack_damage 
		<< " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->Hit_points > 0)
	{
		this->Hit_points -= amount;
		std::cout << this->name << " takes " << amount << " points of damage";
		if (this->Hit_points <= 0)
			std::cout <<" dying in the process";
		std::cout << "!" <<std::endl;
		return;
	}
	if (this->Hit_points <= 0)
		std::cout << this->name << " is already dead! Don't disrespect the deceased!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->Hit_points <= 0)
	{
		std::cout << this->name << " is already dead, therefore they can't be repaired!" << std::endl;
		return;
	}
	if (this->Energy_points == 0)
	{
		std::cout << this->name << " lacks the necessary energy points to be repaired!" << std::endl;
		return;
	}
	if (this->Hit_points == 100)
	{
		std::cout << this->name << " can't repair themselves since they are already full health!" << std::endl;
		return;
	}
	this->Energy_points -= 1;
	this->Hit_points += amount;
	if (this->Hit_points > 100)
		this->Hit_points = 100;
	std::cout << this->name << " repairs themselves for " << amount << " hit points!" << std::endl;
}
