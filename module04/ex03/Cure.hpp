/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/16 16:47:52 by jhille        #+#    #+#                 */
/*   Updated: 2022/06/20 16:41:24 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure( Cure const& src );
		~Cure();

		std::string const&	getType() const;
		AMateria*			clone() const;
		void				use(ICharacter& target);
	private:
};

#endif
