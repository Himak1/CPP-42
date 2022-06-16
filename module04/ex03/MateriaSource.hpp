/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/16 17:20:12 by jhille        #+#    #+#                 */
/*   Updated: 2022/06/16 17:37:52 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateria.hpp"

class MateriaSource : IMateria
{
	public:
		MateriaSource();
		MateriaSource( MateriaSource const& src );
		~MateriaSource();

		MateriaSource &		operator=( MateriaSource const& rhs );
	private:

};

#endif
