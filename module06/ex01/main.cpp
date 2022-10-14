/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/14 12:05:34 by jhille        #+#    #+#                 */
/*   Updated: 2022/10/14 17:07:14 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Data.h"

int main()
{
	uintptr_t	serialPtr;
	Data		*data;

	data = new Data;
	data->memInt = 42;
	data->memChar = 'a';

	serialPtr = serialize(data);
	data = 0;
	data = deserialize(serialPtr);

	std::cout << data->memInt << std::endl << data->memChar << std::endl;

	delete data;
}
