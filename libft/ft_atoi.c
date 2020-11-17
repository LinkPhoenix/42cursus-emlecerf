/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emlecerf <emlecerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 13:34:56 by emlecerf          #+#    #+#             */
/*   Updated: 2020/11/17 17:33:16 by emlecerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int i;
	int minus;
	int res;

	i = 0;
	minus = 1;
	res = 0;
	while ((str[i] >= 11 && str[i] <= 15) || str[i] == 32)
		i++;
	if (str[i] == '-')
	{
		minus = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	return (res * minus);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("I need 1 argument!\n");
		return (0);
	}

	printf("argv[1] = \"%s\"\n", argv[1]);
	printf("atoi = \"%d\"\n", atoi(argv[1]));
	printf("ft_atoi = \"%d\"\n", ft_atoi(argv[1]));
	return (0);
}
