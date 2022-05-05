/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnorma <cnorma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 20:24:20 by cnorma            #+#    #+#             */
/*   Updated: 2022/05/05 22:40:50 by cnorma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap("ScavTrap")
{
	std::cout << "ScavTrap called defaut constructor" << std::endl;
	hit_points = 100;
	energy_points = 50;
	attack_points = 20;
}

ClapTrap::ClapTrap(std::string name): ClapTrap(std::string name)
{
	std::cout << "ScavTrap called NAMED constructor" << std::endl;
	name = name;
	hit_points = 100;
	energy_points = 50;
	attack_points = 20;
}


ScavTrap& ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	name = other.name;
	hit_points = other.hit_points;
	energy_points = other.energy_points;
	attack_points = other.attack_points;

	return *this;
}

ScavTrap::ScavTrap(const ScavTrap& other)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = other;
}

void ScavTrap::attack(const std::string& target)
{
	if (energy_points <= 0 || hit_points <= 0)
		return ;
	std::cout << "ScavTrap " << name << " attacks " << target;
	std::cout << " with " << attack_points << " points of damage." << std::endl;
	energy_points--;
	std::cout << "ScavTrap " << name << "'s energy level is " << energy_points << "\n" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << name << ": ScavTrap called Destructor" << std::endl;
}
