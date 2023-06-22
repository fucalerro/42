/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lferro <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 10:06:57 by lferro            #+#    #+#             */
/*   Updated: 2023/06/10 11:15:38 by lferro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void rush(int x, int y)
{
	int i;
	int j;
	j = 0;
	i = 0;

	while (i < y)
	 {

		while (j < x)
		{
			ft_putchar('A');
			j++;
		}
		j = 0;
		ft_putchar('\n');
		i++;
	 }	

}


int main(void)
{
	rush(5, 3);
	return (0);
}
