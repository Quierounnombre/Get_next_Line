/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicgarci <vicgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:32:34 by vicgarci          #+#    #+#             */
/*   Updated: 2022/09/21 17:37:07 by vicgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char		*line;
	char		*existn;
	char		*tmp;
	int			charread;
	static char	buffer[(BUFFER_SIZE + 1)];

	if (fd > 0 && BUFFER_SIZE > 0)
	{
		tmp = NULL;
		charread = read(fd, buffer, BUFFER_SIZE);
		while (!existn && (charread > 0))
		{
			buffer[charread] = '\0';
			existn = ft_strchr(buffer, '\n');
			tmp = line;
			line = NULL;
			line = ft_strjoin(tmp, buffer);
			free(tmp);
			charread = read(fd, buffer, BUFFER_SIZE);
		}
		if (charread == 0)
			return (line);
		if (existn)
		{
			tmp = line;
			buffer = existn;
			existn = ft_substr(buffer, 0, existn - buffer);
			line = ft_strjoin(tmp, existn);
			free (tmp);
			free (existn);
		}
		return (line);
	}
	return (NULL);
}

/*Neceita:
	-Una función que guarde el valor de la linea.
	-Una función para el ciclo principal de insertar en la linea.
	-Una función para la exepción de salto de linea.
	-Que no pete?
*/