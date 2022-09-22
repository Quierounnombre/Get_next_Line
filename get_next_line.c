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
	char		*buffer;
	char		*line;
	static int	NLine;

	buffer = ft_malloc_buffer(BUFFER_SIZE);
	if (buffer)
	{
		read(fd, &buffer, BUFFER_SIZE);
		line = ft_linegetter(buffer, NLine)
		NLine++;
		return (s);
	}
	return (NULL);
}

char	*ft_linegetter(char	*buffer, int Nline)
{
	int		slen;
	char	*s;
	char	*line;
	int		i;

	i = 0;
	flag = 0;
	slen = ft_strchr_len(buffer, '\n');
	if (slen > 0)
	{
		s = ft_substr(buffer, 0, slen);
		line = ft_strjoin(line, s);
		if (ft_strchr(buffer, '\n') != NULL || ft_strchr(buffer, '\0' != NULL))
		{
			i++;
			if (Nline == i)
				return (line);
			ft_linegetter()
		}
		free(s);
		free(buffer);
	}
}