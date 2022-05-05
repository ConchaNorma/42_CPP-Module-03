/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnorma <cnorma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 20:27:16 by cnorma            #+#    #+#             */
/*   Updated: 2022/05/05 21:33:25 by cnorma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//int	main( void )
//{
//	ClapTrap hob("Fill");

//	hob.attack("Ted");
//	hob.takeDamage(2);
//	hob.beRepaired(1);
//	hob.takeDamage(7);
//	hob.beRepaired(3);
//	hob.takeDamage(17);

//	return 0;
//}

//#include <iostream>

//#include <ClapTrap.hpp>

//#define HEADER() std::cout << "\033[32mSTART : " << __func__ << "\033[0m" << std::endl;

void  Test1(void) {
  std::cout << "**** TEST1 ****" << std::endl << std::endl;
  ClapTrap a("Ivan");

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
	ClapTrap A("Elik");
	ClapTrap B("Luk");

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

  ClapTrap a("hoge");
  ClapTrap b(a);
  ClapTrap c;
  ClapTrap d("fuga");
  c = b;
}

int main( void ) {
	Test1();
	Test2();
	Test3();
  return 0;
}
