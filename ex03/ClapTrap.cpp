/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 10:59:50 by atabarea          #+#    #+#             */
/*   Updated: 2026/04/16 12:31:02 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
	: name("Default"), Hit_points(10), Energy_points(10), Attack_damage(0), MaxHP(Hit_points)
{
	std::cout << "Default constructor for a ClapTrap instance has been called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
	: name(name), Hit_points(10), Energy_points(10), Attack_damage(0), MaxHP(Hit_points)
{
	std::cout << this->name << " has spawned as a ClapTrap instance on the battlefield" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	*this = other;
	std::cout << this->name << " clone has been created" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << this->name << " was a ClapTrap instance" << std::endl;
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
	if (this->Hit_points == this->getMaxHP())
	{
		std::cout << this->name << " can't repair themselves since they are already full health!" << std::endl;
		return;
	}
	this->Energy_points -= 1;
	this->Hit_points += amount;
	if (this->Hit_points > this->getMaxHP())
		this->Hit_points = this->getMaxHP();
	std::cout << this->name << " repairs themselves for " << amount << " hit points!" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->Attack_damage = other.Attack_damage;
	this->Hit_points = other.Hit_points;
	this->Energy_points = other.Energy_points;
	this->name = other.name;
	return (*this);
}

int ClapTrap::getDamage(void)
{
	return (this->Attack_damage);
}

int ClapTrap::getMaxHP(void)
{
	return (this->MaxHP);
}

int ClapTrap::getHP(void)
{
	return (this->Hit_points);
}