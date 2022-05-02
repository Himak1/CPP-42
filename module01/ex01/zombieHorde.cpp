/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   zombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/02 16:09:34 by jhille        #+#    #+#                 */
/*   Updated: 2022/05/02 16:27:16 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie* ret;

    ret = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        ret[i].setName(name);
    }
    return (ret);
}
