/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnorma <cnorma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 20:27:16 by cnorma            #+#    #+#             */
/*   Updated: 2022/05/07 19:42:39 by cnorma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void  Test1(void) {
  std::cout << "\n**** TEST1 ****" << std::endl << std::endl;
  FragTrap a("Ivan");

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
	std::cout << "\n**** TEST2 ****" << std::endl << std::endl;
	FragTrap A("Elik");
	FragTrap B("Luk");

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
std::cout << "\n**** TEST3 ****" << std::endl << std::endl;

  FragTrap a("hoge");
  FragTrap b(a);
  FragTrap c;
  FragTrap d("fuga");
  c = b;
}

void	Test4(void) {
	std::cout << "\n**** TEST4 ****" << std::endl << std::endl;
	FragTrap a("Elik");
	a.attack("Luk");
	a.takeDamage(6);
	a.beRepaired(4);
	a.takeDamage(3);
	a.highFivesGuys();
	a.beRepaired(8);
	a.takeDamage(17);
}

void	Test5(void) {
	std::cout << "\n**** TEST5 ****" << std::endl << std::endl;
	ClapTrap b("Elik");
	b.attack("Luk");
	b.takeDamage(6);
	b.beRepaired(4);
	b.takeDamage(3);
	b.beRepaired(8);
	b.takeDamage(17);
}

void	Test6(void) {
	std::cout << "\n**** TEST6 ****" << std::endl << std::endl;
	FragTrap c("Elik");
	c.attack("Luk");
	c.takeDamage(6);
	c.beRepaired(4);
	c.highFivesGuys();
	c.takeDamage(3);
	c.beRepaired(8);
	c.takeDamage(17);
}

int main( void ) {
	//Test1();
	//Test2();
	Test3();
	//Test4();
	//Test5();
	Test6();
  return 0;
}
