/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lferro <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 17:34:01 by lferro            #+#    #+#             */
/*   Updated: 2023/06/21 09:38:35 by lferro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	if (nb == 2)
		return (nb);
	else
		nb *= ft_recursive_factorial(nb - 1);
	return (nb);
}

/* int	main(void)
{
	int	nb = 5;
	printf("%d", ft_recursive_factorial(nb));
	return (0);
} */
