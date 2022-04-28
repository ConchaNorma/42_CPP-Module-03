/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnorma <cnorma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 20:27:16 by cnorma            #+#    #+#             */
/*   Updated: 2022/04/28 22:40:14 by cnorma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main( void )
{
	ClapTrap hob("Fill");

	hob.attack("Ted");
	hob.takeDamage(2);
	hob.beRepaired(1);
	hob.takeDamage(7);
	hob.beRepaired(3);
	hob.takeDamage(17);

	return 0;
}
