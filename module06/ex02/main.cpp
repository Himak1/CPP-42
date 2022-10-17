/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 15:28:13 by jhille        #+#    #+#                 */
/*   Updated: 2022/10/17 17:33:41 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int	main()
{
	Base	*ptr;

	ptr = generate();
	identify(*ptr);
	identify(ptr);
	delete ptr;
	return (0);
}
