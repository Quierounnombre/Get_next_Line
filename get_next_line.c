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
	static char	*buffer;
	char		*line;
	char		*existN;
	char		*tmp;

	if (!buffer)
		buffer = (char *)malloc (sizeof(char) * BUFFER_SIZE);
	if (buffer)
	{
		tmp = NULL;
		while (!existN)
		{
			read(fd, buffer, BUFFER_SIZE);
			existN = ft_strchr(buffer, '\n');
			if (existN)
			{
				ft_strlcpy(tmp, buffer, ft_lencpy(buffer, existN));
				line = ft_strjoin(line, buffer);
				buffer = ft_substr(existN, 0, BUFFER_SIZE);
			}
			else
				line = ft_strjoin(line, buffer);
		}
		free(tmp);
		return (line);
	}
	return (NULL);
}

int	ft_lencpy(char *buffer, char *existN)
{
	int	lenbuffer;
	int	lenexistN;

	lenbuffer = 0;
	lenexistN = 0;
	ft_strlen(buffer);
	ft_strlen(existN);
	return (lenbuffer - lenexistN);
}
