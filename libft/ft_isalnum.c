/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emlecerf <emlecerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 19:49:29 by emlecerf          #+#    #+#             */
/*   Updated: 2020/11/17 19:57:50 by emlecerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') ||
			(c >= 'A' && c <= 'Z'))
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
	printf("\033[0;32mft_isalnum\033[0m = \"%d\"\n", ft_isalnum(argv1));
	printf("\033[0;32misalnum\033[0m = \"%d\"\n", isalnum(argv1));
	return (0);
}
