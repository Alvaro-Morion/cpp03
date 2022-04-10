/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 12:59:32 by amorion-          #+#    #+#             */
/*   Updated: 2022/04/10 13:48:14 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(ScavTrap const &src);
		ScavTrap(std::string const name);

		~ScavTrap();

		ScavTrap const	&operator=(ScavTrap const &rhs);
		
		void	attack(std::string const &target);
		void	guardGate(void);
};
#endif
