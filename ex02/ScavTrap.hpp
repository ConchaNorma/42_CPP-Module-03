/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnorma <cnorma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 20:20:24 by cnorma            #+#    #+#             */
/*   Updated: 2022/05/07 18:58:20 by cnorma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap& operator=(const ScavTrap &other);
	ScavTrap(const ScavTrap &other);

	void attack(const std::string& target);
	void guardGate();

	~ScavTrap();
};

#endif
