/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstorey <lstorey@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 12:31:59 by lstorey           #+#    #+#             */
/*   Updated: 2024/01/16 15:57:24 by lstorey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int main(void)
{
	char	*line;
	int		fd;

	fd = open("wind in the willows.txt", O_RDONLY);

	while ((line = get_next_line(fd)))
	{
		printf("%s\n", line);
		free(line);
		line++;
	}
	return (0);
}
