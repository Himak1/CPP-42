/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Base.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/14 17:34:03 by jhille        #+#    #+#                 */
/*   Updated: 2022/10/17 17:24:42 by jhille        ########   odam.nl         */
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
	public:
		A();
		~A();
};

class B : public Base
{
	public:
		B();
		~B();
};

class C : public Base
{
	public:
		C();
		~C();
};

Base*	generate( void );
void	identify(Base* p);
void	identify(Base& p);

#endif
