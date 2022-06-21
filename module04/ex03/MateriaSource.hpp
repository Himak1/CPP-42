/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/16 17:20:12 by jhille        #+#    #+#                 */
/*   Updated: 2022/06/21 14:47:56 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource();
		MateriaSource( MateriaSource const& src );
		~MateriaSource();

		MateriaSource&	operator=( MateriaSource const& rhs );

		void		learnMateria( AMateria* newMat);
		AMateria*	createMateria( std::string const& type );
	private:
		AMateria*	storage[4];
};

#endif
