/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lferro <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 18:38:40 by lferro            #+#    #+#             */
/*   Updated: 2023/06/19 18:39:13 by lferro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power > 1)
		nb *= ft_recursive_power(nb, power - 1);
	return (nb);
}

/* int	main(void)
{
	printf("4: %d\n", ft_recursive_power(4, 1));
    printf("1: %d\n", ft_recursive_power(3, 0));
    printf("27: %d\n", ft_recursive_power(3, 3));
    printf("4: %d\n", ft_recursive_power(2, 2));
    printf("1: %d\n", ft_recursive_power(0, 0));
    printf("?: %d\n", ft_recursive_power(-3, -3));
    printf("?: %d\n", ft_recursive_power(-3, -4));
	return (0);
} */