/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lferro <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 15:11:31 by lferro            #+#    #+#             */
/*   Updated: 2023/06/16 12:11:13 by lferro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

/*
int main(void)
{
	char t1[] = "1234567";
	char t2[] = "123456"; 
	unsigned int n  = 10;
	strncmp(t1, t2, n);
	ft_strncmp(t1, t2, n);
	printf("%d\n", ft_strncmp(t1, t2, n));
	printf("%d\n", strncmp(t1, t2, n));
	return (0);
}
*/
