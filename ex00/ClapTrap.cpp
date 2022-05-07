/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnorma <cnorma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 20:24:20 by cnorma            #+#    #+#             */
/*   Updated: 2022/05/07 19:02:34 by cnorma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap called defaut constructor" << std::endl;
	this->name = "";
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_points = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap called NAMED constructor" << std::endl;
	this->name = name;
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_points = 0;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->name = other.name;
	this->hit_points = other.hit_points;
	this->energy_points = other.energy_points;
	this->attack_points = other.attack_points;

	return *this;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->energy_points <= 0 || this->hit_points <= 0)
		return ;
	std::cout << "ClapTrap " << this->name << " attacks " << target;
	std::cout << " with " << this->attack_points << " points of damage." << std::endl;
	this->energy_points--;
	std::cout << "ClapTrap " << this->name << "'s energy level is " << this->energy_points << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->energy_points <= 0 && this->hit_points <= 0)
		return ;
	std::cout << "ClapTrap " << this->name << " get damage " << amount << " points";
	this->hit_points -= amount;
	if (this->hit_points <= 0)
	{
		this->hit_points = 0;
		std::cout << " and DIED" << std::endl;
		return ;
	}
	std::cout << ". Its new health level = " << this->hit_points << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energy_points <= 0 || this->hit_points <= 0) {
		std::cout << "ClapTrap " << this->name << " doesn't have enough energy points or hit points to do anything!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " repair itself with " << amount << " points" << std::endl;
	this->hit_points += amount;
	this->energy_points--;
	std::cout << "Its new health level = " << this->hit_points << ", energy level = " << this->energy_points << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap called Destructor" << std::endl;
}
