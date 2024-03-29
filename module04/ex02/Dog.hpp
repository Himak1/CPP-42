/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/13 13:41:52 by jhille        #+#    #+#                 */
/*   Updated: 2022/09/02 15:28:00 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog( Dog const & src );
		~Dog();
		Dog &	operator=( Dog const & rhs );

		void	makeSound() const;
	private:
		Brain*	brain;
};

#endif
