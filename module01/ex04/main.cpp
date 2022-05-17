/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/12 12:56:45 by jhille        #+#    #+#                 */
/*   Updated: 2022/05/17 12:10:41 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

static int	createOutputFile(std::fstream& outputFile, const char* inputFilename)
{
	std::string		outputFilename(inputFilename);

	outputFilename.append(".replace");
	outputFile.open(outputFilename, std::ios::out);
	if (outputFile.fail())
		return (-1);
	return (0);
}

int main(int argc, char *argv[])
{
	std::fstream	inputFile;
	std::fstream	outputFile;
	std::string		needle;
	std::string		line;
	int				needle_index;

	if (argc < 4)
		return (-1);
	needle = std::string(argv[2]);
	inputFile.open(argv[1]);
	if (createOutputFile(outputFile, argv[1]) != -1)
	{
		while (getline(inputFile, line))
		{
			needle_index = line.find(needle);
			if (needle_index != -1)
			{
				line.insert(needle_index, std::string(argv[3]));
				needle_index = line.find(needle);
				line.erase(needle_index, needle.size());
			}
			outputFile << line << std::endl;
		}
		outputFile.close();
	}
	inputFile.close();
	return (0);
}
