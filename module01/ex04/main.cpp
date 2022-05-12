/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/12 12:56:45 by jhille        #+#    #+#                 */
/*   Updated: 2022/05/12 17:24:42 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "file_io.h"



int main(int argc, char *argv[])
{
	std::fstream	inputFile;
	std::fstream	outputFile;
	std::string		*linesbuffer;

	if (argc < 4)
		return (-1);
	linesbuffer = createBuffer(argv[1]);
	inputFile.open(argv[1]);
	if (createOutputFile(outputFile, argv[1]) != -1)
	{
		
	}
	delete linesbuffer;
	return (0);
}
