/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnorma <cnorma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 20:20:24 by cnorma            #+#    #+#             */
/*   Updated: 2022/04/28 20:59:43 by cnorma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>
# include <string>
# include <cmath>

class ClapTrap
{
public:
	ClapTrap();
	ClapTrap(std::string name);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);


	~ClapTrap();

private:
	std::string name;
	int	hit_points;
	int	energy_points;
	int	attack_points;
};

#endif
