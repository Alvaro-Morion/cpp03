/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 12:59:32 by amorion-          #+#    #+#             */
/*   Updated: 2022/07/19 19:40:52 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class	ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(ScavTrap const &src);
		ScavTrap(std::string const name);

		~ScavTrap();

		ScavTrap const	&operator=(ScavTrap const &rhs);
		
		void	attack(std::string const &target);
		void	guardGate(void);

	protected:
		unsigned int getScav_energy(void) const;
	private:
		static const unsigned int scav_energy = 50;
};
#endif
