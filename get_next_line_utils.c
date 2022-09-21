/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicgarci <vicgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:33:00 by vicgarci          #+#    #+#             */
/*   Updated: 2022/09/21 16:46:56 by vicgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*malloc_buffer(size_t size)
{
	char	*s;

	if (!size)
		return (NULL);
	s = (char *)malloc (size * sizeof(char));
	if (!s)
		return (NULL);
	return (s);
}
