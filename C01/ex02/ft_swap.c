/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lferro <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 20:21:57 by lferro            #+#    #+#             */
/*   Updated: 2023/06/11 20:27:04 by lferro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	buffer;

	buffer = *a;
	*a = *b;
	*b = buffer;
}

/*
int	main(void)
{
	int	a = 11;
	int	b = 22;

	printf("%d", a);
	printf("%d", b);

	ft_swap(&a, &b);

	char rl ='"\n';

	write(1, &rl, 2);

	printf("%d", a);
	printf("%d", b);
	return (0);
}
*/
