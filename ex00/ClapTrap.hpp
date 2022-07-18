/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 13:01:39 by amorion-          #+#    #+#             */
/*   Updated: 2022/07/18 17:07:28 by amorion-         ###   ########.fr       */
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
