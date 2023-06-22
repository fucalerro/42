/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lferro <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 12:23:06 by lferro            #+#    #+#             */
/*   Updated: 2023/06/14 09:54:22 by lferro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	k;

	i = 0;
	k = 1;
	while (str[i] != '\0')
	{
		if ((str[i] < 97 || str[i] > 122) && (str[i] < 65 || str[i] > 90))
			k = 0;
		i++;
	}
	return (k);
}

/*
int	main(void)
{
	char	text[] = "";

	ft_str_is_alpha(text);
	printf("%d\n", ft_str_is_alpha(text));
	return (0);
}
*/
