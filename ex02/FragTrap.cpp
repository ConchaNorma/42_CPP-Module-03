/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnorma <cnorma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 20:24:20 by cnorma            #+#    #+#             */
/*   Updated: 2022/05/07 19:44:12 by cnorma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	std::cout << "FragTrap called defaut constructor" << std::endl;
	this->name = "";
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_points = 30;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	std::cout << "FragTrap called NAMED constructor" << std::endl;
	this->name = name;
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_points = 30;
}

FragTrap& FragTrap::operator=(const FragTrap &other)
{
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	this->name = other.name;
	this->hit_points = other.hit_points;
	this->energy_points = other.energy_points;
	this->attack_points = other.attack_points;

	return *this;
}

FragTrap::FragTrap(const FragTrap &other): ClapTrap(other)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = other;
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << this->name << " give me FIVES" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << this->name << ": FragTrap called Destructor" << std::endl;
}
