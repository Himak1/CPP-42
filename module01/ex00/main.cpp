/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/26 15:46:47 by jhille        #+#    #+#                 */
/*   Updated: 2022/05/02 16:32:06 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie* bob;

    bob = newZombie("Bob");
    randomChump("kate");
    delete bob;
    return (0);
}
