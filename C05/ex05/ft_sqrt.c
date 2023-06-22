/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lferro <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 13:32:54 by lferro            #+#    #+#             */
/*   Updated: 2023/06/21 10:16:58 by lferro           ###   ########.fr       */
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
	while (square(a) < nb && a < 46341)
		a++;
	if (square(a) == nb)
		return (a);
	return (0);
}

/* int	main(void)
{
	printf("%d", ft_sqrt(2147483647));
	return (0);
} */
