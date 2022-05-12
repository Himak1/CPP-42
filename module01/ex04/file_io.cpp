/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   file_io.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/12 14:05:23 by jhille        #+#    #+#                 */
/*   Updated: 2022/05/12 15:42:20 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "file_io.h"

static int linesInFile(const char* fileName)
{
	int				lineCount;
	std::fstream	file;
	std::string		unused;

	lineCount = 0;
	file = std::fstream(fileName);
	if (!file.fail())
	{
		while (getline(file, unused))
			lineCount++;
	}
	else
		lineCount = -1;
	return (lineCount);
}

std::string	*create_buffer(const char* fileName)
{
	std::string*	buffer;
	int				lineCount;

	lineCount = linesInFile(fileName);
	if (lineCount == -1)
		return (NULL);
	buffer = new std::string[lineCount];
	return (buffer);
}

int	createOutputFilename(std::fstream& outputFile, const char* inputFilename)
{
	std::string		outputFilename(inputFilename);

	outputFilename.append(".replace");
	outputFile.open(outputFilename);
	if (outputFile.fail())
		return (-1);
	return (0);
}
