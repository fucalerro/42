/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lferro <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 16:01:44 by lferro            #+#    #+#             */
/*   Updated: 2023/06/14 09:55:06 by lferro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	k;

	i = 0;
	k = 1;
	while (str[i] != '\0' && k == 1)
	{
		if (str[i] < 97 || str[i] > 122)
			k = 0;
		i++;
	}
	return (k);
}

/*
int	main(void)
{
	char	txt[] = "";

	ft_str_is_lowercase(txt);
	printf("%d\n", ft_str_is_lowercase(txt));
	return (0);
}
*/
