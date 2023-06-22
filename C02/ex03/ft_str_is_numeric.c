/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lferro <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 14:00:02 by lferro            #+#    #+#             */
/*   Updated: 2023/06/14 09:54:48 by lferro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	k;

	i = 0;
	k = 1;
	while (str[i] != '\0')
	{
		if ((str[i] > 47 && str[i] < 58) && k == 1)
			k = 1;
		else
			k = 0;
		i++;
	}
	return (k);
}

/*
int	main(void)
{
	char	text[] = "02437509834760928347692870597136502348765970958";
	ft_str_is_numeric(text);
	printf("%d\n", ft_str_is_numeric(text));
	return (0);
}
*/
