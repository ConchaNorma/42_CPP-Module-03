/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnorma <cnorma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 20:20:24 by cnorma            #+#    #+#             */
/*   Updated: 2022/05/07 19:41:43 by cnorma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap& operator=(const FragTrap &other);
	FragTrap(const FragTrap &other);

	void highFivesGuys();

	~FragTrap();
};

#endif
