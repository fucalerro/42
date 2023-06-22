/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lferro <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 10:16:24 by lferro            #+#    #+#             */
/*   Updated: 2023/06/15 23:06:37 by lferro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while ((s1[i] || s2[i]) && count == 0)
	{
		count += s1[i] - s2[i];
		i++;
	}
	return (count);
}

/*
int main(void)
{
	char t1[] = "3123456";
		char t2[] = "123456";
	printf("%d\n", ft_strcmp(t1, t2));
	printf("%d", strcmp(t1, t2));
	return (0);
}
*/
