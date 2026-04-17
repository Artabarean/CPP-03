/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 14:07:47 by atabarea          #+#    #+#             */
/*   Updated: 2026/04/17 12:54:21 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap &);
		~ScavTrap(void);
		void	guardGate(void);
		void	attack(const std::string& target);
		ScavTrap& operator=(const ScavTrap&);
	
	private:
		int gatekeep;
		
};

#endif