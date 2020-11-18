/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emlecerf <emlecerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 19:35:05 by emlecerf          #+#    #+#             */
/*   Updated: 2020/11/17 19:45:35 by emlecerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("\033[0;31mI need 1 argument\033[0m\n");
		return (0);
	}

	int argv1 = *argv[1];
	printf("argv1 = %d\n", argv1);
	printf("\033[0;32mft_isalpha\033[0m = \"%d\"\n", ft_isdigit(argv1));
	printf("\033[0;32misalpha\033[0m = \"%d\"\n", isdigit(argv1));
	return (0);
}
