/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Data.h                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: jhille <jhille@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/14 12:14:05 by jhille        #+#    #+#                 */
/*   Updated: 2022/10/14 17:07:05 by jhille        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_H
# define DATA_H
# include <stdint.h>

typedef struct	s_Data
{
	int		memInt;
	char	memChar;
}			Data;

uintptr_t	serialize(Data* ptr);
Data*		deserialize(uintptr_t raw);

#endif
