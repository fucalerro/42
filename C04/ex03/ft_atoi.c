/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lferro <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 12:37:41 by lferro            #+#    #+#             */
/*   Updated: 2023/06/19 13:08:33 by lferro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	isneg;
	int	number;

	isneg = 1;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\f'
		|| str[i] == '\v' || str[i] == '\r'
		|| str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			isneg = -1 * isneg;
		i++;
	}
	while (str[i] < 58 && str[i] > 46)
	number = (number * 10 + str[i++]) - '0';
	number *= isneg;
	return (number);
}

/*
int	main(void)
{
	char a[] = "   ---+++234324sdfr432423e";
	printf("%d", ft_atoi(a));
}
*/
