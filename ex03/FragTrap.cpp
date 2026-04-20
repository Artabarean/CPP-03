/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 12:03:25 by atabarea          #+#    #+#             */
/*   Updated: 2026/04/20 10:32:17 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	this->Hit_points = 100;
	this->Attack_damage = 30;
	this->Energy_points = 100;
	this->MaxHP = this->Hit_points;
	std::cout << "Default constructor for a FragTrap instance has been called" << std::endl;
}

FragTrap::FragTrap(std::string name)
	: ClapTrap(name)
{
	this->Hit_points = 100;
	this->Attack_damage = 30;
	this->Energy_points = 100;
	this->MaxHP = this->Hit_points;
	std::cout << this->name << " has spawned as a FragTrap instance on the battlefield" << std::endl;
}
FragTrap::FragTrap(FragTrap &other)
	: ClapTrap(other.name)
{
	*this = other;
	std::cout << this->name << " clone has been created" << std::endl;
}
FragTrap::~FragTrap(void)
{
	std::cout << this->name << " was a FragTrap instance" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->Attack_damage = other.Attack_damage;
	this->Hit_points = other.Hit_points;
	this->Energy_points = other.Energy_points;
	this->MaxHP = other.MaxHP;
	this->name = other.name;
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	if (this->Hit_points <= 0)
	{
		std::cout << this->name << " is dead and can't request to high-five anyone!" << std::endl;
		return;
	}
	std::cout << this->name << " requests to high-five everyone!" << std::endl;
}
