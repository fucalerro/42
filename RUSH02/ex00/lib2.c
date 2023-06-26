/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lferro <lferro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 16:55:18 by lferro            #+#    #+#             */
/*   Updated: 2023/06/25 23:20:53 by lferro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

char	*fill_with_zero(char *str, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		str[i++] = 48;
	}
	str[i] = 0;
	return (str);
}
