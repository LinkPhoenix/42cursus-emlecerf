/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emlecerf <emlecerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 12:54:22 by emlecerf          #+#    #+#             */
/*   Updated: 2020/11/18 13:29:07 by emlecerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}

int		main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("\033[0'31mI need 3 arguments\033[0m");
		return (0);
	}

	char *the_real_one = strchr(argv[1], atoi(argv[2]));
	char *my_ft = ft_strchr(argv[1], atoi(argv[2]));
	printf("THE REAL ON : %s\n", strchr(argv[1], atoi(argv[2])));
	printf("MY FUNCTION : %s\n", ft_strchr(argv[1], atoi(argv[2])));
	
	if (the_real_one == my_ft)
		printf("\033[0;32mOK :)\033[0m\n");
	else
		printf("\033[0;31mKO :(\033[0m\n");
	return (0);
}
