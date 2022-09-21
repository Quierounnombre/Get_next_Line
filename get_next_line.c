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
	char	*buffer;
	char	*s;

	buffer = malloc_buffer(BUFFER_SIZE);
	s = read(fd, &buffer, BUFFER_SIZE);
	return (s);
}

void	freeall(char *s)
{
	 
}
