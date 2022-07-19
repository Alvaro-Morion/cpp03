/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 17:53:37 by amorion-          #+#    #+#             */
/*   Updated: 2022/07/19 19:39:12 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "ScavTrap.hpp"
# include "FragTrap.hpp"
class	DiamondTrap : public ScavTrap, public FragTrap 
{
	public:
		DiamondTrap();
		DiamondTrap(DiamondTrap const &src);
		DiamondTrap(std::string const name);

		~DiamondTrap();

		std::string  getName(void) const;
		void	setName(std::string const name);

		DiamondTrap const &operator=(DiamondTrap const &rhs);

		void	attack(std::string target);
		void	WhoAmI(void);

	private:
		std::string name;

};
#endif
