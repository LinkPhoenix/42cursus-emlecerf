/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emlecerf <emlecerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 10:43:27 by emlecerf          #+#    #+#             */
/*   Updated: 2020/11/17 12:00:12 by emlecerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 128)
		return (1);
	return (0);	
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("I need 1 argument\n");
		return (0);
	}

	int cpy = *argv[1];
	printf("*argv[1] = %d\n", *argv[1]);
	printf("ft_ascii return %d\n", ft_isascii(cpy));
	printf("ascii return %d\n", isascii(cpy));
	return (0);
}

