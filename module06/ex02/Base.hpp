/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Base.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/14 17:34:03 by jhille        #+#    #+#                 */
/*   Updated: 2022/10/17 11:36:38 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

class Base
{
	public:
		virtual ~Base();
};

class A : public Base
{
};

class B : public Base
{
};

class C : public Base
{
};

#endif
