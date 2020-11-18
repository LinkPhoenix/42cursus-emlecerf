/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emlecerf <emlecerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 19:07:42 by emlecerf          #+#    #+#             */
/*   Updated: 2020/11/17 19:31:05 by emlecerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
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
	printf("\033[0;32mft_isalpha\033[0m = \"%d\"\n", ft_isalpha(argv1));
	printf("\033[0;32misalpha\033[0m = \"%d\"\n", isalpha(argv1));
	return (0);
}
