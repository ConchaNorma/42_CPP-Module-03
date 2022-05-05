/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnorma <cnorma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 20:20:24 by cnorma            #+#    #+#             */
/*   Updated: 2022/05/05 22:36:47 by cnorma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include <iostream>
# include <string>
# include <cmath>
# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap& operator=(const ScavTrap &other);
	ScavTrap(const ClapTrap &other);
	void attack(const std::string& target);
	//void takeDamage(unsigned int amount);
	//void beRepaired(unsigned int amount);
	void guardGate();
	~ScavTrap();

//private:
//	std::string name;
//	int	hit_points;
//	int	energy_points;
//	int	attack_points;
};

#endif
