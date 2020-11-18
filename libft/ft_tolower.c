/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emlecerf <emlecerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 15:59:17 by emlecerf          #+#    #+#             */
/*   Updated: 2020/11/18 16:15:57 by emlecerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c += 32;
		return (c);
	}
	return (c);
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("I need 1 argument");
		return (0);
	}

	int the_real_one = tolower(atoi(argv[1]));
	int my_ft = ft_tolower(atoi(argv[1]));
	printf("THE REAL ON : %d\n", tolower(atoi(argv[1])));
	printf("MY FUNCTION : %d\n", ft_tolower(atoi(argv[1])));

	if (the_real_one == my_ft)
		printf("\033[0;32mOK :)\033[0m\n");
	else
		printf("\033[0;31mKO :(\033[0m\n");
	return (0);
}
