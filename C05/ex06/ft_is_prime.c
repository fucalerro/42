/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lferro <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 14:11:37 by lferro            #+#    #+#             */
/*   Updated: 2023/06/21 10:46:06 by lferro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	square(int nb)
{
	return (nb *= nb);
}

int	ft_sqrt(int nb)
{
	int	a;

	a = 1;
	while (square(a) < nb)
		a++;
	if (square(a) == nb)
		return (a);
	return (0);
}

int	ft_is_prime(int nb)
{
	int	a;
	int	n;

	a = nb / 2 + 1;
	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	while (a > 1)
	{
		if (a > 46341)
			a = 46340;
		n = nb % a;
		if (n == 0)
			return (0);
		a--;
	}
	return (1);
}

/* int	main(void)
{
	printf("%d\n", ft_is_prime(2147483647));
	return (0);
} */
