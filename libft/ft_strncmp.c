/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emlecerf <emlecerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 16:27:57 by emlecerf          #+#    #+#             */
/*   Updated: 2020/11/18 16:57:26 by emlecerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		printf("I need 3 arguments");
		return (0);
	}

	int the_real_one = strncmp(argv[1], argv[2], atoi(argv[3]));
	int my_ft = ft_strncmp(argv[1], argv[2], atoi(argv[3]));
	printf("THE REAL ON : %d\n", strncmp(argv[1], argv[2], atoi(argv[3])));
	printf("MY FUNCTION : %d\n", ft_strncmp(argv[1], argv[2], atoi(argv[3])));

	if (the_real_one == my_ft)
		printf("\033[0;32mOK :)\033[0m\n");
	else
		printf("\033[0;31mKO :(\033[0m\n");
	return (0);
}
