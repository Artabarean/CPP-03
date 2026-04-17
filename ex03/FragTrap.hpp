/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 12:00:09 by atabarea          #+#    #+#             */
/*   Updated: 2026/04/17 11:08:00 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FragTRAP_HPP
# define FragTRAP_HPP

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap &);
		~FragTrap(void);
		void	highFivesGuys(void);
		FragTrap& operator=(const FragTrap&);
		
	private:
		
};

#endif