/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 17:11:36 by amorion-          #+#    #+#             */
/*   Updated: 2022/04/11 17:25:28 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/* Constructor and destructor */
FragTrap::FragTrap()
{
	this->name = "Unnamed";
	this->Hitpoints = 100;
	this->Energy_points = 100;
	this->Attack_damage = 30;
	std::cout << "FragTrap: Default constructor called " << this->name
		<< std::endl;
}

FragTrap::FragTrap(FragTrap const &src)
{
	this->name = src.name;
	this->Hitpoints = src.Hitpoints;
	this->Energy_points = src.Energy_points;
	this->Attack_damage = src.Attack_damage;
	std::cout << "FragTrap: copy constructor called " << this->name
		<< std::endl; 
}

FragTrap::FragTrap(std::string const name)
{
	this->name = name;
    this->Hitpoints = 100;
    this->Energy_points = 100;
    this->Attack_damage = 30;
	std::cout << "FragTrap: Parametric constructor called " << this->name
		<< std::endl;
}

/* Operators */

FragTrap const	&FragTrap::operator=(FragTrap const &rhs)
{
	this->name = rhs.name;
	this->Hitpoints = rhs.Hitpoints;
	this->Energy_points = rhs.Energy_points;
	this->Attack_damage = rhs.Attack_damage;
	return(*this);
}
FragTrap::~FragTrap()
{
	std::cout << "FragTrap: Destructor called " << this->name << std::endl;
}

/* Function */

void	FragTrap::attack(std::string const &target)
{
	std::cout << "FragTrap " << this->name << " attacks " << target << " causing "
		<< this->Attack_damage << " points of damage!" << std::endl;
}
void	FragTrap::highFivesGuys(void)
{
	std::cout << "High fives with " << this->name << " FragTrap\n";
}
