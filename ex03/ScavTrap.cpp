/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 09:59:52 by atabarea          #+#    #+#             */
/*   Updated: 2026/04/16 14:22:25 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
	: gatekeep(0)
{
	this->Hit_points = 100;
	this->Attack_damage = 20;
	this->Energy_points = 50;
	this->MaxHP = this->Hit_points;
	std::cout << "Default constructor for a ScavTrap instance has been called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
	: ClapTrap(name), gatekeep(0)
{
	this->Hit_points = 100;
	this->Attack_damage = 20;
	this->Energy_points = 50;
	this->MaxHP = this->Hit_points;
	std::cout << this->name << " has spawned as a ScavTrap instance on the battlefield" << std::endl;
}
ScavTrap::ScavTrap(ScavTrap &other)
{
	*this = other;
	std::cout << this->name << " clone has been created" << std::endl;
}
ScavTrap::~ScavTrap(void)
{
	std::cout << this->name << " was a ScavTrap instance" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	if (this->Hit_points <= 0)
	{	
		std::cout << this->name << " is dead and won't be able to switch the gatekeeper status!" << std::endl;
		return;
	}
	if (this->gatekeep == 0)
	{
		std::cout << this->name << " is in gatekeeper mode" << std::endl;
		this->gatekeep = 1;
		return;
	}
	else
	{
		std::cout << this->name << " disables the gatekeeper mode" << std::endl;
		this->gatekeep = 0;
	}
}

ScavTrap& ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->Attack_damage = other.Attack_damage;
	this->Hit_points = other.Hit_points;
	this->Energy_points = other.Energy_points;
	this->MaxHP = other.MaxHP;
	this->gatekeep = other.gatekeep;
	this->name = other.name;
	return (*this);
}
