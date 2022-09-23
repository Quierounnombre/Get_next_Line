/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 19:58:57 by marvin            #+#    #+#             */
/*   Updated: 2022/09/23 19:58:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "fcntl.h"

int main(void)
{
	char *s;
	int fd = open("/.Test.c", O_RDONLY);
	s = get_next_line(fd);
	printf("%s", s);
	close (fd);
}