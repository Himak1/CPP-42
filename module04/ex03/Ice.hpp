/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/16 16:47:52 by jhille        #+#    #+#                 */
/*   Updated: 2022/06/16 17:37:38 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice( Ice const& src );
		~Ice();

		Ice &		operator=( Ice const& rhs );


	private:
		Ice();
};

#endif