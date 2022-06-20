/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/16 16:47:52 by jhille        #+#    #+#                 */
/*   Updated: 2022/06/20 16:41:39 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		Ice( Ice const& src );
		~Ice();

		std::string const&	getType() const;
		AMateria*			clone() const;
		void				use(ICharacter& target);
	private:
};

#endif
