/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 10:11:35 by atabarea          #+#    #+#             */
/*   Updated: 2026/04/20 10:35:26 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	this->name = "Default";
	this->Hit_points = 100;
	this->Attack_damage = 30;
	this->Energy_points = 50;
	this->MaxHP = this->Hit_points;
	std::cout << "Default constructor for a DiamondTrap instance has been called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
	: ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name)
{
	this->name = name;
	this->Hit_points = 100;
	this->Attack_damage = 30;
	this->Energy_points = 50;
	this->MaxHP = this->Hit_points;
	std::cout << this->name << " has spawned as a DiamondTrap instance on the battlefield" << std::endl;
}
DiamondTrap::DiamondTrap(DiamondTrap &other)
	: ClapTrap(other.name + "_clap_name"), FragTrap(other.name + "_clap_name"), ScavTrap(other.name + "_clap_name")
{
	*this = other;
	std::cout << this->name << " clone has been created" << std::endl;
}
DiamondTrap::~DiamondTrap(void)
{
	std::cout << this->name << " was a DiamondTrap instance" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->Attack_damage = other.Attack_damage;
	this->Hit_points = other.Hit_points;
	this->Energy_points = other.Energy_points;
	this->MaxHP = other.MaxHP;
	this->name = other.name;
	return (*this);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "I am "<< this->name << " and also " << this->ClapTrap::name << std::endl; 
}
