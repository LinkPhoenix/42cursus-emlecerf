/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emlecerf <emlecerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 00:12:39 by emlecerf          #+#    #+#             */
/*   Updated: 2020/11/17 10:22:25 by emlecerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("I need one argument please!\n");
		return(0);
	}
	
	printf("ft_strlen - string \"%s\" | len : \"%zu\"\n", argv[1], ft_strlen(argv[1]));
	printf("strlen - string : \"%s\" | len : \"%zu\"\n", argv[1], strlen(argv[1]));
	return (0);
}
