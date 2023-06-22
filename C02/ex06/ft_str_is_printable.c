/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lferro <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 16:29:21 by lferro            #+#    #+#             */
/*   Updated: 2023/06/14 09:57:16 by lferro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;
	int	k;

	i = 0;
	k = 1;
	while (str[i] != '\0' && k == 1)
	{
		if (str[i] < 32 || str[i] > 126)
			k = 0;
		i++;
	}	
	return (k);
}

/*
int main(void)
{
	char txt[] = "\n";
	ft_str_is_printable(txt);
	printf("%d\n", ft_str_is_printable(txt));
	return (0);
}
*/
