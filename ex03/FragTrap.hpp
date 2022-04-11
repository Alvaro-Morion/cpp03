/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 17:09:39 by amorion-          #+#    #+#             */
/*   Updated: 2022/04/11 17:55:30 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"

class	FragTrap : virtual public ClapTrap
{
	public:
		FragTrap();
		FragTrap(FragTrap const &src);
		FragTrap(std::string const name);

		~FragTrap();

		FragTrap const	&operator=(FragTrap const &rhs);
		
		void	attack(std::string const &target);
		void	highFivesGuys(void);
};
#endif
