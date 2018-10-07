/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validate_rush.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschuppe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 19:47:27 by rschuppe          #+#    #+#             */
/*   Updated: 2018/10/07 19:47:28 by rschuppe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"
#include <stdio.h>

int ft_validate_rush(char *str, int types[5], int width, int height)
{
    int i;
    int pos[4];

    //printf("ft_validate_rush: %s\n%d %d\n", str, width, height);
    i = 0;
    ft_compute_extreme(width, height, pos);
    while (str[i] != '\0')
    {
        if (i != pos[0] && i != pos[1] && i != pos[2] && i != pos[3])
        {
            //printf("1. %d %d %d %d\n", pos[0], pos[1], pos[2], pos[3]);
            //printf("2. %d %d %d %d %d\n", types[0], types[1], types[2], types[3], types[4]);
            if ((i > pos[0] && i < pos[1]) || (i > pos[2] && i < pos[3]))
            {
                printf("Вверхняя/Нижняя стенка: %d - %c\n", i, str[i]);
                if (types[0] && str[i] != '-')
                    return (0);
                if (types[1] && str[i] != '*')
                    return (0);
                if ((types[2] || types[3] || types[4]) && str[i] != 'B')
                    return (0);
            }
            else if((width > 1 && height > 1) && (i % (width + 1) == 0 || ((i - (width - 1)) % (width + 1)) == 0))
            {
                printf("Левая/Правая стенка: %d - %c. %d %d\n", i, str[i], i % (width + 1), i % (i - (width - 1)));
                if (types[0] && str[i] != '|')
                    return (0);
                if (types[1] && str[i] != '*')
                    return (0);
                if ((types[2] || types[3] || types[4]) && str[i] != 'B')
                    return (0);
            }
            else if (str[i] != ' ' && str[i] != '\n')
                return (0);
        }
        i++;
    }
    return (1);
}
