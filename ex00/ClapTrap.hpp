/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 13:01:39 by amorion-          #+#    #+#             */
/*   Updated: 2022/07/19 18:00:11 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class	ClapTrap{
	public:
		ClapTrap();
		ClapTrap(ClapTrap const &src);
		ClapTrap(std::string const name);

		~ClapTrap();
		
		std::string	getName(void) const;
		unsigned int getHitpoints(void) const;
		unsigned int getEnergy_points(void) const;
		unsigned int getAttack_damage(void) const;

		void setName(std::string const name);
		void setHitpoints(unsigned int const n);
		void setEnergy_points(unsigned int const n);
		void setAttack_damage(unsigned int const n);

		ClapTrap const	&operator=(ClapTrap const &rhs);
		void	attack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int	amount);

	private:
		std::string	name;
		unsigned int	Hitpoints;
		unsigned int	Energy_points;
		unsigned int	Attack_damage;
};
#endif
