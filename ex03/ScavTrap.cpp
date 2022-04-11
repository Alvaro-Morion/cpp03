/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 13:07:32 by amorion-          #+#    #+#             */
/*   Updated: 2022/04/11 18:26:35 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/* Constructor and destructor */
ScavTrap::ScavTrap()
{
	this->name = "Unnamed";
	this->Hitpoints = 100;
	this->Energy_points = 50;
	this->Attack_damage = 20;
	std::cout << "ScavTrap: Default constructor called " << this->name
		<< std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
	this->name = src.name;
	this->Hitpoints = src.Hitpoints;
	this->Energy_points = src.Energy_points;
	this->Attack_damage = src.Attack_damage;
	std::cout << "ScavTrap: copy constructor called " << this->name
		<< std::endl; 
}

ScavTrap::ScavTrap(std::string const name)
{
	this->name = name;
    this->Hitpoints = 100;
    this->Energy_points = 50;
    this->Attack_damage = 20;
	std::cout << "ScavTrap: Parametric constructor called " << this->name
		<< std::endl;
}

/* Operators */

ScavTrap const	&ScavTrap::operator=(ScavTrap const &rhs)
{
	this->name = rhs.name;
	this->Hitpoints = rhs.Hitpoints;
	this->Energy_points = rhs.Energy_points;
	this->Attack_damage = rhs.Attack_damage;
	return(*this);
}
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap: Destructor called " << this->name << std::endl;
}

/* Function */

void	ScavTrap::attack(std::string const &target)
{
	std::cout << "ScavTrap " << this->name << " attacks " << target << " causing "
		<< this->Attack_damage << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->name << " is guarding a gate\n";
}
