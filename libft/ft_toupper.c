/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emlecerf <emlecerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 15:12:31 by emlecerf          #+#    #+#             */
/*   Updated: 2020/11/18 15:56:33 by emlecerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c -= 32;
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

	int the_real_one = toupper(atoi(argv[1]));
	int my_ft = ft_toupper(atoi(argv[1]));
	printf("THE REAL ON : %d\n", toupper(atoi(argv[1])));
	printf("MY FUNCTION : %d\n", ft_toupper(atoi(argv[1])));

	if (the_real_one == my_ft)
		printf("\033[0;32mOK :)\033[0m\n");
	else
		printf("\033[0;31mKO :(\033[0m\n");
	return (0);
}
