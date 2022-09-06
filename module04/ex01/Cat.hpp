/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/13 13:41:52 by jhille        #+#    #+#                 */
/*   Updated: 2022/09/02 15:28:06 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat( Cat const & src );
		~Cat();
		Cat &	operator=( Cat const & rhs );

		void	makeSound() const;
	private:
		Brain*	brain;
};

#endif
