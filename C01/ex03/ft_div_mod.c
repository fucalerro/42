/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lferro <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 08:30:03 by lferro            #+#    #+#             */
/*   Updated: 2023/06/12 13:22:33 by lferro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int	main(void)
{
	int	div_n;
	int	mod_n;

	write(1, &div_n, 2);
	write(1, &mod_n, 2);
	write(1, "\n", 1);
	ft_div_mod(10, 2, &div_n, &mod_n);
	write(1, "\n", 1);
	write(1, &div_n, 2);
	write(1, &mod_n, 2);
	return (0);
}
*/
