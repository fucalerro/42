/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lferro <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 22:47:35 by lferro            #+#    #+#             */
/*   Updated: 2023/06/21 10:10:41 by lferro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index > 1)
		return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	else
		return (-1);
}
