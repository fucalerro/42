/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lferro <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 19:03:09 by lferro            #+#    #+#             */
/*   Updated: 2023/06/14 09:57:58 by lferro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] < 91 && str[i] > 64)
		{
			str[i] = str[i] + 32;
		}	
		i++;
	}
	return (str);
}

/*
int	main(void)
{
	char	text[] = "oeuZZZbygerOU{{```}}}:::[[[]]]2345RWBGWAAA";
	ft_strlowcase(text);
	printf("%s\n", text);
	return (0);
}
*/
