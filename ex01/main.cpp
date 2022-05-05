/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnorma <cnorma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 20:27:16 by cnorma            #+#    #+#             */
/*   Updated: 2022/05/05 22:33:51 by cnorma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

void  Test1(void) {
  std::cout << "**** TEST1 ****" << std::endl << std::endl;
  ScavTrap a("Ivan");

  a.attack("fuga");
  a.takeDamage(5);
  a.beRepaired(10);
  for (int i = 0; i < 10; i++) {
     a.beRepaired(10);
  }
  a.takeDamage(1000);
  a.attack("Ted");
  a.takeDamage(0);
  a.beRepaired(10);
}

void Test2()
{
	std::cout << "**** TEST2 ****" << std::endl << std::endl;
	ScavTrap A("Elik");
	ScavTrap B("Luk");

	A.attack("TARGET A");
	B.attack("TARGET B");

	A.takeDamage(5);
	B.takeDamage(8);

	A.beRepaired(1);
	B.beRepaired(6);

	A.takeDamage(5);
	B.takeDamage(11);

	A.beRepaired(10);
	B.beRepaired(15);

	A.beRepaired(10);
	A.beRepaired(10);
	A.beRepaired(10);
	A.beRepaired(10);
	A.beRepaired(10);
	A.beRepaired(10);

	A.takeDamage(5);
	A.attack("TARGET A");
	A.attack("TARGET A");
}

void  Test3(void) {
std::cout << "**** TEST3 ****" << std::endl << std::endl;

  ScavTrap a("hoge");
  ScavTrap b(a);
  ScavTrap c;
  ScavTrap d("fuga");
  c = b;
}

int main( void ) {
	Test1();
	Test2();
	Test3();
  return 0;
}
