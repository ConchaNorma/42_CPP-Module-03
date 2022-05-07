/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnorma <cnorma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 20:24:20 by cnorma            #+#    #+#             */
/*   Updated: 2022/05/07 19:08:00 by cnorma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
	std::cout << "ScavTrap called defaut constructor" << std::endl;
	this->name = "";
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_points = 20;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	std::cout << "ScavTrap called NAMED constructor" << std::endl;
	this->name = name;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_points = 20;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	this->name = other.name;
	this->hit_points = other.hit_points;
	this->energy_points = other.energy_points;
	this->attack_points = other.attack_points;

	return *this;
}

ScavTrap::ScavTrap(const ScavTrap &other): ClapTrap(other)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = other;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->energy_points <= 0 || this->hit_points <= 0)
		return ;
	std::cout << "ScavTrap " << this->name << " attacks " << target;
	std::cout << " with " << this->attack_points << " points of damage.";
	energy_points--;
	std::cout << "ScavTrap " << this->name << "'s energy level = " << this->energy_points << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << this->name << ": ScavTrap called Destructor" << std::endl;
}
