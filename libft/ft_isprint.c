/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emlecerf <emlecerf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 12:43:02 by emlecerf          #+#    #+#             */
/*   Updated: 2020/11/17 13:14:52 by emlecerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("I need 1 argument!\n");
		return (0);
	}
	
	int cpy = *argv[1];
	printf("*argv[1] (char) = \"%c\"\n", *argv[1]);
	printf("*argv[1] (decimal) = %d | ft_isprint = %d\n", cpy, ft_isprint(cpy));
	printf("*argv[1] (decimal) = %d | isprint = %d\n", cpy,isprint(cpy));
	return (0);
}
