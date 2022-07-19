/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 13:01:54 by amorion-          #+#    #+#             */
/*   Updated: 2022/07/19 18:01:24 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* Constructors and destructor */

ClapTrap::ClapTrap() : name("Unnamed") , Hitpoints(10), Energy_points(10), Attack_damage(0)
{
	std::cout << "Default constructor: " << this->name << std::endl;
}
ClapTrap::ClapTrap(ClapTrap const &src)
{
	this->name = src.name;
	this->Hitpoints = src.Hitpoints;
	this->Energy_points = src.Energy_points;
	this->Attack_damage  = src.Attack_damage;
	std::cout << "Copy constructor: " << this->name << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), Hitpoints(10), Energy_points(10), Attack_damage(0)
{
	std::cout << "Parametric constructor: " << this->name << std::endl;
}
ClapTrap::~ClapTrap()
{
	std::cout << "Destructor: " << this->name << std::endl;
	return;
}
/* Getters and Setters */
std::string ClapTrap::getName(void) const
{
	return(this->name);
}

unsigned int ClapTrap::getHitpoints(void) const
{
	return(this->Hitpoints);
}

unsigned int ClapTrap::getEnergy_points(void) const
{
	return(this->Energy_points);
}

unsigned int ClapTrap::getAttack_damage(void) const
{
	return(this->Attack_damage);
}

void	ClapTrap::setName(std::string const name)
{
	this->name = name;
}

void	ClapTrap::setHitpoints(unsigned int n)
{
	this->Hitpoints = n;
}

void	ClapTrap::setEnergy_points(unsigned int n)
{
	this->Energy_points = n;
}

void	ClapTrap::setAttack_damage(unsigned int n)
{
	this->Attack_damage = n;
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
		<< this->Attack_damage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if(this->Hitpoints - amount < this->Hitpoints)
		this->Hitpoints -= amount;
	std::cout << "ClapTrap " << this->name << " has taken " << amount << " damage "
		<< "Now it has " << this->Hitpoints << " Hitpoints" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	this->Hitpoints += amount;
	if(this->Hitpoints > 10)
		this->Hitpoints = 10;
	std::cout << "ClapTrap " << this->name << " repaired " << amount << " points "
		<< "Now it has " << this->Hitpoints << " Hitpoints." << std::endl;
}
