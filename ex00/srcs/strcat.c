/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 18:03:43 by elchrist          #+#    #+#             */
/*   Updated: 2018/10/07 14:40:32 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *s1)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int j;
	int	total_chars;
	char *result;

	total_chars = ft_strlen(dest) + ft_strlen(src);
	result = (char *)malloc(sizeof(char) * (total_chars + 1));
	i = 0;
	while (dest[i] != '\0')
	{
		result[i] = dest[i];
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		result[i] = src[j];
		i++;
		j++;
	}
	result[j] = '\0';
	return (result);
}
