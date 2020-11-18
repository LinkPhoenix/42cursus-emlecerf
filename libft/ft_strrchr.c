/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emlecerf <emlecerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 14:31:00 by emlecerf          #+#    #+#             */
/*   Updated: 2020/11/18 15:07:57 by emlecerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strrchr(const char *s, int c)
{
	int i;
	int len;

	i = 0;
	while (s[i])
		i++;
	len = i;
	while (i > 0)
	{
		if (s[i] == c)
			return((char *)s + i);
		i--;
	}
	return (NULL);
}

int		main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("\033[0'31mI need 2 arguments\033[0m");
		return (0);
	}

	char *the_real_one = strrchr(argv[1], atoi(argv[2]));
	char *my_ft = ft_strrchr(argv[1], atoi(argv[2]));
	printf("THE REAL ON : %s\n", strrchr(argv[1], atoi(argv[2])));
	printf("MY FUNCTION : %s\n", ft_strrchr(argv[1], atoi(argv[2])));

	if (the_real_one == my_ft)
		printf("\033[0;32mok :)\033[0m\n");
	else
		printf("\033[0;31mKO :(\033[0m\n");
	return (0);
}
