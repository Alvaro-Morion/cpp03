/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 13:02:08 by amorion-          #+#    #+#             */
/*   Updated: 2022/04/10 13:53:31 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	{
		ClapTrap CT1;
		ClapTrap CT2("claptrap");
		ClapTrap CT3(CT2);

		CT1 = CT3;
		CT1.attack("Enemy");
		CT1.takeDamage(10);
		CT1.beRepaired(5);
	}
	{
		ScavTrap S1("Scav");
		ScavTrap S2;
		ScavTrap S3(S1);

		S1.attack("Enemy");
		S1.guardGate();
	}
	return(0);
}
