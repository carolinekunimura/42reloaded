/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 22:26:10 by coder             #+#    #+#             */
/*   Updated: 2022/09/02 22:51:00 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int		i;
	char	c;

	i = 0;
	c = 0;
	while (str[i] != c)
	{
		i++;
		c++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		size;
	char	*rcv;
	int		j;

	size = ft_strlen(src);
	rcv = malloc(sizeof(char) * (size + 1));
	j = 0;
	while (src[j] != '\0')
	{
		rcv[j] = src[j];
		j++;
	}
	rcv[j] = '\0';
	return (rcv);
}
