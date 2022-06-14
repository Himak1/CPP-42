/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/13 13:18:48 by jhille        #+#    #+#                 */
/*   Updated: 2022/06/14 15:41:08 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>
# include "Brain.hpp"

class Animal
{
	public:
		Animal();
		Animal( Animal const & src );
		//~Animal();
		virtual ~Animal();
	
		Animal&		operator=( Animal const & rhs );

		virtual void	makeSound() const;
		std::string		getType() const;
	protected:
		std::string	type;
	private:
		Brain*	brain;
};

#endif