/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnorma <cnorma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 20:24:20 by cnorma            #+#    #+#             */
/*   Updated: 2022/04/28 22:45:27 by cnorma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap called defaut constructor\n" << std::endl;
	this->name = "";
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_points = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap called NAMED constructor\n" << std::endl;
	this->name = name;
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_points = 0;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->energy_points == 0)
	{
		std::cout << "ClapTrap " << this->name << " doesn't have ENERGY to attack " << target << std::endl;
		return ;
	}
	if (this->hit_points == 0)
	{
		std::cout << "ClapTrap " << this->name << " doesn't have HEALTH to attack " << target << std::endl;
		std::cout << " Please repair " << this->name << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " attacks " << target;
	std::cout << " with " << this->attack_points << " points" << std::endl;
	this->energy_points--;
	std::cout << "ClapTrap " << this->name << " has " << this->energy_points << " energy level\n" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->name << " get damage " << amount;
	this->hit_points -= amount;
	if (this->hit_points <= 0)
	{
		this->hit_points = 0;
		std::cout << " and DIED\n" << std::endl;
		return ;
	}
	std::cout << ". Its new health level = " << this->hit_points << std::endl;

}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << this->name << " repair itself with " << amount << " points" << std::endl;
	this->hit_points += amount;
	this->energy_points--;
	std::cout << "Its new health level = " << this->hit_points << ", energy level = " << this->energy_points << "\n" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap called Destructor" << std::endl;
}
