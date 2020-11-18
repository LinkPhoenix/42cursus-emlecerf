/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emlecerf <emlecerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 10:43:40 by emlecerf          #+#    #+#             */
/*   Updated: 2020/11/18 12:47:51 by emlecerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (haystack[i] && i < len)
	{
		while ((needle[j] && (needle[j] == haystack[i] && (i < len))))
		{
			if (needle[j + 1] == '\0')
				return ((char *)(&haystack[i - j]));
			i++;
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}

int		main(int argc, char **argv)
{
	if (argc != 4)
	{
		printf("\033[0;31mI need 3 arguments\n");
		return (0);
	}

	char *the_real_one = strnstr(argv[1], argv[2], atoi(argv[3]));
	char *my_ft = ft_strnstr(argv[1], argv[2], atoi(argv[3]));
	printf("THE REAL ONE : %s\n", strnstr(argv[1], argv[2], atoi(argv[3])));
	printf("MY FUNCTION : %s\n", ft_strnstr(argv[1], argv[2], atoi(argv[3])));
	
	if (the_real_one == my_ft)
		printf("\033[0;32mOK :)\n");
	else
		printf("\033[0;31mKO :(\n");
	return (0);
}
