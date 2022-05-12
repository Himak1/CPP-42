/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   file_io.h                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/12 14:36:50 by jhille        #+#    #+#                 */
/*   Updated: 2022/05/12 15:38:47 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_IO_H
# define FILE_IO_H

# include <fstream>
# include <string>

std::string*    createBuffer(const char *fileName);
int				createOutputFile(std::fstream& outputFile, const char* inputFile);

#endif