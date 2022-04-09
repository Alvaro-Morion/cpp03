/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 13:01:54 by amorion-          #+#    #+#             */
/*   Updated: 2022/04/09 13:54:00 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* Constructors and destructor */

ClapTrap::ClapTrap() : name("Unnamed") , Hitpoints(10), Energy_points(10), Attack_damage(0)
{
	std::cout << "Default constructor:" << this->name << std::endl;
}
ClapTrap::ClapTrap(ClapTrap const &src)
{
	this->name = src.name;
	this->Hitpoints = src.Hitpoints;
	this->Energy_points = src.Energy_points;
	this->Attack_damage  = src.Attack_damage;
	std::cout << "Copy constructor:" << this->name << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), Hitpoints(10), Energy_points(10), Attack_damage(0)
{
	std::cout << "Parametric constructor:" << this->name;
}
ClapTrap::~ClapTrap()
{
	std::cout << "Destructor:" << this->name << std::endl;
	return;
}

/* Operators */

ClapTrap const & ClapTrap::operator=(ClapTrap const &rhs)
{
	this->name = rhs.name;
	this->Hitpoints = rhs.Hitpoints;
	this->Energy_points = rhs.Energy_points;
	this->Attack_damage = rhs.Attack_damage;
	return(*this);
}

/* Funtions */

void	ClapTrap::attack(std::string const &target)
{
	std::cout << "ClapTrap "<<this->name << " attacks " << target << " causing "
		<< this-> Hitpoints << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->Attack_damage += amount;
	std::cout << "ClapTrap " << this->name << " has taken " << amount << " damage points "
		<< "Now it has " << this->Attack_damage << " damage points" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if(this->Attack_damage < amount)
		this->Attack_damage = 0;
	else
		this->Attack_damage -= amount;
	std::cout << "ClapTrap " << this->name << " repaired " << amount << " damage points "
		<< "Now it has " << this->Attack_damage << " damage points" << std::endl;
}