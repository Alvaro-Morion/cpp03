/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 13:02:08 by amorion-          #+#    #+#             */
/*   Updated: 2022/04/11 18:40:33 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

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
	{
		std::cout << "\t DIAMONDTRAP \t" << std::endl;
		DiamondTrap D1("Diam");
		DiamondTrap D2;
		DiamondTrap D3(D1);

		D3.WhoAmI();
		D2.attack("Enemy");
		D2 = D3;
		D1.highFivesGuys();
		D1.guardGate();
	}
	return(0);
}
