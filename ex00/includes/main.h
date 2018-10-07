/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschuppe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 19:57:39 by rschuppe          #+#    #+#             */
/*   Updated: 2018/10/07 19:57:40 by rschuppe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include <stdlib.h>

# include "utils.h"

int	ft_get_rush_size(char *str, int *width, int *height);
int	ft_get_rush_type(char *str, int cols, int rows, int types[3]);
int	ft_validate_rush(char *str, int types[5], int width, int height);

#endif
