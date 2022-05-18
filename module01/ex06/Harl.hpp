/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/17 12:38:28 by jhille        #+#    #+#                 */
/*   Updated: 2022/05/18 15:06:30 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

class Harl
{
	public:
					Harl();
					~Harl();
		void		complain( std::string level );
		typedef		void(Harl::*fpointer)(void);
	private:
		void		debug( void );
		void		info( void );
		void		warning( void );
		void		error( void );
		fpointer	arr[4];
		std::string	levels[4];
};

#endif
