/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/07 16:50:30 by jhille        #+#    #+#                 */
/*   Updated: 2022/06/08 18:04:20 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap( void );
		FragTrap( std::string givenName );
		FragTrap( FragTrap const& src );
		~FragTrap( void );

		FragTrap&		operator=( FragTrap const& rhs );

		void		attack( const std::string& target );
		void		highFivesGuys( void );
	private:

};

#endif