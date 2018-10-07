/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschuppe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 13:53:49 by rschuppe          #+#    #+#             */
/*   Updated: 2018/10/07 13:53:51 by rschuppe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"
#include <stdio.h>

void	ft_handler(char *str)
{
	int width;
	int height;

	if (!ft_get_rush_size(str, &width, &height))
	{
		ft_putstr("Size error");
	}
	else
	{
		printf("width: %d, height: %d", width, height);
	}
}

int		main(void)
{
	ft_handler("o--o\n|  |\n|  |\no--o\n");
	return (0);
}
