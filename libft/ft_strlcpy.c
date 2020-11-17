/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emlecerf <emlecerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 17:40:18 by emlecerf          #+#    #+#             */
/*   Updated: 2020/11/17 19:04:00 by emlecerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int i;
	size_t s;

	i = 0;
	s = 0;
	while(src[i] && s < size)
	{
		dst[i] = src[i];
		i++;
		s++;
	}
	return (s);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		printf("I need 3 arguments\n");
		return (0);
	}

	char *argv1_bis;
	argv1_bis = strdup(argv[1]);
	char *argv2_bis;
	argv2_bis = strdup(argv[2]);
	printf("\033[0;31mMY STRLCPY\033[0m\n");
	printf("argv[1] = %s\nargv[2] = %s\nargv[3] = %s\n", argv[1], argv[2], argv[3]);
	printf("\033[0;32mft_strlcpy\033[0m = %zu\n", ft_strlcpy(argv[1], argv[2], atoi(argv[3])));
	printf("argv[1] = %s\nargv[2] = %s\nargv[3] = %s\n", argv[1], argv[2], argv[3]);
	printf("#############\n");
	printf("\033[0;31mTHE REAL ONE STRLCPY\033[0m\n");
	printf("argv[1] = %s\nargv[2] = %s\nargv[3] = %s\n", argv1_bis, argv2_bis, argv[3]);
	printf("\033[0;32mstrlcpy\033[0m = %zu\n", strlcpy(argv[1], argv[2], atoi(argv[3])));
	printf("argv[1] = %s\nargv[2] = %s\nargv[3] = %s\n", argv[1], argv[2], argv[3]);
	return (0);
}
