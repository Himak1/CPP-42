/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   IMateria.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/16 15:17:27 by jhille        #+#    #+#                 */
/*   Updated: 2022/06/16 17:37:47 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIA_HPP
# define IMATERIA_HPP

# include "AMateria.hpp"

class IMateria
{
	public:
		virtual ~IMateriaSource() {}
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const& type) = 0;
};

#endif
