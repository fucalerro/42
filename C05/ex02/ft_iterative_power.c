/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lferro <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 17:39:39 by lferro            #+#    #+#             */
/*   Updated: 2023/06/21 10:11:36 by lferro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	unsigned int	n;

	n = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power > 0)
	{
		if (power == 1)
			return (n);
		n = n * nb;
		power--;
	}
	return (n);
}

/* int	main(void)
{
	printf("2^0: %d\n", ft_iterative_power(2, 0));
    printf("10^3: %d\n", ft_iterative_power(10, 3));
    printf("10^4: %d\n", ft_iterative_power(10, 4));
	printf("4^2:  %d\n", ft_iterative_power(4, 2));
    printf("2^1:  %d\n", ft_iterative_power(2, 1));
	return (0);
} */
