/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 21:05:12 by coder             #+#    #+#             */
/*   Updated: 2022/09/02 22:23:32 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char j)
{
	write(1, &j, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int j;
	
	i = 0;
	j = 0;
	while(i < argc)
	{
		while(argv[j] != "\0")
		{
		ft_putchar(*argv[j]);
		j++;
		}
	ft_putchar('\n');
	i++;
	}
	return(0);
}
