/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 18:05:41 by amorion-          #+#    #+#             */
/*   Updated: 2022/04/11 18:40:35 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/* Consructors and destructor */
DiamondTrap::DiamondTrap()
{
	this->name = "Unnamed";
	ClapTrap::name = this->name + "_clap_name";
	this->Hitpoints = FragTrap::Hitpoints;
	this->Energy_points = ScavTrap::Energy_points;
	this->Attack_damage = FragTrap::Attack_damage;
	std::cout << "DiamondTrap: Default construtor called\n";
}

DiamondTrap::DiamondTrap(std::string const name)
{
	this->name = name;
	ClapTrap::name = this->name + "_clap_name";
	this->Hitpoints = FragTrap::Hitpoints;
    this->Energy_points = ScavTrap::Energy_points;
    this->Attack_damage = FragTrap::Attack_damage;
    std::cout << "DiamondTrap: Parametric construtor called " << this->name
		<< std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src)
{
	this->name = src.name;
	ClapTrap::name = src.name + "_clap_name";
	this->Hitpoints = src.Hitpoints;
	this->Energy_points = src.Energy_points;
	this->Attack_damage = src.Attack_damage;
	std::cout << "DiamondTrap: Copy constructor called " << this->name
		<< std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap: destructor called: " << this->name << std::endl;
}

/* Operators */

DiamondTrap const	&DiamondTrap::operator=(DiamondTrap const &rhs)
{
	this->name = rhs.name;
	ClapTrap::name = rhs.name + "_clap_name";
	this->Hitpoints = rhs.Hitpoints;
	this->Energy_points = rhs.Energy_points;
	this->Attack_damage = rhs.Attack_damage;
	return(*this);
}

/* Functions */

void	DiamondTrap::attack(std::string target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::WhoAmI(void)
{
	std::cout << "Name: " << this->name << "\t ClapTrap name: "
		<<ClapTrap::name << std::endl;
}

