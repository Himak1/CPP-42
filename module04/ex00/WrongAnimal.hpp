/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/13 13:18:48 by jhille        #+#    #+#                 */
/*   Updated: 2022/06/13 15:29:09 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal( WrongAnimal const & src );
		~WrongAnimal();
	
		WrongAnimal&		operator=( WrongAnimal const & rhs );

		virtual void	makeSound() const;
		std::string		getType() const;
	protected:
		std::string	type;
	private:
};

#endif