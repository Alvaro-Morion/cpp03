/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 13:02:08 by amorion-          #+#    #+#             */
/*   Updated: 2022/04/11 17:25:31 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	{
		std::cout << "\t CLAPTRAP \t" << std::endl;
		ClapTrap CT1;
		ClapTrap CT2("claptrap");
		ClapTrap CT3(CT2);

		CT1 = CT3;
		CT1.attack("Enemy");
		CT1.takeDamage(10);
		CT1.beRepaired(5);
	}
	{
		std::cout << "\t SCAVTRAP \t" << std::endl;
		ScavTrap S1("Scav");
		ScavTrap S2;
		ScavTrap S3(S1);

		S2 = S1;
		S1.attack("Enemy");
		S1.guardGate();
	}
	{
		std::cout << "\t FRAGTRAP \t" << std::endl;
		FragTrap F1("Frap");
		FragTrap F2;
		FragTrap F3(F1);

		F2 = F1;
		F2.attack("Enemy");
		F2.highFivesGuys();
	}
	return(0);
}
